#include <iostream>
#include <algorithm>

using namespace std;


class BST{
    private:
        struct Node {
            int data;
            Node* left;
            Node* right;
            Node(int val) : data(val), left(nullptr), right(nullptr) {}
        };

        Node* root;

        Node* insert(Node* node, int e){
            if (node == nullptr) return new Node(e);
            if(e < node->data)
                node->left = insert(node->left, e);
            else if (e > node -> data)
                node-> right = insert(node->right, e);
            return node;
        }

        int getSize(Node* node){
            if(!node) return 0;
            return 1 + getSize(node->left) + getSize(node->right);
        }

        int getMin(Node* node){
            if (!node) throw runtime_error("Tree is empty");
            while (node -> left) node = node -> left;
            return node -> data;
        }

        int getMinRec(Node* node){
            if (!node)
                throw runtime_error("Tree is empty");

            if(node -> left == nullptr)
                return node -> data;
            return getMin(node->left);
        }

        void preOrder(Node* node){
            if(!node) return;
            cout << node -> data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }

        void inOrder(Node* node){
            if (!node) return;
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }

        void postOrder(Node* node){
            if (!node) return;
            postOrder(node->left);
            postOrder(node->right);
            cout << node -> data << " ";
        }

        int getHeight(Node* node ){
            if (!node) return 0;
            return 1 + max(getHeight(node -> left), getHeight(node -> right));
        }

        bool contains(Node* node, int e){
            if (!node) return false;
            if (e == node -> data) return true;
            if (e < node -> data) return contains(node -> left, e);
            return contains(node->right, e);
        }

    public:
        BST() : root(nullptr){}

        void insert(int e){
            root = insert(root, e);
        }

        int getSize() {
            return getSize(root);
        }

        int getMin(){
            return getMin(root);
        }

        void preOrderDisplay(){
            preOrder(root);
            cout << endl;
        }

        void inOrderDisplay(){
            inOrder(root);
            cout << endl;
        }

        void postOrderDisplay(){
            postOrder(root);
            cout << endl;
        }

        int getHeight(){
            return getHeight(root);
        }

        bool contains(int e){
            return contains(root, e);
        }
};


int main(){

    BST tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    cout << "Size : " << tree.getSize() << endl;
    cout << "Min: " << tree.getMin() << endl;
    cout << "Height: " << tree.getHeight() << endl;

    cout << "Pre-order: "; tree.preOrderDisplay();
    cout << "In-order: "; tree.inOrderDisplay();
    cout << "Post-order: "; tree.postOrderDisplay();

    cout << "Contains 4? " << (tree.contains(4) ? "Yes" : "No") << endl;
    cout << "Contains 9? " << (tree.contains(9) ? "Yes" : "No") << endl;
}
