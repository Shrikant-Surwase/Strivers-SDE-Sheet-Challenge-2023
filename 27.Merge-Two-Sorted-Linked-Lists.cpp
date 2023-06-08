@Merge Two Sorted Linked Lists 
@Problem Statment

You are given two sorted linked lists. You have to merge
them to produce a combined sorted linked list. You need
to return the head of the final linked list.
  
  CODE:
#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    vector<int>v;
    Node<int>*temp = first;
    if(first == NULL && second == NULL) return NULL;
    
    while(temp !=  NULL){
        v.push_back(temp->data);
        temp =temp->next;
    }
    temp = second;
    while(temp != NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(), v.end());
    Node<int>*temp1 = new Node<int>(v[0]);
    Node<int>*curr = temp1;
    for(int i=1; i<v.size(); i++){
        curr->next = new Node<int>(v[i]);
        curr = curr->next;
    }
    return temp1;
}
