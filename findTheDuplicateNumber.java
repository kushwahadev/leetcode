// 287
class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> cp = new HashSet<Integer>();
        int ans =0;
        for(int i=0;i<nums.length;i++){
            if(cp.add(nums[i])){

            }else{
                ans = nums[i];
                break;
            }
        } 
        return ans;

      
        
    }
}
