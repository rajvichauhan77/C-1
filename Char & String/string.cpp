#include<iostream>

using namespace std;

int main(){

    string str;

    cout << "Enter String: ";
    cin >> str;
    cout << str;

    int strlen = str.length();
    string str2;

    for(int i=strlen-1; i>=0; i--){
        str2= str2+str[i];
    }

    if(str == str2){
        cout << " string is pallendrom";
    }
    else{
        cout << " string is not pallendrom";
    }

}