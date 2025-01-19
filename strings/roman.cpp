#include <iostream>
using namespace std ;

    char globalArray[7] = {'I' , 'V' , 'X' , 'L' , 'C' , 'D' , 'M'};
    int valueArray[7] = {1, 5, 10, 50, 100, 500, 1000};

int pluss (char a , char b) {
    int j;
    for(j=0;j<7;j++){
        if(a==globalArray[j]) break; 
    }
    j--;
    for(;j>=0;j--){
        if(b==globalArray[j]) return valueArray[j];
    }
    j++;
    cout <<a <<b <<j <<endl;
    return -valueArray[j];
}

int romanToInt(string s) {
        int ans =0;
        int i;
        for(i=0;i<s.size()-1;i++) ans+=(pluss(s[i],s[i+1]));
        ans+=(valueArray[i]);
        return ans;
    }


int main () {
    cout << romanToInt("IV");
}