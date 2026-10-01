import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
}

public class common {

    static Node head1,head2 ,head3,temp;

    static void display(Node head){
        Node temp = head;

        while(temp != null){
            System.out.print(temp.data +">>");
            temp = temp.next;
        }

        System.out.print("NULL");


    }

    static Node insert(Node head , int value){
        Node newNode = new Node(value);
        

        if(head == null){
            head = newNode;
            temp = newNode;
        }
        else{
        while(temp.next!=null){
            temp = temp.next;
        }

        temp.next = newNode;

        
    }
    return head;
    }

    static void compare(Node head1, Node head2){
        Node temp1 = head1;
       

        while(temp1!= null){
            Node temp2 = head2;
            while(temp2!=null){
                if(temp1.data == temp2.data){
                    head3 = insert(head3, temp1.data);
                }
                temp2 = temp2.next;
            }
            temp1 = temp1.next;
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the no of nodes in list 1 : ");
        int n = sc.nextInt();

        System.out.print("Enter the values : \n");
        for(int i = 0; i<n; i++){
            System.out.print((i+1)+". ");
            int value = sc.nextInt();
            head1 = insert(head1,value);
        }

        System.out.println("Enter the no of nodes in list 2 : ");
        n = sc.nextInt();

        System.out.print("Enter the values : \n");
        for(int i = 0; i<n; i++){
            System.out.print((i+1)+". ");
            int value = sc.nextInt();
            head2 = insert(head2,value);
        }
        compare(head1,head2);

        display(head3);
        

        sc.close();
    }
}