@Intersection of Two Linked Lists 
@problem Statement

You are given two Singly Linked Lists of integers, which
may have an intersection point.
Your task is to return the first intersection node. If there
is no intersection, return NULL
  
  CODE:
#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node*findIntersection(Node *f, Node *s)
{
    //Write your code here
	if(!f || !s) return NULL;
	Node* a = f;
	Node* b = s;
	while(1){
		if(a == b) return a;
		a = a->next;
		b = b->next;
		if(!a && !b) return NULL;
		if(!a) a = s;
		if(!b) b = f;

	}
	return NULL;
}
