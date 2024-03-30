//  217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(!s.count(nums[i])) s.insert(nums[i]);
            else return true;
        }

        return false;

    }
};
