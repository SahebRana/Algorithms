#include<bits/stdc++.h>
using namespace std;

int bigmod(long long int a, long long int b, int M) { // a function to determine a^b(mod M)

    int remainder, answer = 1;                        // set two variables for remainder and answer

    remainder = a%M;                                 // setting remainder as

    while(b!=0)                                      //  loop occurs until b is not equal to 0
    {
        if(b%2==1)                                   // checking if b is odd
        {
            answer = (answer*remainder)%M;    // taking the present remainder in the answer if b is odd
        }

        remainder = (remainder*remainder)%M;    // making remainder double on each turn of the loop

        b/=2;                                   // reducing b by dividing it by 2 in every turn,
    }
    return answer;
}

int main(){
    cout << bigmod(100, 100, 50001);
    return 0;
}
