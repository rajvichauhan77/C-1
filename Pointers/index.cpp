#include<iostream>

using namespace std;

int main(){

    // int a = 10;

    // int *ptr;

    // ptr = &a;

    // cout << ptr;


    // printf("address %d", ptr);



    // int arr[5] = {1, 2, 3, 4, 5};

    // int *ptr[5];

    //     for(int i=0; i<5; i++){
    //         ptr[i] = &arr[i];

    //     }

    //     for(int i=0; i<5; i++){
    //         cout << "address: " << ptr[i] << " value: " << *ptr[i] << endl;
    //     }


    int a=5;

    int *p1 = &a;
    int **p2 = &p1;

    cout << p2;
    

    return 0;

}