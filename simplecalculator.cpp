#include<iostream>
using namespace std;


void getresult(int a,int b,char operation){
       switch(operation){

        case '+' : cout<<a<<" + "<<b<<" is "<<a+b<<endl;
               break;

        case '-' :  cout<<a<<" - "<<b<<" is "<<a-b<<endl;
              break;

        case '*' : cout<<a<<" * "<<b<<" is "<<a*b<<endl;
              break;

        case '/' :  
               if(b == 0 ){ 
                cout<<"divide by 0 is not possible "<<endl;
                break;
               }
               else{             
               cout<<a<<" / "<<b<<" is "<<static_cast<double>(a)/b<<endl;
                break;
               }

        default : cout<<"operation is invalid "<<"enter a valid opertation"<<endl<<"choose from(+,-,*,/)"<<endl;;
       }
}


int main(){
    char choose;
    do{
    int num1,num2;
    char operation;
    cout<<"enter first number"<<endl;
    cin>>num1;

    cout<<"enter second number"<<endl;
    cin>>num2;

    cout<<"enter operation what you want to perform(+,-,*,/)"<<endl;
    cin>>operation;

     getresult(num1,num2,operation);
     cout<<"do you want to perform another calculations(Y/N)"<<endl;
     cin>>choose;
    }
    while(choose == 'Y');

   return 0;
}

   