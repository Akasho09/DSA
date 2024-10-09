#include <iostream>
using namespace std;
int findMaxLength(vector<int> &nums)
{
    int ans = 0;
    int a = 0;
    int b = 0;
    int temp = 0;
    for (int i = 0; i < nums.size() - 1; i += 2) {
        if (nums[i]!=nums[i+1]) {
        if (a==b)  temp += 2;
          else temp=2;
        }
        else {
          if (nums[i]==0) {
          a+=2;
          }
          else if (nums[i]==1) b+=2;

          if (a>0 && b>0){
            if (a>=b) {
                a=a-b;
                b=0;
                ans+=2*b;
            }
            else {
                b=b-a;
                a=0;
                ans+=2*a;
            }
          }
        }
        if (temp >= ans)
        {
            ans = temp;
        }
        }
    return ans;
}

int main()
{
}