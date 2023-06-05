#include <iostream>
#include <queue>
#include <climits>
using namespace std;

// 1

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

void printTree(Node* root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();
            if (curr == NULL) {
                cout << "  ";
            } else {
                cout << curr->val << " ";
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}

void printMinLeaf(Node* root, int& minVal) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        if (root->val < minVal) {
            minVal = root->val;
        }
    } else {
        printMinLeaf(root->left, minVal);
        printMinLeaf(root->right, minVal);
    }
}

Node* createTree() {
    queue<Node*> q;
    int val;
    cout << "Enter the root value: ";
    cin >> val;
    Node* root = new Node(val);
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << "Enter the left child value of " << curr->val << " (-1 if none): ";
        cin >> val;
        if (val != -1) {
            curr->left = new Node(val);
            q.push(curr->left);
        }
        cout << "Enter the right child value of " << curr->val << " (-1 if none): ";
        cin >> val;
        if (val != -1) {
            curr->right = new Node(val);
            q.push(curr->right);
        }
        if (val == -9999) break;
    }
    return root;
}

int main() {
    Node* root = createTree();

    cout << "\nTree values: \n";
    printTree(root);

    int minVal = INT_MAX;
    printMinLeaf(root, minVal);
    if (minVal == INT_MAX) {
        cout << "\nThere are no leaves in the tree.";
    } else {
        cout << "\nMin value: " << minVal;
    }

    return 0;
}
