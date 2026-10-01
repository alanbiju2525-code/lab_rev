import java.util.Scanner;
import java.util.Stack;

public class INmaxpartheses {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Stack<Character> s = new Stack<>();

        int max = 0;

        System.out.println("Enter the string : ");
        String str = sc.nextLine();

        for(int i = 0; i<str.length(); i++){
            if(str.charAt(i) == '('){
                s.push('(');

                if(s.size()>max){
                    max = s.size();
                }
            }
            else if(str.charAt(i) == ')'){
                s.pop();
            }
        }

        System.out.println("Max : " + max);

        sc.close();
    } 
}
