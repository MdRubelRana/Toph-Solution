/*
Problem link: https://toph.co/p/i-did-not-do-the-assignment
*/

#include<iostream>
using namespace std;

bool isPrime (int n){
    if (n < 2 || (!(n & 1) && n != 2)){
         return false;
    }


    if (n == 2){
        return true;
    }


    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
}

int main (){

    int num;

    while (cin >> num){
        if (isPrime(num)){
             cout << "NO PUNISHMENT" << endl;
        }
        else{
            for (int i = 0; i < num; i++){
                cout << "I DID NOT DO THE ASSIGNMENT." << endl;
            }
        }
    }
    return 0;
}
