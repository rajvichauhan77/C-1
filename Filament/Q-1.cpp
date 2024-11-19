#include<iostream>
#include<string.h>


using namespace std;

int main(){



    char i[100], j[100];

    cout << "Enter char: " << endl;
    cin >> j;

    strcpy(i, j);
    strrev(i);

    if(strcmp(j, i) == 0){
        cout << "String is pallendrome";

    }
    else{
        cout << "String is not pallendrome";
    }
     
    return 0;


}