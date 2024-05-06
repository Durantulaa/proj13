#include <iostream>
using namespace std;

#include "list.h"

// Non-recursive functions. I have written them for you.
List::List() { head = NULL; }

// destructor needs to be wriiten
List::~List() { Destructor(head); }

bool List::IsEmpty() {
  if (head == NULL)
    return true;
  return false;
}

void List::PutItemH(itemType item) {
  node *tmp = new node;
  tmp->item = item;
  tmp->next = head;
  head = tmp;
  tmp = NULL;
}

itemType List::GetItemH() {
  if (!IsEmpty())
    return head->item;
  return 0;
}

void List::DeleteItemH() {
  node *cur = head;
  head = head->next;
  delete cur;
  cur = NULL;
}

void List::Print(node *cur) {
  if (cur == NULL)
    return;
  else {
    cout << cur->item << endl;
    Print(cur->next);
  }

} // check

void List::Print() {
  // node *cur = head;

  // while (cur != nullptr) {
  //   cur = cur->next;
  //   cout << cur->item << endl;
  // }

  Print(head);
} // done

void List::PrintRev(node *cur) {
  if (cur == NULL)
    return;
  else {
    PrintRev(cur->next);
    cout << cur->item << endl;
    }

  } // check

  void List::PrintRev() {
    // node *cur = head;

    // while (cur != nullptr) {
    //   cout << cur->item << endl;
    //   cur = cur->next;
    // }
    PrintRev(head);
  } // not done

  int List::GetLength(node * cur) {
    if (cur == NULL)
      return 0;
    return GetLength(cur->next) + 1;
  } // done

  int List::GetLength() {

    int length = 0;
    node *cur = head;
    // node *cur = lst->head;

    while (cur != nullptr) {
      length++;
      cur = cur->next;
    }

    return length;
  } // done

  void List::Destructor(node * cur) {
    // if (cur == NULL)
    //   cout << "Destructor isn't running\n";

    while (cur != NULL) {
      Destructor(cur->next);
    }
    // cout << "Destructor is running" << endl;
    delete cur;
  } // test