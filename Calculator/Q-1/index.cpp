#include<iostream>

using namespace std;

int main(){

    int marks;
    

    cout << "Enter your marks : " ;

    cin >> marks;

    string A = "your grade is A.";
    string B = "your grade is B.";
    string C = "your grade is C.";
    string D = "your grade is D.";
    string F = "your grade is F.";

    char score = (score >=90 )? marks='A' : 
    (score >=70 )? marks='B' : 
    (score >=60 )? marks='C' : 
    (score >=35 )? marks='D' : 
     marks='F' ;
    
    switch(score){
        case 'A' :
        cout << "your grade is A." << "Excellent work" ;
        break;
         case  'B':
        cout << "your grade is B." <<"Well done " ;
        break;
         case 'C' :
        cout << "your grade is C." <<"Good job"  ;
        break;
         case 'D' :
        cout << "your grade is D." <<"You passed, but you could do better." ;
        break;
         case 'F' :
        cout << "your grade is F." <<"Sorry, you failed." ;
        break;
    }

cout << score;

    if("score==A || score==B || score==C || score==D"){
        cout << "You are eligible for the next level." << endl;
    }
    else{
        cout << "Please try again next time." << endl;
    }

   
}