#include<iostream>

using namespace std;

char cheak(int m){

    if(m>=80){
        return 'a';
    }
    else if(m>=60){
        return 'b';
    }
    else{
        return 'c';
    }

}

int factorial(int marks){
    int fact=1;
    for(int i=marks; i>0; i--){
        fact = fact*i;
    }

    return fact;
}


string isprime(int a){
    int count = 0;
    for(int i=2; i<a; i++){
        if(a%i==0){
            count++;
        }
    }

    if(count == 0){
        return "is prime";
    }
    else{
        return "not prime";
    }
}



int main(){

    int marks, choise;
    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter 1 for grade" << endl;
    cout << "Enter 2 for prime" << endl;
    cout << "Enter 3 for factorial" << endl;

    cout << "Enter choise: ";
    cin >> choise;

    switch(choise){
        case 1:
            cout << "Grade: " << cheak(marks) << endl;
            break;
        case 2:
            cout << "is prime: " << isprime(marks) << endl;
            break;
        case 3:
            cout << "factorial: " << factorial(marks) << endl;
            break;
        default:
            cout << "Enter valid choise";
            break;

    }

    return 0;

}