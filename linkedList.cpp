#include <iostream>

using namespace std;

//Create a structure of the linked list
struct node{
	int data;               //contains integer data
	struct node *next;      //contains pointer to the next data
};


//This class contains the functions and initializations for the linked list (Blue Print)
class linkedList{
private:
	node *head, *tail;     // Knowing the head and the tail address of the linked list is the most valuable thing
public:
	linkedList(){
		head = NULL;
		tail = NULL;
	}

	void addNode(int n){
		node *tmp = new node();   //create a new node
		tmp->data = n;            // data of the node is set to be equal to n
		tmp->next = NULL;         // tmp node will point the tail to null 
		if ( head == NULL ){
			head = tmp;
			tail = tmp;
		}
		else{
			tail->next = tmp;
			tail = tail->next;
		}
	}

	void getData(){
		cout << "Head data = " << head->data << endl;
		cout<< "Tail data = " << tail->data << endl;
	}
};


int main(){
	linkedList a;
	a.addNode(10);
    a.addNode(200);
    a.getData();

	
	return 0; 
}
