//Creating a game player collecting chips and the player to collect the last chip will loss the game......
#include<iostream>		//input output library
#include<cstdlib>		//Standard Library
#include <cmath>		//used for static_cast<datatype> or floor and ceil
using namespace std;
const int Max_Count =100;   //declaring the number of chips to 100
int main()
{
  bool player1 = true;		
  bool gameover = false;
  string playername[2];
  int totalchip, chip, chiptaken;
  srand(time(0));
  cout<<"enter player1 name ";
  cin>>playername[0];
  cout<<"enter player2 name ";
  cin>>playername[1];
  totalchip = (rand() % Max_Count) +1;
  cout<<"This round will start with : "<<totalchip<<"chips \n";
//Look to check if all the chips are collected by players 
 while(gameover == false)
  {
//loop to make the game on until chip becomes zero 
 do
  {if(player1)
  { 
    cout<<playername[0]<<"s Turn. How many chipset would you like \n";
  }
  else
  {
    
    cout<<playername[1]<<"s turn. How many chipset would you like \n";
  }
  chip = totalchip * 0.5;   //maximum chip a player can take is half of the available chipset
    cout<<"You can take :";
    if(chip == 0)
    {cout<<"1"<<"\n";}
    else 
    {cout<<chip<<endl;}
  cin>>chiptaken;
  cout<<"Chipset taken by player is :"<< chiptaken <<endl;
//loop giving the player instruction to take chips less than or half the total chips available
  if((chiptaken>chip) && (chip>0))
  {
    cout<<"you could select only "<<chip<< " or less than that. Please renter. Thanks!!"<<endl;
  }
  }while((chiptaken>chip) && (totalchip>1) );
  totalchip= totalchip - chiptaken;
  cout<<"there are"<<totalchip<<" left \n";
//loop to check if total chip is zero
if(totalchip == 0)
{gameover = true;
if(player1)
  { 
    cout<<"Congrats"<<playername[1]<<"\n";
  }
  else
  {
    
    cout<<"Congrats "<<playername[0]<<"\n";
  }
  int ans;
 cout<<"Do you wish to play again\n"<<"1.Yes\n"<<"2. Quit"<<"\n";
 cin>>ans;
//Switch condition to repaly the game if needed by the player 
switch (ans)
 {
   case 1:
   gameover = false;
   totalchip = (rand() % 100) +1;
  cout<<"This round will start with : "<<totalchip<<"chips \n";
   break;
   case 2:
   cout<<" thanks for choosing the game ";
   break;
 }
 }
else 
{player1 =! player1;}
}
return 0;
}
