#include<bits/stdc++.h>
using namespace std;
 
 void reverse(vector<int> &a, int l, int h) {
    while(l < h){
        swap(a[l], a[h]);
        l++;
        h--;
    }
     
 }

vector<int> rotateLeft(int d, vector<int> a) {
    if(d == a.size())
        return a;
    
    reverse(a, 0, d-1);
    reverse(a, d,a.size()-1);
    reverse(a, 0, a.size()-1);
    
    return a;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    int d = 4;
    vector<int> ans = rotateLeft(d, v);
   for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
}
