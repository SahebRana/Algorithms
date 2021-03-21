#include<iostream>
#include<string> // for string and to_string()
using namespace std;


int main(){
    int n;
    cin >> n;
    string s[n], s1;


    for(int i = 0; i < n; i++){
        cin >> s1;
        int ln = s1.length();
        if(ln <= 10)
            s[i] = s1;
        else
        {
            s[i] = string(1, s1[0]);
            string s2 = to_string(ln - 2);
            s[i].append(s2);
            s[i].push_back(s1[ln - 1]);

        }
    }
    for(int i = 0; i < n; i++)
        cout << s[i] << endl;
    return 0;

}
