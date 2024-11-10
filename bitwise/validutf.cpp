#include <iostream>
using namespace std ;

   int countbytes (int m) {
    int ans=0;
    for (int i =7 ;i>=0 ;i--) {
if ((m&(1<<i))==0) break;
else ans++;
    }
    return ans ;
   }

    bool validUtf8(vector<int>& data) {
        for (int i=0 ;i<data.size();){
           int m = countbytes(data[i]);
           int j=1;
           if(m==1) return false ;
           if(m>1){
           while(j<m & (i+j)<data.size()){
            cout <<m <<" " <<j <<endl;
            if( (data[i+j]&(1<<7)) == 0 || (data[i+j]&(1<<6))!=0 ) return false ;
            j++;
           }
           cout <<"j" <<j <<endl;
           if(j!=m) return false;
           i+=(m-1);
           }
            i++;
        }
        return true;
    }

int main () {
vector<int> v = {250,145,145,145,145};
cout << validUtf8(v);

}