//2938
class Solution {
public:
    long long minimumSteps(string s) {
        int cnt=0;
        long long  ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                cnt++;
            }else{
                ans+=cnt;
            }
            
        }
        return ans;
        
    }
};
