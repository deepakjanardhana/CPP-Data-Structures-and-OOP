#include <iostream>
#include <cstdlib>
#include <ctime>

#include "List.h"

using namespace std;

int main (){

  int n;
  int i;
  int x;
  List l1;
  srand (time(0));
  cout << "How many integers do you want to insert ? ";
  cin >> n;
  for (i=0; i<n; i++) {
    l1.insert_node (rand());
  }

  l1.print_list();
  
  cout << "Which element do you want to delete ? ";
  cin >> x;
  l1.del_node(x);

  l1.print_list();

  
}
