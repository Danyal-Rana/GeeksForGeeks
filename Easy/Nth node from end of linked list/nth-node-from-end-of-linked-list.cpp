//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int length(Node* &head){   //find the length of the linked list
        int lnt = 0;
        Node* temp = head;//creating temp pointer bcz we will do the modification on temp , which will not affect the head pointer
        while(temp != NULL){
            lnt++;
            temp = temp->next;
        }
        return lnt;
    }
    int getNthFromLast(Node *head, int n)
    {
        
           int len = length(head);
           if(n>len){          //if length of the linked list is less than the index we are 
                return -1;    //searching for then return -1;
           }
           if(len==1){      //if length of the linked list is one return the data at head
            return head->data;
           }
           int position = len - n;
           Node* temp = head;      
           for(int i=0; i<position; i++){
               temp = temp->next;
           }
           return temp->data;
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends