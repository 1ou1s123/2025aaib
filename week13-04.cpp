// week13-04.cpp 寫昨天的挑戰題, 用 C++來寫
// LeetCode 3335. Total Characters in String After Transformations I
class Solution {
public:
    int a[200000] = {};
    int helper(int t) {
        if( a[t] > 0 ) return a[t];
        if( t<26 ) return 1;
        a[t] = (helper(t-26) + helper(t-26+1)) %1000000007;
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s) { //C++ 的語法, 可以把每個字母取出來
            ans = ( ans + helper( t + c-'a' ) ) % 1000000007;
        }
        return ans;
    }
};
