import java.util.Scanner;

class Node{
    int data;
    Node left,right;

    Node(int data){
        this.data = data;
        left = null;
        right = null;
    }
}

public class search{
    
    static Node insert(Node root, int data){
        if(root == null){
            return new Node(data);
        }

        if(data < root.data){
            root.left = insert(root.left,data);
        }
        else{
            root.right = insert(root.right,data);
        }

        return root;
    }

    static boolean check(Node root, int data){
        if(root == null){
            return false;
        }

        if(root.data == data){
            return true;
        }

        if(data < root.data){
            return check(root.left ,data );
        }
        else{
            return check(root.right, data);
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        Node root = null;

        System.out.println("Enter the total no of nodes : ");
        int n = sc.nextInt();

        System.out.println("Enter the values : ");
        for(int i = 0; i<n; i++){
            System.out.print((i+1)+ ". : ");
            int data = sc.nextInt();
            root = insert(root,data);
        }
        System.out.println("Enter the value to be search : ");
        int x = sc.nextInt();

        if(check(root,x)){
            System.out.println("Found!");
        }
        else{
            System.out.println("Not Found!");
        }

        sc.close();

    }
}
