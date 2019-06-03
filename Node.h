#include <iostream>
#include <cstddef>

using namespace std;

class node { //This is a node. It helps construct a linked list.
public:
	int value; //The value stored by the node
	node * link; //Link is the pointer to the item in the list before the tail
	node(int i, node * nd)
	{
		value = i;
		link = nd;
	}

	node * getLink()
	{
		return link;
	}

	int getValue()
	{
		return value;
	}

};