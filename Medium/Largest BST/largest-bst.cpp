//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution
{
public:
    struct NodeData
    {
        int size;
        int maxVal;
        int minVal;
        bool validBST;

        NodeData() : size(0), maxVal(INT_MIN), minVal(INT_MAX), validBST(true) {}

        NodeData(int s, int maxV, int minV, bool valid) : size(s), maxVal(maxV), minVal(minV), validBST(valid) {}
    };

    NodeData *findLargestBST(Node *root, int &ans)
    {
        if (root == nullptr)
        {
            NodeData *temp = new NodeData();
            return temp;
        }

        NodeData *leftData = findLargestBST(root->left, ans);
        NodeData *rightData = findLargestBST(root->right, ans);

        NodeData *cData = new NodeData();

        cData->size = leftData->size + rightData->size + 1;
        cData->maxVal = std::max(root->data, std::max(rightData->maxVal, leftData->maxVal));
        cData->minVal = std::min(root->data, std::min(rightData->minVal, leftData->minVal));

        if (leftData->validBST && rightData->validBST && (root->data > leftData->maxVal && root->data < rightData->minVal))
        {
            cData->validBST = true;
        }
        else
        {
            cData->validBST = false;
        }

        if (cData->validBST)
        {
            ans = std::max(ans, cData->size);
        }

        return cData;
    }

    int largestBst(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int ans = 0;
        findLargestBST(root, ans);
        return ans;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.largestBst(root) << endl;
    }
    return 0;
}

// } Driver Code Ends