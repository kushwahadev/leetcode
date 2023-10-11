//1768
#include<bits/stdc++.h>
using namespace std;
  string mergeAlternately(string word1, string word2) {
        string ans="";
        int i=0;
        while(i<word1.length()||i<word2.length()){
            if(i<word1.length()){
                ans+=word1[i];
            }
            if(i<word2.length()){
                ans+=word2[i];
            }
            i++;

        }
        return ans;
        
    }
int main(){
string a,b;
  cin>>a>>b;
  cout<<mergeAlternately(a,b);
  
  return 0;
}
