#include<iostream>

using namespace std;

void sum(int r, int c){
    cout << "Sum of a & b is: " << r+c << endl;
}
void sub(int r, int c){
    cout << "Subtraction of a & b is: " << r-c << endl;
}

void devide(int r, int c){
    cout << "devidation of a & b is: " << r/c << endl;
}


int main(){

    int a,b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    sum(a,b);
    sub(a,b);
    devide(a,b);

    return 0;

}