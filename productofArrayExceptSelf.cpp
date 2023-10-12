class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ans;
        left.push_back(1);
        right.push_back(1);
        int n=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            left.push_back(left[i]*nums[i]);
            right.push_back(right[i]*nums[n-i]);
        }
        for(int i=0;i<=n;i++){
            ans.push_back(left[i]*right[n-i]);
        }
        return ans;
    }
};
