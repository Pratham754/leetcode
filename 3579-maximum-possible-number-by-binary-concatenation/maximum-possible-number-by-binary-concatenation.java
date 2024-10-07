class Solution {
    public int maxGoodNumber(int[] nums) {
        String s1 = Integer.toBinaryString(nums[0]) + Integer.toBinaryString(nums[1]) + Integer.toBinaryString(nums[2]);
        String s2 = Integer.toBinaryString(nums[0]) + Integer.toBinaryString(nums[2]) + Integer.toBinaryString(nums[1]);
        String s3 = Integer.toBinaryString(nums[1]) + Integer.toBinaryString(nums[0]) + Integer.toBinaryString(nums[2]);
        String s4 = Integer.toBinaryString(nums[1]) + Integer.toBinaryString(nums[2]) + Integer.toBinaryString(nums[0]);
        String s5 = Integer.toBinaryString(nums[2]) + Integer.toBinaryString(nums[0]) + Integer.toBinaryString(nums[1]);
        String s6 = Integer.toBinaryString(nums[2]) + Integer.toBinaryString(nums[1]) + Integer.toBinaryString(nums[0]);

        int ss1 = Integer.parseInt(s1,2);
        int ss2 = Integer.parseInt(s2,2);
        int ss3 = Integer.parseInt(s3,2);
        int ss4 = Integer.parseInt(s4,2);
        int ss5 = Integer.parseInt(s5,2);
        int ss6 = Integer.parseInt(s6,2);
        int arr[] = {ss1, ss2, ss3, ss4, ss5, ss6};
        int max = 0;
        for(int i=0;i<6;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }

        //print max int
        return max;
    }
}