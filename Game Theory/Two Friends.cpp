/*
Problem link: https://toph.co/p/two-friends
*/

#include<iostream>
using namespace std;

int main(){
    int testCase,r;
    cin >> testCase;


    for(int i = 1; i <= testCase; i++){
        cin >> r;

        if(r <= 2){
            cout << "Case " << i << ": " << "Tie" << endl;
        }
        else if(r % 2 == 0){
            cout << "Case " << i << ": " << "CodeMask" << endl;
        }

        else{
             cout << "Case " << i << ": " << "CodeNewtons" << endl;
        }
    }

    return 0;
}
