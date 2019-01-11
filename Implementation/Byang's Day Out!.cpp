/*
Problem link: https://toph.co/p/byangs-day-out
*/

#include<iostream>
using namespace std;

int main(){
    int testCase, a, b, c;
    cin >> testCase;

    for (int i = 0; i < testCase; i++){
        cin >> a >> b >> c;
        if ((a <= b + c) && (b <= c + a) && (c <= a+b)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

}
    return 0;
}
