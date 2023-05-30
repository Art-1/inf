#include <iostream>
#include <queue>
#include <climits>
using namespace std;

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

int findMinLeaf(Node* root) {
    if (root == NULL) {
        return INT_MAX;
    }
    if (root->left == NULL && root->right == NULL) {
        return root->val;
    }
    int leftMin = findMinLeaf(root->left);
    int rightMin = findMinLeaf(root->right);
    return min(leftMin, rightMin);
}

int findPathLength(Node* root, int e) {
    if (root == NULL) {
        return 0;
    }
    if (root->val == e) {
        return -1;
    }
    int leftLength = findPathLength(root->left, e);
    int rightLength = findPathLength(root->right, e);
    if (leftLength == 0 && rightLength == 0) {
        return 0;
    }
    return 1 + max(leftLength, rightLength);
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
    }
    return root;
}

int main() {
    Node* root = createTree();

    cout << "\nTree values: \n";
    printTree(root);

    int minVal = findMinLeaf(root);
    if (minVal == INT_MAX) {
        cout << "\nThere are no leaves in the tree.";
    } else {
        cout << "\nMinimum leaf value: " << minVal;
    }

    int e;
    cout << "\nEnter the value of e: ";
    cin >> e;
    int pathLength = findPathLength(root, e);
    if (pathLength == 0) {
        cout << "\nNode with value " << e << " not found in the tree.";
    } else {
        cout << "\nPath length from root to " << e << ": " << pathLength;
    }

    return 0;
}
