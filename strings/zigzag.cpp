#include <iostream>
using namespace std;

    string convert(string s, int r) {
        if(r==1) return s;
        int n = s.size();
        int cols;
        int t=r+r-2;
        if(n%t==0){
            cols=3*(n/t);
        } else cols=3*((n/t)+1);
       vector<vector<char>>v(cols,vector<char>(r,' '));
       int a=0;
       int j=0;
       int i=0;
       while(a<n){
        if(j==0){
            while(j<r && a<n) {
                v[i][j]=s[a];
                a++; j++;
                }
        }
        i++; j-=2;
        while(j!=0 && a<n) {
        cout << i << j <<endl;
        v[i++][j--]=s[a++];
        }
        }
        s="";
    for(int i=0;i<r;i++){
        for(int j=0;j<cols;j++){ 
            if(v[j][i]!=' ') s+=v[j][i];
        }
    }
return s;
}


int main () {
cout << convert("akashahmaadmalik1" , 5);
}