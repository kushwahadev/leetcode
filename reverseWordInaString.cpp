//151
class Solution {
public:
    string reverseWords(string s) {

        string ans ="";
        vector<string> st;
        s+=" ";
        for(int i=0;i<s.length();i++){

            if(ans.length()>0&&s[i]==' '){
                st.push_back(ans);
                ans="";

            }else{
                if(s[i]!=' ')
                ans+=s[i];
            }

        }
        
        for(int i =st.size()-1;i>0;i--){
            ans+=st[i]+" ";
        }        
        ans+=st[0];
        return ans;
    }
};
