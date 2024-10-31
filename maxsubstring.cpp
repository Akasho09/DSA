class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int ans=0;
    int start=-1;
    vector<int> chars(256,-1);
    for (int i=0;i<s.size();i++) {
    if(chars[s[i]] >  start){
        start=chars[s[i]];
    }
        chars[s[i]]=i;
        ans=max(ans,i-start);
    }
    return ans;
    }
};