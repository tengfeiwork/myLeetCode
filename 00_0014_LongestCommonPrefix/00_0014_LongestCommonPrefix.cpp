/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        int vectorsize = strs.size();
        
        if (vectorsize < 2) return strs[0];
        if (strs[0] == "") return prefix;
        
        for (int next_char_pos = 0; next_char_pos<strs[0].size(); next_char_pos++)
        {
            for(int i_s = 1; i_s<strs.size(); i_s++)
            {
                if(next_char_pos >= strs[i_s].size()) return prefix;
                if(strs[i_s] == "") return prefix;
                if(strs[0].at(next_char_pos) != strs[i_s].at(next_char_pos))  return prefix;
            }
            prefix += strs[0].at(next_char_pos);
        }

        return prefix;
    }
};
