#include <bits/stdc++.h>
using namespace std;

//naive solution with O(n*k) complexity
void maxEle(int *a, int k, int n) {
    for(int i = 0; i < n-k+1; i++){
        int max = 0;
        for(int j = i; j < i+k; j++){
            if(a[j] > max)
                max = a[j];
        }
        cout<<max<<" ";
    }
}

//solution using deque 
//time and space complexity: O(n)
void maxEleDeuque(int *a, int k, int n) {
    deque<int> dq;
    
    int i;
    for(i = 0; i < k; i++){           //handle first k elements and add useful elements 
        while(!dq.empty() && a[i] >= a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
  //now handle remaining elements 
    for( ; i < n; i++){
        cout<<a[dq.front()]<<" ";
        
        //remove elements which are not in windpw
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        
      
        while(!dq.empty() && a[i] >= a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        
    }
    cout<<a[dq.front()]<<" ";
}

int main()
{
    int a[] = {1,3,5,6,2,1,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    maxEleDeuque(a, k, n);
    return 0;
}
