/*
Problem link: https://toph.co/p/aryas-counting
*/

#include<iostream>
using namespace std;

int main (){

    int testCase, a, b, c;
    cin >> testCase;

    for(int i = 0 ; i < testCase; i++){
        cin >> a >> b >> c;
        cout << "Case " << i +  1 << ": ";

        if (a > b && a > c){
            cout << "A" << endl;
        }
        else if (b > c && b > a){
            cout << "B" << endl;
        }
        else if (c > a && c > b){
            cout << "C" << endl;
        }

        else{
            cout << "Confused" << endl;
        }

    }
    return 0;
}
