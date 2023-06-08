@Middle Of Linked List 
@Problem Statement

Given a singly linked list of 'N' nodes. The objective is to
determine the middle node of a singly linked list.
However, if the list has an even number of nodes, we
return the second middle node.
  
  CODE:
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node*temp = head;
    int size =0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0; i<size/2; i++){
        temp = temp->next;
    }
    return temp;
}

