/*
Problem link: https://toph.co/p/gpa-calculator
*/

#include<iostream>
using namespace std;

int main(){
    cout.precision(4);

    int testCase;
    double n,sum, p;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++){
        cin >> n;
        sum = 0;
        for (int j = 1; j <= n; j++){
            cin >> p;
            sum += p;
        }
        cout << "Case " << i << ": " << sum / n << endl;
}
    return 0;
}
