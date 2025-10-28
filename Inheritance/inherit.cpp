// Topic :- protected members

/*
1 protected makes the members accessible in derived class only not outside.
*/

#include <iostream>
#include "person.h"
#include "player.h"
using namespace std;

int main()
{
  Player player1;
  player1.print_info(player1); // here as you can see we were able to access the member of class Person in derived class Player in the method print_info() 
/*
  // caution below code will not work as clear by definition of protected members
  // cout << player1.first_name << endl;
*/

  Player player2("Chess", "Atharva", "Rai");
  cout << player2 << endl;

}       







