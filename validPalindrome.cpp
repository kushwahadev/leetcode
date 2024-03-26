// 125. Valid Palindrome


class Solution {
public:


    bool isPalindrome(string s) {

        string ans ="";

        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
                if(s[i]>=65 && s[i]<=90){
                    ans.push_back(tolower(s[i]));

                }else{
                    ans.push_back(s[i]);

                }
            }
        }

        if(ans == "")return true;
      for(int i=0 ,j=ans.length()-1;i<ans.length()/2;i++,j--){
        if(ans[i]!=ans[j]){
            return false;
        }
      }

        return true;

  
        
    }
};
