#include<iostream>

using namespace std;

int main(){

    int l_digit, digit_sum =0;

    int digit;
    cout << "Enter digit ";
    cin >> digit;

    while (digit > 0){

        l_digit = digit % 10;
        cout << digit << endl;

        digit_sum = digit_sum + l_digit;
        digit = digit/10;


    }

    cout << "Digit of sum = " << digit_sum;

}