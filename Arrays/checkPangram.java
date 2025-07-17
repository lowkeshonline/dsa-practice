import java.util.*;

public class checkPangram {

    static boolean checkIfSentenceIsPangram(String sentence){
        int[] arr = new int[26];
        for(char c : sentence.toCharArray()) {
            int val = c - 'a';
            arr[val]++;
        }
        for(int value : arr){
            if(value == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        String sentence = "thequickbrownfoxjumpsoverthelazydog";

        System.out.println(checkIfSentenceIsPangram(sentence));
    }
}
