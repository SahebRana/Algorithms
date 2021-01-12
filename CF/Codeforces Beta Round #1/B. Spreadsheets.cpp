#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, rn, cn;
    cin >> n;
    int t = n;
    string sp[n], a, r, c, or;
    while(t--){
        cin >> a;
        if(a[0] == 'R' && (a[1] < 58)){
            int i = 1, j= 0;
            while(a[i] != 'C'){
                r[j++] = a[i++];
            }
            rn = stoi(r);

            cout << rn;

            while(a[i] != 'C'){
                r[j++] = a[i++];
            }
        }
    }
}
