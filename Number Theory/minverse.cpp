#include<iostream>
using namespace std;

int egcd(int a, int b, int &x, int &y){

    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;

}

int main(){
    int x, y;
    int a = 100, m = 121;
    int g = egcd(a, m, x, y);
    if (g != 1) {
        cout << "No solution!";
    }
    else {
        x = (x % m + m) % m;
        cout << x << endl;
    }
}
