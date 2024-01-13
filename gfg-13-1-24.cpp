//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node*addnode(struct Node*head,struct Node*nextNode){
        Node*prev=NULL;
        while(head!=NULL){
            if(head->data>nextNode->data){
                break;
            }
            prev=head;
            head=head->next;
        }
        if(prev==NULL){
            Node*temp=head;
            nextNode->next=temp;
            head=nextNode;
            return head;
        }
        prev->next=nextNode;
        nextNode->next=head;
        return NULL;
    }
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node*curr=head_ref;
        int flag=0;
        while(curr->next!=NULL){
            Node*nextNode=curr->next;
            if(nextNode->data>=curr->data){
                curr=nextNode;
            }
            else{
                curr->next=nextNode->next;
                Node*nd=addnode(head_ref,nextNode);
                if(nd!=NULL){
                    head_ref=nd;
                }
            }
        }
        return head_ref;
    }
    
};