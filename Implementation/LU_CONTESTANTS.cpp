/*
Problem link: https://toph.co/p/lu-contestants
*/

#include<iostream>
using namespace std;

int main(){

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int n;
        cin >> n;
        string handle, name;
        int max_rating = 0, rating;
        for(int j = 0; j < n; j++){
            cin >> name >> rating;

            if(rating > max_rating){
                handle = name;
                max_rating = rating;
            }
        }
        cout << "Case " << i + 1 << ": " << handle << " is ";

		if(max_rating >= 1600 and max_rating <= 1899)
			cout << "Expert!." << endl;
		else if(max_rating >= 1400 and max_rating <= 1599)
			cout << "Specialist!." << endl;
		else if(max_rating >= 1200 and max_rating <= 1399)
			cout << "Pupil!." << endl;
		else if(max_rating >= 1 and max_rating <= 1199)
			cout << "Newbie!." << endl;
    }


    return 0;
}
