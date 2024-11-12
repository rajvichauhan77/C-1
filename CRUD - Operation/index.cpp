#include<iostream>

using namespace std;

int main(){

    int size;
    cout << "size: ";
    cin >> size;

    int a[size];

    for(int i=0; i<size; i++){
        cout << "a["<< i <<"]: ";
        cin >> a[i] ;
    }

    int j;

    do{
        cout << "Press 1 for read" << endl ;
        cout << "Press 2 for update" << endl ;
        cout << "Press 3 for delete" << endl ;
        cout << "Enter value: ";
        cin >> j;

        cout << endl;

        switch(j){
            case 1:
                for(int i=0; i<size; i++){
                    cout << a[i] << ", ";
                }
                cout << endl << endl;
            break;

            case 2:
                int index;
                cout << "Enter index: ";
                cin >> index;
                cout << "Enter value: ";
                cin >> a[index];
                cout << "updated... " << endl << endl;
            break;

            case 3:
                int pos;
                cout << "Enter pos: ";
                cin >> pos;

                for(int i=pos; i<size; i++){
                    cout << "a[i]" << " ";

                    a[i] = a[i=1];
                }
                size--;
                cout << endl;
            break;

            default :
                cout << "Enter valid choice: ";
            break;


        }
        
    }while(j!=0);


}