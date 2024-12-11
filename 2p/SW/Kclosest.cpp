#include <iostream>
using namespace std;

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(arr.size()==1 && k==1) return arr; 
        vector<int> diffArr;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            diffArr.push_back(abs(arr[i]-x));
        }
        // i is start
        int i=0;
        for( i=1;i<diffArr.size();i++){
            if(diffArr[i]>diffArr[i-1]) break;
        }
        i-- ; 
        if(i==0){ // strating is nearest 
            cout << "here 1" ; 
for(int j=0;j<k;j++){
                ans.push_back(arr[j]);
            }
    sort(ans.begin(),ans.end());
           return ans ; 
        }
        else if (i==arr.size()-1){ // last is nearest
cout << "here 2 " <<i; 
if(diffArr[i]==diffArr[i-1]) {
ans.push_back(arr[i-1]);
i--;
if(i>0) ans.push_back(arr[i+1]);
i--;
} 
while(i>arr.size()-k-1 && i>0){
ans.push_back(arr[i]);
i--;
}               
    sort(ans.begin(),ans.end());
            return ans ;            
        }
                    cout << "here 3" ; 
        int j=i+1;
        while(k>0){
            if(diffArr[i]<=diffArr[j]) { 
                ans.push_back(arr[i]); 
                k--; 
                if(i>0) i-- ;
                else {
                while(k>0) {
                    ans.push_back(arr[j++]);
                    k--; 
                }
                break;                  
                }
            }
            else {
                ans.push_back(arr[j]); 
                k--;
                if(j<arr.size()-1) j++ ;
                else {
                while(k>0) {
                    ans.push_back(arr[i--]); 
                    k--;
                } 
                }
            }
    }
    sort(ans.begin(),ans.end());
  return ans ;      
}

int main () {
vector<int> v = {1,3};
findClosestElements(v, 1 , 2) ;

}