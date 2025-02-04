class Solution {
public:
    vector<int> beautifulArray(int n) {
    vector<int>v={1};
    while(v.size()<n){
        vector<int>t;
        for(int i : v) {
            if(i*2-1<=n){
                t.push_back(i*2-1);
            }
        }
        for(int i:v){
            if(i*2<=n){
                t.push_back(i*2);
            }
        }
        v=t;
    }
    return v;
    }
};