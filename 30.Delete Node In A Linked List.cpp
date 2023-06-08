@Delete Node In A Linked List 
Problem Statment

Delete Node In A Linked List  with refrence node

CODE:
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    node->data =node->next->data;
    LinkedListNode<int> *temp=node->next;
    node->next=node->next->next;
    delete temp;
}
