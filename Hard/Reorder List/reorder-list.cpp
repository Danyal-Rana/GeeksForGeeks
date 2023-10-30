//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
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
    void reorderList(Node* head)
    {
        if (!head || !head->next || !head->next->next)
        {
            return;
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
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends