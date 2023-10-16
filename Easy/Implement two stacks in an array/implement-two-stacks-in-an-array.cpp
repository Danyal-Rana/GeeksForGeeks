//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if (this->top2-this->top1 != 1)
        {
            this->top1++;
            this->arr[this->top1] = x;
        }
    }

    // Push in stack 2.
    void push2(int x)
    {
        if (this->top2-this->top1 != 1)
        {
            this->top2--;
            this->arr[this->top2] = x;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        int x = -1;
        if (this->top1 > -1)
        {
            x = this->arr[this->top1];
            this->top1--;
        }
        return x;
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        int x = -1;
        if (this->top2 < this->size)
        {
            x = this->arr[this->top2];
            this->top2++;
        }
        return x;
    }
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends