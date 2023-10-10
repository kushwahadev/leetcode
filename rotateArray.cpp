// leetcode 189.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int k=3;
    k = k%nums.size();
    for(int i=0;i<7;i++){
      
        nums.push_back(i);
    }
    
         reverse(nums.begin(),nums.begin()+(nums.size()-k));
  
         reverse(nums.begin()+(nums.size()-k), nums.end());
  
         reverse(nums.begin(),nums.end());
  
         for(int i=0;i<7;i++){
           
            cout<<" "<<nums[i];

         }
         return 0;

    
}
