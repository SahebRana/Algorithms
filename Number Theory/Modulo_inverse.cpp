#include <stdio.h>

// Returns modulo inverse of a with respect
// to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e.,
// gcd(a, m) = 1
int modInverse(int a, int m)
{
	int m0 = m;
	int  x = 1, y = 0;

	if (m == 1)
		return 0;

	while (a > 1) {
		// q is quotient
		int q = a / m;
		int t = m;

		// m is remainder now, process same as
		// Euclid's algo
		m = a % m, a = t;
		t = y;

		// Update y and x
		y = x - q * y;
		x = t;
	}

	// Make x positive
	if (x < 0)
		x += m0;

	return x;
}

// Driver Code
int main()
{
	int a = 100, m = 121;

	// Function call
	printf("%d\n", modInverse(a, m));
	return 0;
}




/* Another Algorithm
Finding Multiplicative Inverse:
Using Extended Euclidean Algorithm
EXTENDED EUCLID (m,b)
1. (A1, A2, A3) ← (1, 0, m); (B1, B2, B3) ← (0,1, b)
2. If B3 = 0 return A3 = gcd(m, b); no inverse.
3. If B3 = 1 return B3 = gcd (m, b); B2 = b-1 mod m
4. Q= [A3 / B3]
5. (T1, T2, T3) ← (A1 - QB1, A2 – QB2, A3-QB3)
6. (A1, A2, A3) ← (B1, B2, B3)
7. (B1, B2, B3) ← (T1, T2, T3)
8. goto 2
*/
