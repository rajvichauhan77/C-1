#include<iostream>

using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=5; i++){
       

        for(int k=5; k>=i; k--){
            cout << "&" ;
        }
        cout << endl;

         for(int j=1; j<=i; j++){
            cout << " " ;
        }
    }

}