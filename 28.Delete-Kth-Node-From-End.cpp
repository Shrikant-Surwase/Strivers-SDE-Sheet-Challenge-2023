@Delete Kth Node From End 
@problem statment



You have been given a singly Linked List of '"'nodes
with integer data and an integer 'K'.
Your task is to remove the 'K'th node from the end of the
given Linked List and return the head of the modified
linked list.
  
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

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node*temp = head;
    int size=0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
  
  int dsize = size-K;
   Node*temp1 = NULL;
   if(dsize == 0){
       temp1 = head->next;
       head = head->next;
   }else{
       temp1 = head;
   }
   Node*curr = temp1;
   for(int i=1; i<size; i++){
      if(i != dsize){
          curr->next = head->next;
          curr = curr->next;
          head = head->next;
      }else{
          curr->next = head->next->next;
          head= head->next;
          curr=curr->next;
      }
   }
   return temp1;
   }
