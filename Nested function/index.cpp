#include<iostream>

using namespace std;

    void rajvi();
    void manthan();
    void diya();


    void rajvi(){
      
        cout << "I am rajvi" << endl;
        manthan();
    }

    void manthan(){
        cout << "I am manthan" << endl;
        diya();
    }

    void diya(){
        cout << "I am diya" << endl;
    }


int main(){

    rajvi();

}