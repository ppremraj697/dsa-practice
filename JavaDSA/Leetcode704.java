public class Leetcode704{
    public int search(int[] nums, int target) {

        int start = 0;
        int end = nums.length - 1;

        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return -1;
    }

    public static void main(String args[]) {
        
        Leetcode704 sol = new Leetcode704();
        int arr[] = {-1,0,3,5,9,12};
        int ans1 = sol.search(arr, 9);
        int ans2 = sol.search(arr, 2);

        System.out.println("9 is present at index: "+ans1+" \n2 is present at index: "+ans2);

    }
}