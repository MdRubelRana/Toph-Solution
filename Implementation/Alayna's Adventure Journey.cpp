/*
Problem link: https://toph.co/p/alaynas-adventure-journey
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long int a, ele = 0;

    for(int i= 0; i < n; i++){
        cin >> a;
        ele = max(ele, a);
    }
    cout << ele << endl;

    return 0;
}

