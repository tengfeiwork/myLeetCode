/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:
Input: "()"
Output: true

Example 2:
Input: "()[]{}"
Output: true

Example 3:
Input: "(]"
Output: false

Example 4:
Input: "([)]"
Output: false

Example 5:
Input: "{[]}"
Output: true
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        string stackx;
        int counter[3] = {0};
        int pairedc[3] = {0};
        int strsize = s.size();

        if(strsize % 2 != 0) return false;

        for(int i = 0; i < strsize; i++)
        {
            char charx = s.at(i);
            int ssize = stackx.size();
            switch(charx){
                case '(': stackx.push_back(charx); break;
                case ')': 
                    if(ssize<1) return false;
                    if(stackx.back() != '(')
                    {
                        return false;
                    }
                    else
                    {
                        stackx.pop_back(); 
                    }
                    break;
                case '[': stackx.push_back(charx); break;
                case ']':  
                    if(ssize<1) return false;
                    if(stackx.back() != '[')
                    {
                        return false;
                    }
                    else
                    {
                        stackx.pop_back(); 
                    }
                    break;
                case '{': stackx.push_back(charx); break;
                case '}':
                    if(ssize<1) return false;
                    if(stackx.back() != '{')
                    {
                        return false;
                    }
                    else
                    {
                        stackx.pop_back(); 
                    }
                    break;
                default:break;
            }
        }
        if(stackx.empty)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main()
{
    Solution s;
    string src="((";

    std::cout<<s.isValid(src)<<endl;

    std::cout <<"The End!"<< endl;

    return 0;
}
