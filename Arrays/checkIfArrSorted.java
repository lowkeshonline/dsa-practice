import java.util.*;

public class checkIfArrSorted{

    public static void main(String[] args) {
        int[] nums = {1, 5, 22, 99, 126};

        boolean Sorted = false;

        for(int i = 1; i < nums.length; i++) {
            if(nums[i] > nums[i-1]) {
                Sorted = true;
            } else {
                Sorted = false;
            }
        }

        System.out.println(Sorted);

    }
}