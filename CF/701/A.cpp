#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	 int a[t], b[t];
	int c[t];
	int n = t;
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	    cin >> b[i];
	}

	for(int i = 0; i < n; i++){
            c[i] = 0;
		 while(a[i] > 0){
		     a[i] = ( int)(a[i] / b[i]);
		     b[i] = b[i] + 1;
		     c[i] = c[i] + 1;
		 }
	}
	for(int i = 0; i < n; i++)
	cout << c[i] << endl;
	return 0;
}
