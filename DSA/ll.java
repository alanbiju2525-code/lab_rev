import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
}
public class ll {

    static Node head ,temp;

    static void create(int data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
            
        }
        else{
            temp = head;

            while(temp.next != null){
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    static void display(){
        temp = head;
        while(temp != null){
            System.out.print(temp.data +">>");
            temp = temp.next;
        }

        System.out.print("NULL");


    }

    static void insert(int pos , int value){
        temp = head;
        Node newNode = new Node(value);
        if(pos == 1){
            newNode.next = head;
            head = newNode;
        }
        else{
            for(int i = 1; i<pos-1; i++){
                temp = temp.next;
            }
            if(temp.next == null){
                temp.next = newNode;
                newNode.next = null;
            }
            else{
                newNode.next = temp.next;
                temp.next = newNode;
            }
        }
    }

    static void update(int pos, int value){
        temp = head;
        if(pos == 1){
            temp.data = value;
        }
        for(int i = 1; i<pos; i++){
                temp = temp.next;
            }
  temp.data = value;
    }



    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the no of nodes : ");
        int n = sc.nextInt();

        System.out.print("Enter the values : \n");
        for(int i = 0; i<n; i++){
            System.out.print((i+1)+". ");
            int value = sc.nextInt();
            create(value);
        }
        // System.out.println("Enter the position to be inserted : ");
        // int p = sc.nextInt();
        // System.out.print("Enter the values : \n");
        // int value = sc.nextInt();
        // insert(p,value);
        // display();

        // System.out.println("Enter the position to be inserted : ");
        // p = sc.nextInt();
        // System.out.print("Enter the values : \n");
        // value = sc.nextInt();
        // insert(p,value);
        // display();
        
        // System.out.println("Enter the position to be inserted : ");
        // p = sc.nextInt();
        // System.out.print("Enter the values : \n");
        // value = sc.nextInt();
        // insert(p,value);
        // display();

        System.out.println("Enter the pos to be updated : ");
        int p = sc.nextInt();

        
        System.out.print("Enter the values : \n");
        int value = sc.nextInt();
        update(p,value);
        display();

        sc.close();
    }
}
