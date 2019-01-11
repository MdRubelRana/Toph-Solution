/*
Problem link: https://toph.co/p/fibonacci-numbers
*/

#include<iostream>
using namespace std;

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main (){
    int n;
    cin >> n;

    cout << fib(n) << endl;
    return 0;
}
