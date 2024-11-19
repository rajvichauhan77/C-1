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


    cout <<  " Negative elements from an Array: " << endl ;
    for(int i=0; i<size; i++){
        
        if(a[i] < 0){
            cout << a[i] << ", ";
        }
       
    }
   
    cout << endl;


}