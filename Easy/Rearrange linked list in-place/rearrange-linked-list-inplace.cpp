//{ Driver Code Starts
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node *inPlace(Node *head)
{
        if (!head || !head->next || !head->next->next)
        {
            return head;
        }
        Node *hare = head;
        Node *tortoise = head;
        Node *prev = NULL;
        
        while ( hare!=NULL && hare->next!=NULL)
        {
            hare = hare->next->next;
            prev = tortoise;
            tortoise = tortoise->next;
        }
        
        prev->next = NULL;
        
        Node *head2 = NULL;
        
        while (tortoise != NULL)
        {
            Node *t = tortoise->next;
            tortoise->next = head2;
            head2 = tortoise;
            tortoise = t;
        }
        
        hare = head;
        
        while (hare != NULL)
        {
            Node *t1 = hare->next;
            hare->next = head2;
            Node *t2 = head2->next;
            if (t1 != NULL)
            {
                head2->next = t1;
            }
            
            hare = t1;
            head2 = t2;
        }
        return head;
}