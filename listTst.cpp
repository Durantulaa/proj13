#include <iostream>
#include "list.h"

using namespace std;

int main() {
  List *lst1 = new List;
  //List lst;
//int lst3 = [5,4,2,6,3,5];
  
  for (int i = 1; i <= 10; i++) {
    lst1->PutItemH(i);
  }
  
  cout << endl;
  cout << "Print: " << endl;
  lst1->Print();
  cout << endl << endl << endl;
  cout << "Print Reversed: " << endl;
  lst1->PrintRev();
  cout << endl << endl << endl;
  cout << "Length of list: " << lst1->GetLength() << endl;
  cout << endl << endl << endl;

  delete lst1;
  return 0;
}

// make
//./main