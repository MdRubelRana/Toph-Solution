/*
Problem link: https://toph.co/p/math-and-watermelons
*/

#include<iostream>
using namespace std;

int main(){

    int w, m;
    cin >> w >> m;

    int res = w / m;
    int rem = w % m;

    cout << rem << endl;

    return 0;
}
