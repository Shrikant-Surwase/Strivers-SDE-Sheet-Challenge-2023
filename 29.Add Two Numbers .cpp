@Add Two Numbers 
@Prblem Statement

You are given two non-negative numbers 'num1'and
'num2' represented in the form of linked lists

Calculate the sum of the two numbers and return the
head of the sum list.
  
  
  CODE:
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
void f2(Node*&head, Node*&tail, int val){
    Node*temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }else{
        tail->next = temp;
        tail =temp;
    }
}
Node* f(Node*num1, Node*num2){
    int curr=0;
    Node*head = NULL;
        Node*tail = NULL;
    while(num1 != NULL || num2 != NULL || curr != 0){
        int val1=0;
        
        if(num1 != NULL){
            val1=num1->data;
            num1 = num1->next;
        }
        int val2=0;
        if(num2 != NULL){
            val2=num2->data;
            num2 = num2->next;
        } 

        int sum = val1+val2+curr;
        int digit = sum%10;
        curr = sum/10;
        f2(head, tail, digit);

    }
    return head;
}
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node*ans = f(num1, num2);
    return ans;


    
}
