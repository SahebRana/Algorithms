
#include "bits/stdc++.h" 
using namespace std; 

std::vector<int> divisor;

void primeDivisor(int n){
    
    int lim = n;
    if(n <= 1) return;
    int i;
    for(i = 2; i*i <= n; i++){
        
        if(lim % i == 0) divisor.push_back(i);
        while(lim % i == 0){
            lim = lim / i;
        }
    }
    
    if(lim != 1) divisor.push_back(lim);
}

int main(){
    primeDivisor(24);
    int len = divisor.size();
    
    for(int i = 0; i < len; i++)
    cout << divisor[i] << " ";
}