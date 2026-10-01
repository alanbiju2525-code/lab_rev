import java.util.Scanner;

class Deque {
    int arr[];
    int front;
    int rear;
    int size;

    Deque(int size) {
        this.size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert at front
    void insertFront(int data) {

        if (front == 0 && rear == size - 1 || front == rear + 1) {
            System.out.println("Deque is full!");
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front--;
        }

        arr[front] = data;
    }

    // Insert at rear
    void insertRear(int data) {

        if (front == 0 && rear == size - 1 || front == rear + 1) {
            System.out.println("Deque is full!");
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = data;
    }

    // Delete from front
    void deleteFront() {

        if (front == -1) {
            System.out.println("Deque is empty!");
            return;
        }

        System.out.println(arr[front] + " deleted");

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    // Delete from rear
    void deleteRear() {

        if (front == -1) {
            System.out.println("Deque is empty!");
            return;
        }

        System.out.println(arr[rear] + " deleted");

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = size - 1;
        }
        else {
            rear--;
        }
    }

    // Display
    void display() {

        if (front == -1) {
            System.out.println("Deque is empty!");
            return;
        }

        int i = front;

        while (true) {
            System.out.print(arr[i] + " ");

            if (i == rear) {
                break;
            }

            i = (i + 1) % size;
        }

        System.out.println();
    }
}

public class deque {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size: ");
        int size = sc.nextInt();

        Deque d = new Deque(size);

        while (true) {

            System.out.println("\n1. Insert Front");
            System.out.println("2. Insert Rear");
            System.out.println("3. Delete Front");
            System.out.println("4. Delete Rear");
            System.out.println("5. Display");
            System.out.println("6. Exit");

            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter value: ");
                    d.insertFront(sc.nextInt());
                    break;

                case 2:
                    System.out.print("Enter value: ");
                    d.insertRear(sc.nextInt());
                    break;

                case 3:
                    d.deleteFront();
                    break;

                case 4:
                    d.deleteRear();
                    break;

                case 5:
                    d.display();
                    break;

                case 6:
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid choice!");
            }
        }
    }
}