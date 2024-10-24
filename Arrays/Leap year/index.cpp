#include<iostream>

using namespace std;

int main(){

    int start, end, arr[100];

    cout << "Enter the start year: ";
    cin >> start;

    cout << "Enter the end year: ";
    cin >> end;

    int count=0;
     for(int i=start; i<=end; i++){
        if(i%4==0){
            arr[count] = i;
            count++;
        }
     }

     for(int i=0; i<count; i++){
        cout << arr[i] << endl;
     }

}