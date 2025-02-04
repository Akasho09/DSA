#include <iostream>
using namespace std ;

   int longestSubstring(string s, int k) {
    int n = s.size();
        unordered_map<char,int>m;
        for(char i:s) m[i]++;
        int l=0;
        while(l<n && m[s[l]]>=k) l++;
        if(l>=n-1) return l;
        int l1=longestSubstring(s.substr(0,l),k);
        while(l<n && m[s[l]]<k)  l++;
        int l2=longestSubstring(s.substr(l,n),k);
        return max(l1,l2);
    }

int main () {

// divide string into 2 using element which occurs <k  times 
// recurrence form that to end again 


}