#include<iostream>
using namespace std;
class List {
    List * next;
    int data;
    public:
        List(int i) {
            data = i;
            next = NULL;
        }
        friend List * insert(List* root, int i);
        friend void dis(List *root);
};

List * insert(List *root, int i) {
    if(!root) {
        root = new List(i);
        return root;
    }

    List *temp = root;
    while(temp->next!= NULL) 
        temp = temp->next;
    List * node = new List(i);
    temp->next = node;
    return root;
}

void dis(List * root) {
    if(!root) return ;
    while(root) {
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}


int main() {
    List *root = NULL;
    dis(root);
    root = insert(root, 2);
    root = insert(root, 3);
    dis(root);
    return 0;
}