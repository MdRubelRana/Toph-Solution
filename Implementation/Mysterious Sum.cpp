/*
Problem link: https://toph.co/p/mysterious-sum
*/

#include<iostream>
using namespace std;

int main(){
    int testCase, a,b;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        cin >> a >> b;
        cout << "Case " << i + 1 << ": " << a + b << a - b << endl;
    }

    return 0;
}
