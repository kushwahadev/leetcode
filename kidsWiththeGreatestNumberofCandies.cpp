#include<bits/stdc++.h>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;
        int greatest = 0;
        for(int i=0;i<candies.size();i++){
            if(greatest<candies[i]){
                greatest=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= greatest){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
int main(){
int extraCandies =5
vector<int> candies;
  for(int i=1;i<7;i++){
    candies.push_back(i);
  }

  kidsWithCandies(candies,extraCandies);

  
  return 0;
}
