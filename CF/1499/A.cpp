#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    string s[t];
    int length = t, i = 0;

    while(t--){
        int n, k1, k2, w, b;
        cin >> n>>  k1 >> k2 >> w >> b;
        int max, min;
        if(k1 > k2) {min = k2; max = k1;}
        else {min = k1; max = k2;}

        w = w - min;
        w = w - (int)((max - min) >> 1);

        b = b - (n - max);
        b = b - (int)((max - min) >> 1);

        if(w <= 0 && b <= 0)
        s[i++] = "YES";
        else s[i++] = "NO";



    }

    for(int i = 0; i < length; i++)
        cout << s[i] << endl;
    return 0;
}
