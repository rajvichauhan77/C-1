#include<iostream>

using namespace std;

int main(){

     char strn;
     string str;


     cout << "Enter sting: ";
     cin >> str;
     cout << str << endl ;


        int i=0, alphabate[26], j;

        if(str[i] >= 'a' && str[i] <= 'z'){
            j = str[i] - 'a' ;
                alphabate[j]++;
        }
   

        cout << "Frequency of sting is: " << endl;
        for(i=0; i<26; i++){
            cout << char(i + 'a') << " : " << alphabate[i] << endl;
        }

    return 0 ;

}