import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class CircularQueue {
    Node front = null;
    Node rear = null;

    // Enqueue
    void enqueue(int data) {

        Node newNode = new Node(data);

        if (front == null) {
            front = rear = newNode;
            rear.next = front;
        }
        else {
            rear.next = newNode;
            rear = newNode;
            rear.next = front;
        }
    }

    // Dequeue
    void dequeue() {

        if (front == null) {
            System.out.println("Queue is empty!");
            return;
        }

        System.out.println(front.data + " deleted");

        if (front == rear) {
            front = rear = null;
        }
        else {
            front = front.next;
            rear.next = front;
        }
    }

    // Display
    void display() {

        if (front == null) {
            System.out.println("Queue is empty!");
            return;
        }

        Node temp = front;

        do {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        } while (temp != front);

        System.out.println("Front");
    }
}

public class circular{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        CircularQueue q = new CircularQueue();

        while (true) {

            System.out.println("\n1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Display");
            System.out.println("4. Exit");

            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter the value: ");
                    int value = sc.nextInt();
                    q.enqueue(value);
                    break;

                case 2:
                    q.dequeue();
                    break;

                case 3:
                    q.display();
                    break;

                case 4:
                    System.out.println("Program ended.");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid choice!");
            }
        }
    }
}