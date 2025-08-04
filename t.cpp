#include <iostream>

//VERY CURSED TREE
//This code creates a tree structure with nodes containing data and symbols.
//It also demonstrates how to access the data and symbols of each node.
//The tree is not a binary search tree and has some circular references.

using namespace std;

struct Node
{
    int data;
    char symbol;
    Node* left;
    Node* right;
};

int main()
{
    //ROOT
    Node *A = new Node;
    Node *B, *C, *D, *E;
    B = new Node;
    C = new Node;
    D = new Node;
    E = new Node;
    A->data = 10;
    A->symbol = 'A';
    A->left = B;
    A->right = C;

    B->data = 20;
    B->symbol = 'B';
    B->left = D;
    B->right = nullptr;

    C->data = 30;
    C->symbol = 'C';
    C->left = nullptr;
    C->right = E;
    
    D->data = 40;
    D->symbol = 'D';
    D->left = nullptr;
    D->right = A;

    E->data = 50;
    E->symbol = 'E';
    E->left = A;
    E->right = nullptr;

    cout << "Node data: " << A->data << ", Node symbol: " << A->symbol << endl;
    cout << "Left child data: " << A->left->data << ", Left child symbol: " << A->left->symbol << endl;
    cout << "Right child data: " << A->right->data << ", Right child symbol: " << A->right->symbol << endl;
    
    cout << "Node B data: " << B->data << ", Node B symbol: " << B->symbol << endl;
    cout << "Left child of B data: " << B->left->data << ", Left child of B symbol: " << B->left->symbol << endl;
    cout << "Node C data: " << C->data << ", Node C symbol: " << C->symbol << endl;
    cout << "Right child of C data: " << C->right->data << ", Right child of C symbol: " << C->right->symbol << endl;
    cout << "Node D data: " << D->data << ", Node D symbol: " << D->symbol << endl;
    cout << "Right child of D data: " << D->right->data << ", Right child of D symbol: " << D->right->symbol << endl;
    cout << "Node E data: " << E->data << ", Node E symbol: " << E->symbol << endl;
    cout << "Left child of E data: " << E->left->data << ", Left child of E symbol: " << E->left->symbol << endl;

    // LE CLEAN MEMORY HEHEHEHE
    delete A;
    delete B;
    delete C;
    delete D;
    delete E;

    return 0;
}