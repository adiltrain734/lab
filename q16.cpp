#include<iostream>
using namespace std;

class BIN_TREE {
    int data;
    BIN_TREE * left, *right;
    public: 
        static BIN_TREE * insert(BIN_TREE *root, int i) {
            if(!root) {
                root = new BIN_TREE;
                root->left = root->right = NULL;
                root->data = i;
                return root;
            }
            if(i>root->data) {
                root->right = insert(root->right, i);
            } else {
                root->left = insert(root->left, i);
            }
            return root;
        }
        static void inorder(BIN_TREE *root) {
                if(!root) return ;
                inorder(root->left);
                cout << root->data << " ";
                inorder(root->right);
        }
        static void preorder(BIN_TREE *root) {
            if(!root) return;
            cout << root->data;
            preorder(root->left);
            preorder(root->right);
        }
        static void postorder(BIN_TREE *root) {
            
        }
};

int main() {
    int ch;
    do {
        cout << "1. Insert\n 2. inorder\n 3. Preorder\n 4. Postorder\n 5. Exit\n";
        cin >> ch;
        switch(ch) {
            case 1:

        }
    } while(ch!= 5);
    return 0;
}