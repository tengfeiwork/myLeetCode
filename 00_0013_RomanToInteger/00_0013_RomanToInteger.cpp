/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        int pop = 0;
        int rev = 0;
        int orignal = x;
        
        if (orignal<0) return false;
        
        do{

            pop = x % 10;
            x /=10;
            
            if(214748364 < rev || (214748364 == rev) && pop > 7) return false;
            if(-214748364 > rev || (-214748364 == rev) && pop < -8) return false;
            
            rev = rev*10 + pop;
            
        }while(x!=0);
        
        if (rev == orignal)
            return true;
        else
            return false;
    }
};
