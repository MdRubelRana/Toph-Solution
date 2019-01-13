/*
Problem link: https://toph.co/p/hashtag
*/

#include<iostream>
using namespace std;

int main (){
    string str;

    while(getline(cin, str)){
    int len = str.size();
        for(int i = 0; i < len; i++){
            if(str[i] == ' ')
                continue;
                cout << str[i];
        }
        cout << endl;
    }

    return 0;
}
