import java.util.*;

public class largestElement {

    static int findLargest(int[] arr){
        
        int largestElement = 0;

        for(int i = 1; i < arr.length; i++) {
            if(arr[i] > arr[largestElement]){
                largestElement = i;
            }
        }

        return arr[largestElement];
    }

    public static void main(String[] args) {
        int[] arr = { 2, 1, 9, 3, 6};   
        System.out.println(findLargest(arr));
    }
}