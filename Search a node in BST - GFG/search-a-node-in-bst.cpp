//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node *root, int x);

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;

        cout << search(root, s);
        cout << endl;
    }
}

// } Driver Code Ends


// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
     if (root == nullptr) {
        // If the tree is empty or the value is not found
        return false;
    }

    if (root->data == x) {
        // If the value matches the current node's value
        return true;
    } else if (x < root->data) {
        // If the value is less than the current node's value, search in the left subtree
        return search(root->left, x);
    } else {
        // If the value is greater than the current node's value, search in the right subtree
        return search(root->right, x);
    }
}
