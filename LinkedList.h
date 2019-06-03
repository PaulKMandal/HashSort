#include "Node.h"
#include <iostream>

using namespace std;

class LinkedList { //This is a linked list. It works simply by indexing the tail of the node
public:

	node * Head = nullptr; //stores the head
	node * Tail = nullptr; //stores the tail

	LinkedList()
	{

	}

	void Add(int val) //Method to add a node to the Linked List and maintain the order.
	{

		node * nd = new node(val, nullptr);

		if (Head == nullptr) //If there is nothing in the Linked List
		{
			Head = nd; //Add a node
			Tail = nd;
		}

		else //If there is something in the linked List
		{
			Tail->link = nd;
			Tail = Tail->link;
		}

	}

	node * deQueue()
	{
		node * nd = Head;
		if(Head != nullptr)
			Head = Head->link;
		return nd;
	}

	void Print()//print values
	{
		if (Head == nullptr)
		{
			cout << "null\n";
		}
		
		else {
			node * Traverse = Head;
			while (Traverse != nullptr)
			{
				cout << "->" << Traverse->value;
				Traverse = Traverse->link;
			}
			cout << "\n";
		}
	}
};