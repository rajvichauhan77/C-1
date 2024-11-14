#include<iostream>

using namespace std;

void red(int a){
    cout << "Created function is red";
}

void white(){
    cout << "Created function is white";
}


int main(){

    int a;
    cout << "Enter a: ";
    cin >> a;

    if(a==1){
        red(2);
    }
    else{
        white();
    }

    return 0;

}