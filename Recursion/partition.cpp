#include <iostream>
using namespace std ;

void cp(vector<int> & v1, string str,vector<vector<string>>&v) {
    for(int i=0;i<v1.size();i++) {
        cout << v1[i] <<" " ;
    }
    cout <<endl;
int s=0;
vector <string> v2;
for (int i=0;i<v1.size();i++){
string s1="";
string s2="";
int e = v1[i];
while(s<=e){
    if(str[s]!=str[e]){
        return;
    }
    s++;e--;
}
s=v1[i]+1;
s1+=str[s];
s2+=s1;
reverse(s1.begin(),s1.end());
if((s-e)%2!=0) s2+=s1;
else s2+=s1.substr(1); 
v2.push_back(s2);
}
v.push_back(v2);
}


void find (int i , string s ,vector<vector <string>> & v , vector<int> &v1){
     v1.push_back(s.length()-1);
     cp(v1,s,v);
     v1.pop_back();
     if(i==s.length()) {
        return ;
     }
     vector<vector<string>>ans;
     for (int j=i; j<s.length()-1; j++) {
        v1.push_back(j);
        find(j+1 , s , v , v1) ;
        v1.pop_back();
     }
}
    vector<vector<string>> partition(string s) {
        vector<int> v1 = {};
        vector<vector <string>> v={};
        find(0 , s , v , v1) ;
        return v ;
    }

int main() {

vector<vector<string>> ans2 = partition("aab");
   for (int i = 0; i < ans2.size(); i++) {
        for (int j = 0; j < ans2[i].size(); j++) {
            cout << ans2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}