#include<iostream>

using namespace std;

int main(){

     int r, c;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Enter the value of c: ";
    cin >> c;

    int arr[r][c];

   
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           cout << "arr["<< i <<"]["<< j <<"]: ";
           cin >> arr[i][j] ;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          cout << arr[i][j] << " ";
        } 
           cout << endl;
    }


  int transpose[r][c];

    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        transpose[j][i] = arr[i][j];
      }
    }


    cout << "The transpose matrix of an array: " << endl;
    
    for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
        cout << transpose[i][j] << " ";
        cout << endl;
      }

  return 0;

  }

}