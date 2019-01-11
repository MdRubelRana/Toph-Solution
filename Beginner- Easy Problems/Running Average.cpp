/*
Problem link: https://toph.co/p/running-average
*/

#include<iostream>
using namespace std;

int main(){
    cout.precision(11);
    int testCase;
    cin >> testCase;

    int arr[testCase];
    double avg = 0, sum = 0, j = 1;

    for(int i = 0; i < testCase; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < testCase; i++){
     sum += arr[i];
     avg = sum / j;
     j++;
     cout << avg << endl;
    }

    return 0;
}
