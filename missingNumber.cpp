// 268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans =0;;
        for(int i=0;i<nums.size();i++){
            ans ^= i;
            ans ^= nums[i];
        }
        return ans^nums.size();

        
    }
};
