/*
    - Problem 
        Given a string s, find the length of the longest
        substring
        without repeating characters.

        Example 1:
        Input: s = "abcabcbb"
        Output: 3
        Explanation: The answer is "abc", with the length of 3.

        Example 2:
        Input: s = "bbbbb"
        Output: 1
        Explanation: The answer is "b", with the length of 1.

        Example 3:
        Input: s = "pwwkew"
        Output: 3
        Explanation: The answer is "wke", with the length of 3.
        Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution { 
public:
    int lengthOfLongestSubstring(string s) {
    vector<int>mp(128);
    int ans(0),i=0,j=0,n=s.length();
    while(j<n)
    {
        mp[s[j]]++;
        while(mp[s[j]]>1)
        mp[s[i++]]--;
        
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}
};