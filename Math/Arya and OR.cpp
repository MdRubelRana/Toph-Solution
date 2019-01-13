/*
Problem link: https://toph.co/p/arya-and-or
*/

#include<iostream>
using namespace std;

int main(){
    int testCase, n, value, ans;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> n >> value;
        ans = value;
        n--;

        for(int j = 0; j < n; j++){
            cin >> value;
            ans = ans | value;
        }
      cout << "Case " << i + 1 << ": " << ans << endl;
    }

    return 0;
}
