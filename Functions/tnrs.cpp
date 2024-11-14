#include<iostream>

using namespace std;

    int prime(){

        int a;

        cout << "Enter number: ";
        cin >> a;

        int count = 0;

        for(int i=2; i<a; i--){
            if(a%i==0){
                count++;
            }
        }

        return count;

    }


int main(){

    if(prime() == 0){
        cout << "Given number is prime number";
    }
    else{
        cout << "Given number is not prime";
    }

    return 0;

}