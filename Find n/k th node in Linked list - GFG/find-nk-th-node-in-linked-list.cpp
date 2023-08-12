//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head,int k);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* ptr,*start = NULL,*ptr1;
        int n,i;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            int value;
            cin>>value;
            
            ptr=new Node(value);
            
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p = fractional_node(start,k);
        cout<<p<<endl;
    }
}

// } Driver Code Ends


/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int fractional_node(struct Node *head, int k)
{
    // your code here
    Node* current = head;
    int N = 0; // Number of elements in the list
    
    // Traverse to count the number of elements
    while (current != nullptr) {
        N++;
        current = current->next;
    }
    
    // Calculate the ceil(N/k) value
    int targetIndex = ceil((double)N / k);
    
    // Traverse to the target node
    current = head;
    for (int i = 1; i < targetIndex && current != nullptr; i++) {
        current = current->next;
    }
    
    // Return the value of the target node
    if (current != nullptr) {
        return current->data;
    } else {
        // Handle the case when targetIndex is out of bounds
        // In this example, we're returning -1 as an indicator of error
        return -1;
    }
}
