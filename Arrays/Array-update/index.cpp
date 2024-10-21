#include<iostream>

using namespace std;

int main(){

    int size;

    cout << "Enter the  size of array= ";
    cin >> size;

    cout << endl;

    int a[size];


    for(int i=0; i<size; i++){
        cout << "a["<< i <<"]=";
        cin >> a[i];
    }

    cout << endl;


    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
   
    int u;
    cout << endl << "Enter index for update: ";
    cin >> u;
    cout << "a["<< u <<"]= ";
    cin >> a[u];

    cout << endl << endl ;

    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }

}