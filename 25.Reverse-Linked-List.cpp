@Reverse Linked List
@Problem Statement

Given the head of a singly linked list, reverse the list, and return the reversed list.
  
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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     stack<int>s;
     int cnt=0;
    LinkedListNode<int>*temp =head;
    while(temp != NULL){
        temp=temp->next;
        cnt++;
    }
    temp=head;
    for(int i=0; i<cnt; i++){
        s.push(temp->data);
        temp=temp->next;
    }
 LinkedListNode<int>*ans = new LinkedListNode<int>(0);
  LinkedListNode<int>*temp2 = ans;
  while(!s.empty()){
       LinkedListNode<int>*dummy = new LinkedListNode<int>(s.top());
       s.pop();
       temp2->next = dummy;
       temp2 = temp2->next;
  }
  return ans->next;






}
