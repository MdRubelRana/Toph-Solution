/*
Problem link: https://toph.co/p/missing-number
*/

#include<iostream>
using namespace std;

int main(){
    int tot, a, b, c;
    cin >> tot >> a >> b >> c;

    int res = tot - ( a + b + c);
    cout << res << endl;

    return 0;
}
