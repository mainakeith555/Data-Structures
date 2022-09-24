#include <iostream>
#include <string>
using namespace std;



struct Node
{
	string name;
	Node* link;
};
typedef Node* NodePtr;

void print_Node(NodePtr head);
NodePtr search(NodePtr head, string target);
void insert(NodePtr after_me, string word);
void del_Node(NodePtr discard, string target);
void delAll_Node(NodePtr head);



int main()
{
	NodePtr listPtr, tempPtr, discard;
	listPtr = new Node;
	listPtr->name = "Emily";

	tempPtr = new Node;
	tempPtr->name = "James";
	listPtr->link = tempPtr;

	tempPtr->link = new Node;
	tempPtr = tempPtr->link;
	tempPtr->name = "Joyce";
	tempPtr->link = NULL;

	print_Node(listPtr);
	cout << endl;
	insert(search(listPtr, "James"), "Joshua");

	print_Node(listPtr);

	cout << endl;	
	del_Node(listPtr, "Joyce");
	print_Node(listPtr);
	
	cout << endl;
	delAll_Node(listPtr);

	listPtr = NULL;
	print_Node(listPtr);


	return 0;
}

void print_Node(NodePtr head) {

	NodePtr temp = head;

	while (temp != NULL) {

		cout << temp->name << endl;

		temp = temp -> link;
	}


}
NodePtr search(NodePtr head, string target) {

	NodePtr here = head;

	if (here == NULL) {
		return NULL;
	}
	else {
		while (here -> name != target && here->link != NULL)
			here = here->link;

		if (here->name == target)
			return here;
		else
			return NULL;
	}

}

void insert(NodePtr after_me, string word) {

	NodePtr temp_ptr;
	temp_ptr = new Node;

	temp_ptr->name = word;
	temp_ptr->link = after_me->link;
	after_me->link = temp_ptr;
}

void del_Node(NodePtr head, string target) {

	NodePtr before = head;
	NodePtr discard = head;


	while (discard->name != target && discard->link != NULL) {

		before = discard;

		discard = discard->link;


	}
	if (discard->name == target) {

		before->link = discard->link;

		delete discard;

	}
	else
		cout << target << " not in the list.";
	
}

void delAll_Node(NodePtr head) {

	NodePtr before = head;
	NodePtr discard = head;


	while (discard != NULL) {

		before = discard;

		discard = discard->link;

		delete before;

	}

}


	
	


