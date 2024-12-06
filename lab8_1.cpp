#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;

  int start = 0;

  if(rank == 'S'){
    cout << "You have received Super Ultra Rare Unit!!!\n";
    start = 1;
  }
    if(rank == 'A' || start == 1){
       cout << "You have received 5 gems.\n"; 
       start = 1;
    }
        
    if(rank == 'B' || start == 1){
      cout << "You have received 1 gems.\n"; start = 1;

    }
    if(rank == 'C'|| start == 1){
      cout << "You have received 2000 coins.\n"; start = 1;

    }
              
    if(rank == 'D'|| start == 1){
      cout << "You have received very KAK items.\n";
    }
              
  return 0;
}
