
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(NULL), right(NULL) {}
};

int calcDepth(TreeNode* node) {
    if (node == NULL) return 0;

    int leftDepth = calcDepth(node->left);
    int rightDepth = calcDepth(node->right);

    return max(leftDepth, rightDepth) + 1;
}

void insert(TreeNode*& root, int val) {
    if (root == NULL) {
        root = new TreeNode(val);
        return;
    }

    if (val < root->value) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}

int main() {
    int n;
    TreeNode* root = NULL;

    cout << "Enter the number of elements in the tree: ";
    cin >> n;

    int* values = new int[n];
    cout << "Enter the elements of the tree: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    clock_t start, end;
    double cpu_time_used;

    // Measure insertion time
    start = clock();
    for (int i = 0; i < n; i++) {
        insert(root, values[i]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "Time taken to insert elements: " << cpu_time_used << " seconds." << endl;

    // Measure depth calculation time
    start = clock();
    int depth = calcDepth(root);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "Time taken to calculate depth: " << cpu_time_used << " seconds." << endl;

    cout << "Depth of the tree is: " << depth << endl;

    delete[] values; // Free allocated memory
    return 0;
}


















































