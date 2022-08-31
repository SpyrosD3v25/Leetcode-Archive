class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>m;
        
        for(auto a : stones){
            m[a]++;
        }
        
        int ans = 0;
        
        for(auto a : jewels){
            ans += m[a];
        }
        
        return ans;
    }
};