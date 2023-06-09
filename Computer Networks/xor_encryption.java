
import java.util.Scanner;
import java.lang.String;

public class xor_encryption {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String Ctxt = "";
        String Dtxt = "";
        String in = "";
        System.out.println("Enter string : ");
        in = sc.nextLine();
        int xor, xor1;
        char key = '$';
        char temp, temp1;
        for (int i = 0; i < in.length(); i++) {
            xor = in.charAt(i) ^ key;
            temp = (char) xor;
            Ctxt = Ctxt + temp;
        }
        System.out.println("Cipher text is " + Ctxt);

        for (int i = 0; i < Ctxt.length(); i++) {
            xor1 = Ctxt.charAt(i) ^ key;
            temp = (char) xor1;
            Dtxt = Dtxt + temp;
        }
        System.out.println("Decrypted String is : " + Dtxt);
    }
}