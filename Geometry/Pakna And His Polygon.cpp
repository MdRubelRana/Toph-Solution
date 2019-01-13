/*
Problem link: https://toph.co/p/pakna-and-his-polygon
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout.precision(7);
    int testCase,rad;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int a;
        cin >> a;
        double sqr = sqrt(3.0) * 3.0 * a * a;

        double ans = sqr / 2.0;
        cout << ans << endl;
    }

    return 0;
}
