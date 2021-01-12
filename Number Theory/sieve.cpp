#include<iostream>
using namespace std;

int Prime[300000];
int nPrime;
// 1 if prime, 0 if not prime

bool mark[1000002];

void sieve(int n){
	int i, j, limit = sqrt(n * 1.0) + 2;
	// 1 is nor prime
	mark[1] = 1;
	//almost all the evens are not prime
	for(i = 4; i <= n; i += 2) mark[i] = 1;
	
	// 2 is prime 
	Prime[nPrime++] = 2;
	
	// running loop only for odds
	for(i = 3; i <= n; i += 2)
		// if not prime, no need to do "multiple cutting"
		if(!mark[i]){
			// i is prime
			Prime[nPrime++] = i;
			
			// if we don't do it, following i*i may overflow
			if(i <= limit){
				// loop through all multiples of i greater than i*i
				for(j = i * i; j <= n; j += i * 2) mark[j] = 1;
			}
		}
}
int main(){
	sieve(100);
	for(int i = 0;  i < 10; i++)
    cout << Prime[i] << endl;
	return 0;
}
