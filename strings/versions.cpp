#include <iostream>
#include <string>
using namespace std ;

vector<int> splitString(string s1 , char d) {
    vector<int>v;
    int ans = 0;
    int c=0;
    for(int i=s1.size()-1;i>=0;i--){
        if(s1[i]==d) {
            c=0;
            v.push_back(ans);
            ans=0;
        }
        else ans+=((s1[i]-48)*(1<<c++));
    }
    v.push_back(ans);
    return v;
}

int  main () {
    string s1 = "112.12.13.111";
    vector<int> v = splitString(s1, '.');


    for(int i=0;i<v.size();i++){
        cout <<v[i] <<endl;
    }
}   