#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getTotalOfferPeriods' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY sales as parameter.
 */

int maxi (vector<int> &sales , int a , int b ) {
    int ans = sales[a];
    for(int i=a+1 ; i<=b ;i++) {
        if(sales[a]>ans) ans=sales[a];
    }
    return ans ;
}

int getTotalOfferPeriods(vector<int> sales) {
int n = sales.size();
int s =0 ; 
int e = n-1;
int max = maxi(sales , s+1 , e-1);
int ans =0;
int i=0;
while(s<e){
    
       for(;s<e-1;s++){
       
         int min = sales[s];
    if(sales[s]>sales[e]) {
        min = sales[e];
    }
    max = maxi(sales , s+1 , e-1);
        cout << max << "  " << min << endl;
    if(min>max) {
        ans++;
    }  
   }
    
    s=i;
    
     for(;e>s+1;e--){
       
         int min = sales[s];
    if(sales[s]>sales[e]) {
        min = sales[e];
    }
    max = maxi(sales , s+1 , e-1);
    cout << max << "  " << min << endl;
    if(min>max) {
        ans++;
    }  
   }
    e=n-i-2;
    s++;
    i++;
}   
return ans ;
}

int main()
{

vector<int> v = {5,2,1,3,6} ;
getTotalOfferPeriods(v);

}
