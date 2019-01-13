/*
Problem link: https://toph.co/p/boltu-vs-balti
*/

#include<iostream>
using namespace std;
int main ()
{
    int a,b;

    while(cin >> a >> b){

        if(a > b)
        {
            int x = a;
            a = b;
            b = x;
        }
        int temp = (( a * ( a + 1 )) / 2 ) - a;

        int ans = ( b * ( b + 1 )) / 2;

        ans -= temp;

        cout << "Sum of " << a << " to " << b << " is -> " << ans << ";" << endl;
}
    return 0;
}
