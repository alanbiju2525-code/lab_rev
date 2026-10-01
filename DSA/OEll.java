import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
}

public class OEll {
    Node head = null;

    void display(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data +">>");
            temp = temp.next;
        }

        System.out.print("NULL");


    }

    void insert(int value){
        
        Node newNode = new Node(value);
        
        if(head == null){
            head = newNode;
            
        }
        
        else{
            Node temp = head;
            
        while(temp.next!=null){
            temp = temp.next;
            }

            newNode.next = temp.next;
        temp.next = newNode;
        }
           
            
        
        
        
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        OEll list = new OEll();
        OEll even = new OEll();
        OEll odd = new OEll();


        System.out.println("Enter the no of nodes : ");
        int n = sc.nextInt();

        System.out.print("Enter the values : \n");
        for(int i = 0; i<n; i++){
            System.out.print((i+1)+". ");
            int value = sc.nextInt();
            list.insert(value);
        }

        Node temp = list.head;

        while(temp!=null){
            if(temp.data % 2 == 0){
                even.insert(temp.data);

            }
            else{
                odd.insert(temp.data);
            }

            temp = temp.next;
        }
        
        
        odd.display();
        even.display();

        sc.close();
    }
}
