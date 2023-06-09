@Cycle Detection in a Singly Linked List 
@problem statement
You are given a Singly Linked List of integers. Return
true if it has a cycle. else return false.
A cycle occurs when a node's next points back to a
previous node in the list.
  
  CODE:
/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    Node* first = head;
    Node*second = head;
    while(first && second&&second->next){
      
        first = first->next;
        second = second->next->next;
          if(first == second) return true;
    }
    return false;

}
