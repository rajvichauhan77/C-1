#include<iostream>

using namespace std;

int main(){

    int p;

    cout << "Enter p= " << endl;
    cin >> p;

    int i=1;
    int count = 0;
    while(i < p){
        if(p%i == 0){
            count++;
        }
        i++;

    }
    if(count == 1){
        cout << p << " is prime number ";
    }
    else{
        cout << p << " is not prime number";

    }


}

