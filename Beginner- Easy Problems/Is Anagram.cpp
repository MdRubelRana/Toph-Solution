/*
Problem link: https://toph.co/p/is-anagram
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    bool flag;
    int m = str1.size();
    int n = str2.size();

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(m == n){
        if(str1 == str2){
            flag = true;
        }
        if(flag == true){
            cout << "Yes";
        }
        else{
            cout << "No";
        }

    }
    else{
        cout << "No";
    }
return 0;
}
