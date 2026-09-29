import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
}

class queue{
    Node rear = null;
    Node front = null;

    void enqueue(int data){

        Node newNode = new Node(data);
        if(front == null){
            front = rear = newNode;
        }
        else{
            while(rear.next != null){
               rear = rear.next;
            }
             rear.next = newNode;
        }
    }
    void dequeue(){
         if (front == null) {
            System.out.println("Queue is empty!");
            return;
        }

        System.out.println(front.data + " deleted");

        front = front.next;

        if (front == null) {
            rear = null;
        }
    }

    // Display queue
    void display() {
        if (front == null) {
            System.out.println("Queue is empty!");
            return;
        }

        Node temp = front;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
    }
}

public class queuell {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        queue q = new queue();

        System.out.println("Enter the number of elements:");
        int n = sc.nextInt();

        System.out.println("Enter the elements:");

        for (int i = 0; i < n; i++) {
            int data = sc.nextInt();
            q.enqueue(data);
        }

        System.out.println("Queue:");
        q.display();

        q.dequeue();

        System.out.println("After dequeue:");
        q.display();

        sc.close();
    }
}
