#include<iostream>

using namespace std;

int main(){

    int r,c;

    cout << "r: ";
    cin >> r;

    cout << "c: ";
    cin >> c;

    int arr1[r][c], arr2[r][c], arr3[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "arr["<< i<< "]["<<j << "]: ";
            cin >> arr1[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "arr2["<< i<< "]["<<j << "]: ";
            cin >> arr2[i][j];
        }
    }

   
      for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){

            arr3[i][j] = arr1[i][j] + arr2[i][j];

                cout << arr3[i][j] << " ";
                
                }
                cout << endl;
            }

}