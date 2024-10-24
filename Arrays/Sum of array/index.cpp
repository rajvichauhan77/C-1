#include<iostream>

using namespace std;

int main(){

    int size;
    cout << "Size of array: ";
    cin >> size;

   int a[size], b[size], c[size];

   for(int i=0; i<size; i++){
    cout << "a["<< i <<"]= ";
    cin >> a[i];
   }

   for(int i=0; i<size; i++){
    cout << "b["<< i <<"]= ";
    cin >> b[i];
   }

   for(int i=0; i<size; i++){
    c[i] = a[i] + b[i];
   }

   cout << "$$$$$$$$$$$" << endl << "Sum of array: ";

 for(int x : c){
    cout << x << " ";
 }

}