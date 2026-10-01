import java.util.Scanner;

class stack {
    char arr[];
    int top;
    int size;

    stack(int size){
        this.size = size;
        arr = new char[size];
        top = -1;
    }

    void push(char data){
        top++;
        arr[top] = data;
    }

    void pop(){
       
        top--;
    }

    char peek(){
        return arr[top];
    }

    boolean isempty(){
        return top == -1;
    }

}


public class parentheses {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        int n = str.length();
        stack s = new stack(n);

        for(int i = 0; i<n; i++){
            char c = str.charAt(i);
            if(c == '(' || c == '{' || c == '['){
                s.push(c);
            }

            if(c == ')' || c == '}' || c == ']'){
                

                if(s.isempty()){
                    System.out.println("Not Valid!");
                    return;
                }
                int t = s.peek();

                if(c == ')' && t != '('){
                    System.out.println("Not Valid!");
                    return;
                }
                if(c == '}' && t != '{'){
                    System.out.println("Not Valid!");
                    return;
                }
                if(c == ']' && t != '['){
                    System.out.println("Not Valid!");
                    return;
                }
                s.pop();
            }
        }
        if(s.isempty()){
            System.out.println("Valid!");
        }
        else
            System.out.println("Not Valid!");

        sc.close();
    }
}
