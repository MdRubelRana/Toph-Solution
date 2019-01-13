/*
Problem link: https://toph.co/p/heavy-alphabet
*/

#include<iostream>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        string str;
        cin >> str;

        char a = '1';
        for(int j = 0; j < str.length(); j++){
            char ch = str[j];
            if(tolower(a) == tolower(ch)){
                cout << '#';
            }
            else{
                cout << ch;
                a = ch;
            }
        }
        cout << endl;
    }
    return 0;
}
