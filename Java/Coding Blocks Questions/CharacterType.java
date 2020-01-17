import java.util.*;

public class characterType{

    void getCharacterType(char input)
    {
        if(input >= 65 && input <= 90)
        {
            System.out.println('L');
        }

        if(input >=97 and input <= 122)
        {
            System.out.println('U');
        }
        else
        {
            System.out.println('I');
        }
    }

    public static void main(String args[])
    {
        characterType ch1 = new characterType();
        Scanner sc = new Scanner(System.in);
        char input = sc.next().charAt(0);
        ch1.getCharacterType(input);
    }
}