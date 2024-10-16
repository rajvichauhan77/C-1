#include<iostream>

using namespace std;

int main(){

    int n;
    
    cout << "Enter any number : ";
    cin >> n;
    
    int ld=n%10;

    while(n>=10){
        n=n/10;
    }

    cout << "sum of fd anf ld is : " <<n+ld;

}