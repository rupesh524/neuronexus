#include<iostream>
#include <cstdlib>
using namespace std;

int randomnumber(){
  
    return rand() % 100 + 1;
}


int main(){
    int guessnumber;
    int attempts = 0;

    cout<<"choose the level of difficulty"<<endl;
    char ch;
    cout<<"choose e for easy: 15 attempts"<<endl;
    cout<<"choose m for medium: 10 attempts"<<endl;
    cout<<"choose h for hard : 7 attemps"<<endl;
    cin>>ch;

    while(true){

    cout<<"guess a number(1 to 100)"<<endl;
    cin>>guessnumber;

     attempts++;
      
    if(ch == 'e' && attempts> 15 ){
        cout<<"you LOST the game! TRY AGAIN"<<endl;
        break;
    }
    else if(ch == 'm' && attempts>10){
        cout<<"you LOST THE game ! TRY AGAIN"<<endl;
        break;
    }
    else if(ch == 'h'&& attempts >7){
        cout<<"you LOST the game ! TRY AGAIN "<<endl;
        break;
    }

    if(guessnumber == randomnumber()){
        cout<<"CONGRATULATIONS YOU WON THE GAME. YOU GUESSD RIGHT : "<<guessnumber<<endl;
        cout<<"you took "<<attempts<<"no. of attemps to guess it right"<<endl;
        break;
    }
    else if(guessnumber<randomnumber())
    {
        cout<<"your guess is too low, try again "<<endl;  
    }
    else{
        cout<<"your guess is too high, try again"<<endl;
    }
    }

    return 0;

}