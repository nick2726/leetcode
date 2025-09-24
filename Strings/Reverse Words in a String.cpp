https://leetcode.com/problems/reverse-words-in-a-string/


class Solution {
public:
    string reverseWords(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        return s==rev;
        
    }
};
