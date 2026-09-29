import java.util.Scanner;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
    }
}

class tree {

    static  Node insert(Node root, int data) {
        if (root == null) {
            return new Node(data);
        }

        if (data < root.data)
            root.left = insert(root.left, data);
        else
            root.right = insert(root.right, data);

        return root;
    }

    static void inorder(Node root) {
        if (root == null)
            return;

        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    static void postorder(Node root){
        if(root == null){
            return;
        }

        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");


    }

    static void preorder(Node root){
        if(root == null){
            return;
        }
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
        


    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Node root = null;

        System.out.print("Enter number of nodes: ");
        int n = sc.nextInt();

        System.out.println("Enter values:");

        for (int i = 0; i < n; i++) {
            int data = sc.nextInt();
            root = insert(root, data);
        }

        System.out.print("BST: ");
        inorder(root);
        System.out.print("\n");
        postorder(root);
        System.out.print("\n");
        preorder(root);
    }
}