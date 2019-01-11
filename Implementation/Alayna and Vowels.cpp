/*
Problem link: https://toph.co/p/alayna-and-vowels
*/

#include<iostream>
using namespace std;

int main(){
    char str[1005];
    cin.getline(str,1005);

    int j = 0;

    for (int i = 0; str[i]; i++){

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' || str[i] == 'I' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U')
            j++;
    }
    cout << j << endl;

    return 0;
}
