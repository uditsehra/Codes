import java.util.*;
public class Main {
    
    void isUpperLower(char str)
    {
        if(str>=65 && str<=90)
        {
            System.out.println("Upper");
        }

        if(str>=97 && str<=122)
        {
            System.out.println("lower");
        }
        else
        {
            System.out.println("Invalid");
        }
    }
    
    public static void main(String args[]) {
       Main m1 = new Main();
        Scanner sc = new Scanner(System.in);
        char str = sc.next().charAt(0);
        m1.isUpperLower(str);
    }
}