@Rotate Linked List 
@Prboblem Statement

Reverse the link list by k

CODE:

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
void rotate(vector<int>&v, int k){
     vector<int>temp1;
     int n =v.size();
     for(int i=0; i<v.size(); i++){
          temp1.push_back(v[i]);
     }
     for(int i=0; i<v.size(); i++){
          v[(i+k)%n] = temp1[i];
     }
}
Node *rotate(Node *head, int k) {
     // Write your code here.
     vector<int>v;
     Node*temp = head;
     while(temp){
          v.push_back(temp->data);
          temp = temp->next;
     }
     rotate(v, k);
     Node*ans = new Node();
     Node*curr = ans;
     for(int i=0; i<v.size(); i++){
          curr->next = new Node(v[i]);
          curr = curr->next;

     }
     return ans->next;
     
}
