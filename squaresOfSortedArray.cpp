// 977
#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
      int l=0,r=nums.size()-1,k=nums.size()-1;
      vector<int>ans(nums.size()) ;
      for(int i=0;i<nums.size();i++){
          nums[i]*=nums[i]; 
      }
      while(l<=r){
          if(nums[l]>nums[r]){
             ans[k--]= nums[l++];
          }else{
              ans[k--]=nums[r--];
          }
      }
      return ans;
        
    }
int main(){

  vector<int> nums;
  for(int i=0;i<6;i++){
    int temp;
    cin>>temp;
    nums.push_back(temp);
  }
  sortedSquares(nums);
  for(int i=0;i<6;i++){
    cout<<nums[i];
  }
  return 0;
  
}
