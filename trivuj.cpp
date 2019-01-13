#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int testCase, a, b, c;
    cin >> testCase;

    float s, area;

    for(int i = 0; i < testCase; i++){
        cin >> a >> b >> c;

        s = (a + b + c) / 2;
        area = sqrt (s * (s - a) * (s - b) * (s - c));
        if(a + b <= c || a + c <= b || b + c <= a){
                cout << "Oh, No!" << endl;
        }
        else{
            printf("%.2f\n", area);
        }
    }
    return 0;
}
