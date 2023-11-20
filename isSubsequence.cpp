//392
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tl=0;
        int n =s.length();
        int m = t.length();

        for(int i=0;i<n;i++){

            for(;tl<m;tl++){
                if(s[i]==t[tl]){
                    break;
                    
                }
            }
            if(tl==m&&i<n)
            return false;
            tl++;
        }

        return true;
    }
};
