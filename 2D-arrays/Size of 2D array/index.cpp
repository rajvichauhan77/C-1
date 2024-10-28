#include<iostream>

using namespace std;

int main(){

    int r,c;

    cout << "r: ";
    cin >> r;

    cout << "c: ";
    cin >> c;

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "arr["<< i <<"]["<< j <<"]: ";
            cin >> arr[i][j];

        }
    }

    int size = sizeof(arr) / sizeof(arr[0][0]);

     int sum = 0;

            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){

                    sum = sum + arr[i][j];
               
                }
            }

            int avg = sum/size;

            cout << "avg: " << avg;

}