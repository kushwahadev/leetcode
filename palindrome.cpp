// 9. Palindrome Number

class Solution {
public:

int sign(int prev, int x)
{
    if (prev > INT_MAX/10 || (prev == INT_MAX / 10 && (x%10) > 7)) return 0;
    if (prev < INT_MIN/10 || (prev == INT_MIN / 10 && (x%10) < -8)) return 0;

    if (x / 10 == 0)
    {
        return (prev * 10) + (x % 10);
    }

    return sign((prev * 10) + (x % 10), x / 10);
}
    bool isPalindrome(int x) {
        if(x<0)return false;

         if( sign(0,x)== x){
            return true;
         }
         return false;

    }
};
