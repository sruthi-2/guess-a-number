#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int play()
{  
    int user,a=1;
    int random=rand() % 10;
    random+=1;
   
    cout<<"its the guessing game. guess a random number from 1 to 10\nenter your choice.lets test your luck\n ";
     do
    {
    cout<<"enter your choice    ";
    // cout<<random<<"\n";
    cin>>user;
    if(user == random)
       {
        cout<<"Arent you a lucky one....😍😍😍🤩!oh u win\n\n";
         a=0;   
       }
    else if(user<random)
       {
        cout<<"oops  too small\n";  
        cout<<"click 1 to just try again  or just enter 0 if u dont feel like playing. \n"; 
        cin>>a;
       }
    else
      {
      std::cout<<"oh too big\n ";
      cout<<"click 1 to  try again  or just enter 0 if u dont feel like playing.\n";
      cin>>a;
      }
    
    }while(a!=0);
   
}
int main() {
    srand(time(NULL));
    int choice;
   
    do
    {
    cout<<"enter 0 to quit    1 to play\n";
    cin>>choice;
    
    switch(choice)
    {
        case 0 : cout<<"you exited.Come back next time!😊";
                 choice=0;
                 break;
                 
        case 1 :play();
                break;
        default :cout<<"wrong choice";
    }
    }while(choice!=0);

    
}
