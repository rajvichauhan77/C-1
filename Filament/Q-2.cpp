#include<iostream>
#include<string.h>

using namespace std;

int main(){

     
     string str;


     cout << "Enter sting: ";
     cin >> str;
     
     int size = str.size();

        int count = 1;
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(str[i]== str[j]){
                    count++;
                }
            }
             cout << str[i] << " :" << count << endl;

            count =1;

        }

   
}