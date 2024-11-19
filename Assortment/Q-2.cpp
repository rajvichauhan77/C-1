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



    

    int min = 0;

    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          if(min < arr[j][j]){
            min = arr[i][j];
          }
        }
        cout << endl;
    }
    cout << "Largerst element is : " << min;
   

}


