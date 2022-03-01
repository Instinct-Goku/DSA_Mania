#include<bits/stdc++.h>
using namespace std;





int main() {
    string s = "hare krishna";
    string c = "r";
    
    int size = 0;
    int l = -1;
    int sp = 0;
    int h = -1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c[0]){
            if(l == -1 && h == -1){
               l = i;
               h = i;
            }
            else
                h = i;
            
            size = h-l+1 - sp;
  
        }
        
        if(s[i] == ' ')
            sp++;
            
       if(size < 0)
            size = 0;
        
    }
    
    cout<<size;
    
    

}
    