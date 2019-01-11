/*
Problem link: https://toph.co/p/welcome-to-inpc
*/

#include<iostream>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    char str[20];

    for(int i = 0; i < testCase; i++){
        cin >> str;
        if (islower(str[0])){
            str[0] = toupper(str[0]);
        }


        cout << "Welcome " << str << endl;
}
    return 0;
}
