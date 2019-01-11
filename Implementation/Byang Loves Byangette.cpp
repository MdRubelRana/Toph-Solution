/*
Problem link: https://toph.co/p/byang-loves-baangette
*/

#include<iostream>
using namespace std;

int main(){
     string str;

    getline(cin, str);

    if (str == "Who loves Byang?"){
        cout << "Byangette" << endl;
    }

    else{
        cout << "Byang" << endl;
    }

    return 0;
}
