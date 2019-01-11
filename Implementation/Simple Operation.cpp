/*
Problem link: https://toph.co/p/simple-operation
*/

#include<iostream>
using namespace std;

int main(){
    int testCase,r;
    cin >> testCase;


    for(int i = 1; i <= testCase; i++){
        int a,c;
        char ch;
      cin >> a >> ch >> c;
      int res = 0;
      if(ch == '+')
      {
          res = a + c;
      }
      if(ch == '*')
      {
          res = a * c;

      }
      if(ch == '-')
      {
          res = a - c;
      }
       cout << "Case " << i << ": " << res << endl;
}

    return 0;
}
