@Palindrome Linked List 
@Problem Statement

You are given a singly Linked List of integers. Your task
is to return true if the given singly linked list is a
palindrome otherwise returns false.
  
  CODE:

//two approaches 
1)use the vector to store the all element of the linkedlist and check palindrome or not but the TC is O(N) and SC is O(N)
  
2) we can solve these problem in O(N) and O(1) time and space conplexity as follows:

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

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    LinkedListNode<int> *temp = slow;
    LinkedListNode<int> *prev = NULL;
    while(temp != NULL){
        LinkedListNode<int> *nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp =nxt;
    }
    while(head != slow){
        if(head->data != prev->data) return false;
        head=head->next;
        prev=prev->next;
    }
    return true;
    

}
