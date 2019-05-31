#include <iostream>
#include <string>

#include "List.h"

using namespace std;

List::List (){
	
  head = NULL;
  curr = NULL;
  temp = NULL;
  
}

void List::insert_node (int data_in){

  nodePtr n = new node;

  n->data = data_in;
  n->next = NULL;

  
  if (head != NULL){

    curr = head;
    while (curr->next != NULL){

      curr = curr->next;
      
    }
    curr->next = n;
    

  }
  else {

    head = n;
    
  }
    
  
}

//function to delete nth element of linked list

void List::del_node (int data_del){

  temp = head;
  curr = head;

  //code to delete based on data
  /*
  while (curr != NULL && curr->data != data_del){

    temp = curr;
    curr = curr->next;

  }
  */

  //code to delete based on the number of the element
  for (int i = 0; i < data_del-1; i++){

    if (curr!= NULL){
      temp = curr;
      curr = curr->next;
    }
    else{
      cout << "Error: Linked List does not contain enough elements.\n";
      goto skip1;
    }
    
  }
   
  
  if (curr != head){
      temp->next = curr->next;
  }
  else{
    head = curr->next;
  }
  delete curr;
  cout << data_del <<" has been deleted.\n" << endl;

 skip1: ;
  
  
}

void List::print_list (){

  curr = head;
  cout <<  "The list is as follows:\n";

  if (curr == NULL){
    cout << "Error: List is empty.\n";
    goto skip2;
  }
  while (curr != NULL){

    cout << curr->data << endl;
    curr = curr->next;

  }
 skip2: ;
    
  
}
