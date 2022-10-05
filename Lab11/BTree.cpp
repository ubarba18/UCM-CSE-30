#include <iostream>
#include "BTree.h"

using namespace std;

BTree::BTree() { //Constructor
    root = NULL; //initialize root, Tree is empty
}

BTree::~BTree(){ //Deconstructor
    destroy_tree(); //Remove all leafs and root, deletes tree
}

void BTree::insert(int key) {
    if (root != NULL) { //If root/leaf is not null call to check if its > or < root/leaf
        insert(key, root);
    }
    else { //If root is null insert leaf/root
        root = new Node; //dynamically allocate memory
        root->key_value = key;
        root->left = NULL;
        root->right = NULL;
    }
}

Node *BTree::search(int key) {
    return search(key, root);
}

void BTree::destroy_tree(){
    destroy_tree(root);
}

Node* BTree::BTree_root(){
    return root;
}

void BTree::destroy_tree(Node *leaf) { //delete leafs that are not null
    if (leaf != NULL) {  
        destroy_tree(leaf->left); //delete left and right child nodes
        destroy_tree(leaf->right); //check leaf->right's right if its null
        delete leaf; //de-allocate memory
    }
}

void BTree::insert(int key, Node* leaf) {
    if (key < leaf->key_value) { //Key less than parent goes left
        if (leaf->left == NULL) { //If no leaf left create one
            leaf->left = new Node;
            leaf->left->key_value = key;
            leaf->left->left = NULL; //Child node left
            leaf->left->right = NULL; //Child node right
        }
        else {
            insert(key, leaf->left); //Go down the left until reach null
        }
    }

    else if (key > leaf->key_value) { //Key greater than parent goes right
        if (leaf->right == NULL) { //If no leaf right, create one
            leaf->right = new Node;
            leaf->right->key_value = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
        else {
            insert(key, leaf->right); //Go down the right until reach null 
        }
    }
}

Node *BTree::search(int key, Node *leaf){ //Search with key, return key and leaf
    if (leaf != NULL) {
        if (key == leaf->key_value){ //Found key
            return leaf;
        }
    if (key > leaf->key_value) { //If key > key_value go right
        return search (key, leaf->right);
    }
    else { //Go left
        return search(key,leaf->left);
        }
    }

    else {
        return NULL; //Reached end of tree and didn't find key
    }
}
