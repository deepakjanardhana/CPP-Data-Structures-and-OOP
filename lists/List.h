#include <iostream>
#include <string>

using namespace std;

class List {

	typedef struct node { 

		int data;
		node *next;

	}* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;

	
	
	public:
	List();
	void insert_node (int data_in);
	void del_node (int data_del);
	void print_list ();

};

