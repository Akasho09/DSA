#include <iostream>
using namespace std;

    bool isValid(string s) {
        stack<int> st ;
    for(int i=0;i<s.size();i++){
        int temp = int(s[i]);
        cout << temp <<" ";
        if(temp==40 || temp==91 || temp==123) st.push(temp);
        else {
           if(st.empty()) return false ;
            int stop=int(st.top()); st.pop();
            cout << stop <<" ";
            if(temp-stop==1 || temp-stop==2) {
                cout <<endl;
                continue;}
            else return false ;
        }
        cout <<endl;
        }  
    if(st.size()==0) return true;
    else return false;
    }

int main () {
    isValid("[({})]");

}