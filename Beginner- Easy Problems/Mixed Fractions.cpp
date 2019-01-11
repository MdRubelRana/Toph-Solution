/*
Problem link: https://toph.co/p/mixed-fractions
*/

#include<iostream>
using namespace std;

int main(){
    int num, den, res,rem;
    cin >> num >> den;
    res = num / den;
    rem =  num % den;

    cout << res << " " << rem << " " << den << endl;

    return 0;
}
