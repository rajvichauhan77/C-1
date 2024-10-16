#include<iostream>

using namespace std;

int main(){

    int num;
    
    cout << "Enter number";
    cin >> num;

    int digit=0;

    while(num >=1){
        num/=10;
        digit++;
    }

    cout << digit;
}