class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string altr = s;
        reverse(altr.begin(), altr.end());
        
        return (s==altr) ? true : false;
    }
};