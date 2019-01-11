/*
Problem link: https://toph.co/p/maximum
*/

#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    int arr[testCase];

    for(int i = 0; i < testCase; i++){
        cin >> arr[i];
    }

    sort(arr, arr + testCase);
    cout << arr[testCase-1];

    return 0;
}
