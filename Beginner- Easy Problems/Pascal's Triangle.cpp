/*
Problem link: https://toph.co/p/pascals-triangle
*/

#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int row = 0; row < n; row++) {
        sum = (1 << row);
    }
    cout << sum << endl;
    return 0;
}
