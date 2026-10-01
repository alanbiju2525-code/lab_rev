import java.util.Scanner;


class stack{
    char arr[];
    int size;
    int top;

    stack(int size){
        this.size = size;
        arr = new char[size];
        top = -1;
    }

    int current(){
        return top+1;
    }

    void pop(){
        top--;
    }

    void push(char data){
        top++;
        arr[top] = data;
        
    }
    
}
public class maxpartheses {
    public static void main(String[] args){
        

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        int k = str.length();
        stack s = new stack(k);
        int max = 0;

        for(int i = 0; i<str.length(); i++){
            if(str.charAt(i) == '('){
                s.push('(');

                if(s.current() > max ){
                    max = s.current();
                }
            }
            else if(str.charAt(i) == ')'){
                s.pop();
            }
        }

        System.out.println("Max : "+max);


        sc.close();

    }
}
