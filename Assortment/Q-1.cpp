#include<iostream>

using namespace std;

int main(){

    int size;

    cout << "Enter the  size of array= ";
    cin >> size;

    cout << endl;

    int a[size];


    for(int i=0; i<size; i++){
        cout << "a["<< i <<"]= ";
        cin >> a[i];
        
    }

   
    

    for(int i=0; i<size; i++){
        // cout << a[i] << " ";
        if(i < 0){
            cout << a[i] << " " ;
        }
        else{
            cout << " " ;
        }
    }
   
    cout << endl;


}