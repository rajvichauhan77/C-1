#include<iostream>

using namespace std;

int main(){

    const int a=2;
    #define var 6;

    int arr[5]={1,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;

    int j=0;
    for(int r : arr){
        cout << r << endl;
        sum = sum + arr[j];
        j++;
    }

}