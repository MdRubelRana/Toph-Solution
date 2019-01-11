/*
Problem link: https://toph.co/p/alayna-and-strings
*/

#include<iostream>
using namespace std;

int main(){
    char str[1005];
    int c = 0, s = 0;

    cin.getline(str, 1005);

    for (int i = 0; str[i]; i++)
    {
        if (isupper(str[i])){
            c++;
        }
        else if (islower(str[i])){
            s++;
        }
    }
cout << c << " " << s << endl;

    return 0;
}
