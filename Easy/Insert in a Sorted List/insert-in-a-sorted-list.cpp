//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data)
    {
        Node *t = new Node (data);
        
        Node *dummyHead = new Node (0);
        dummyHead->next = head;
        
        Node *temp = head;
        Node *temp2 = dummyHead;
        
        if (head == NULL)
        {
            return t;
        }
        
        while (temp != NULL)
        {
            if (temp->data >= t->data)
            {
                temp2->next = t;
                t->next = temp;
                break;
            }
            else if (temp->next == NULL && temp->data <= t->data)
            {
                temp->next = t;
                t->next = NULL;
                break;
            }

            temp2 = temp;
            temp = temp->next;
        }
        
        return dummyHead->next;
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends