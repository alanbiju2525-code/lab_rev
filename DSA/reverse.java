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

    void push(char data){

        if(top == size-1){
            System.out.println("Stack overflow ");
            return;
        }

        top++;
        arr[top] = data;

    }

    void display(){
        if(top == -1){
            System.out.println("Stack is empty!");
        }

        for(int i = top; i>=0; i--){
            System.out.print(arr[i]);
            
        }
    }


}

public class reverse {
    public static void main(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        int k = str.length();

        stack s = new stack(k);

        for(int i = 0; i<k; i++){
            char c = str.charAt(i);

            s.push(c);
        }
        s.display();

        sc.close();
    }
}
