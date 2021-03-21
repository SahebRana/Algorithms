#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a;
    int max = 0;
    string s1, s2;
    for(int i = 0; i < n; i++){
        cin >> s1;
        cin >> a;
        if(a >= max)
            s2 = s1;
    }
    cout << s2;

    return 0;
}
/* <?php

// your code goes here
$n = (int)readline();
$array['abc'] = -1;
for($i = 0; $i < $n; $i++){
    list($s, $a) = explode(' ', readline());
    $a = (int)$a;
    $array[$s] = $array[$s] + $a;
}
$a = 0;
foreach($array as $key => $value){
    if($value > $a) $s = $key;
}
var_dump($array);

?>*/
