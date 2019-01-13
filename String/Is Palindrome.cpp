/*
Problem link: https://toph.co/p/is-palindrome
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    cin.getline(str,100);

    bool flag = false;
    int n = strlen(str);

    for(int i = 0; i < n; i++){
        if(str[i] != str[n-i-1]){
            flag = true;
        }
    }
    if(flag){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
return 0;
}
