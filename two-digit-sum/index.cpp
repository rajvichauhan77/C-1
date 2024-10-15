#include<iostream>

using namespace std;

int main(){

    int n=4234;
    
    int ld=n%10;

    while(n>=10){
        n=n/10;
    }

    cout << n+ld;

}