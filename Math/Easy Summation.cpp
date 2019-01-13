/*
Problem link: https://toph.co/p/easy-summation
*/

#include<iostream>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        long long int num;
        cin >> num;
        long long int sum = num * num;
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}

