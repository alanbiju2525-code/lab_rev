import java.util.Scanner;

class stack {
    int arr[];
    int top;
    int size;

    stack(int size){
        this.size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){

        if(top == size-1){
            System.out.println("Stack overflow ");
            return;
        }

        top++;
        arr[top] = data;

    }

    void pop(){

        if(top == -1){
            System.out.println("Stack Underflow ");
            return;
        }

        System.out.println(arr[top] + " poped!");
        top--;

    }

    void peek(){
        if(top == -1){
            System.out.println("Stack Underflow ");
            return;
        }

        System.out.println(arr[top] + " top element");
    }

    void display(){
        if(top == -1){
            System.out.println("Stack Underflow ");
            return;
        }

        for(int i = top; i>=0; i--){
            System.out.println(arr[i] + "\n");
        }
    }

}

public class stackop{

    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter the size of the stack : " );
    int n = sc.nextInt();

    stack s = new stack(n);

    int choice;

        do {
            System.out.println("\n1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Peek");
            System.out.println("4. Display");
            System.out.println("5. Exit");

            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter element: ");
                    int data = sc.nextInt();
                    s.push(data);
                    break;

                case 2:
                    s.pop();
                    break;

                case 3:
                    s.peek();
                    break;

                case 4:
                    s.display();
                    break;

                case 5:
                    System.out.println("Exit");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 5);

    


    sc.close();
}

}