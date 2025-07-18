public class sortedAndRotated {

    public static boolean checkIfSortedAndRotated(int[] nums){
        int violations = 0;
        int n = nums.length;

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] > nums[(i+1) % n] && ++violations > 1) return false;
        }
        return (violations <= 1);
    }

    public static void main(String[] args) {
        
        int[] arr = { 3, 4, 5, 1, 2};

        System.out.println(checkIfSortedAndRotated(arr));
    }
}