#include <iostream>
using namespace std ;
int callCount =0;
void find (int i , vector<int> & ans , int count ) {
if (callCount >= count ) return ;
   ans.push_back(i);
   callCount++;
   if(callCount<count) find (i+1 , ans , count);
   if(callCount<count) find (i+2 , ans , count);
}

    vector<int> countBits(int n) {
      vector<int> ans ;
      ans.push_back(0);
      int count = n;
      find (1 , ans , count );
      return ans ;
    }

int main () {


}