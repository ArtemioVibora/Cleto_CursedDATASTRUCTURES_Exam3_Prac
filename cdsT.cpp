#include <iostream>

//Le cursed tree of nodes
//This code creates a tree structure with nodes containing data and symbols.
//It then prints out the details of each node and its children.
//The tree is constructed in a specific way, with some nodes having circular references.

using namespace std;

struct Node {
    int data;
    char symbol;
    Node* left;
    Node* right;
};

int main() {
    Node* A = new Node();
    Node* B = new Node();
    Node* C = new Node();
    Node* D = new Node();
    Node* E = new Node();
    Node* N = new Node();
    Node* X = new Node();
    Node* Y = new Node();

    Node* I = new Node();
    Node* J = new Node();
    Node* K = new Node();

    A->data = 1;
    A->symbol = 'A';
    A->left = B;
    A->right = C;


    B->data = 2;
    B->symbol = 'B';
    B->left = D;
    B->right = N;


    C->data = 3;
    C->symbol = 'C';
    C->left = N;
    C->right = E;


    D->data = 4;
    D->symbol = 'D';
    D->left = nullptr;
    D->right = A;

    E->data = 5;
    E->symbol = 'E';
    E->left = A;
    E->right = nullptr;

    N->data = 6;
    N->symbol = 'N';
    N->left = X;
    N->right = Y;

    X->data = 7;
    X->symbol = 'X';
    X->left = B;
    X->right = I;

    Y->data = 8;
    Y->symbol = 'Y';
    Y->left = I;
    Y->right = C;

    I->data = 9;
    I->symbol = 'I';
    I->left = J;
    I->right = K;


    J->data = 10;
    J->symbol = 'J';
    J->left = X;
    J->right = nullptr;

    K->data = 11;
    K->symbol = 'K';
    K->left = nullptr;
    K->right = Y;

    cout << "Node A: " << A->symbol << " with data " << A->data << endl;
    cout << "Left child of A: " << A->left->symbol << " with data " << A->left->data << endl;
    cout << "Right child of A: " << A->right->symbol << " with data " << A->right->data << endl;

    cout << "Node B: " << B->symbol << " with data " << B->data << endl;
    cout << "Left child of B: " << B->left->symbol << " with data " << B->left->data << endl;
    cout << "Right child of B: " << B->right->symbol << " with data " << B->right->data << endl;

    cout << "Node C: " << C->symbol << " with data " << C->data << endl;
    cout << "Left child of C: " << C->left->symbol << " with data " << C->left->data << endl;
    cout << "Right child of C: " << C->right->symbol << " with data " << C->right->data << endl;

    cout << "Node D: " << D->symbol << " with data " << D->data << endl;
    cout << "Left child of D: " << (D->left ? D->left->symbol : ' ') << endl;
    cout << "Right child of D: " << (D->right ? D->right->symbol : ' ') << endl;

    cout << "Node E: " << E->symbol << " with data " << E->data << endl;
    cout << "Left child of E: " << (E->left ? E->left->symbol : ' ') << endl;
    cout << "Right child of E: " << (E->right ? E->right->symbol : ' ') << endl;

    cout << "Node N: " << N->symbol << " with data " << N->data << endl;
    cout << "Left child of N: " << N->left->symbol << " with data " << N->left->data << endl;
    cout << "Right child of N: " << N->right->symbol << " with data " << N->right->data << endl;

    cout << "Node X: " << X->symbol << " with data " << X->data << endl;
    cout << "Left child of X: " << X->left->symbol << " with data " << X->left->data << endl;
    cout << "Right child of X: " << X->right->symbol << " with data " << X->right->data << endl;

    cout << "Node Y: " << Y->symbol << " with data " << Y->data << endl;
    cout << "Left child of Y: " << Y->left->symbol << " with data " << Y->left->data << endl;
    cout << "Right child of Y: " << Y->right->symbol << " with data " << Y->right->data << endl;

    cout << "Node I: " << I->symbol << " with data " << I->data << endl;
    cout << "Left child of I: " << I->left->symbol << " with data " << I->left->data << endl;
    cout << "Right child of I: " << I->right->symbol << " with data " << I->right->data << endl;

    cout << "Node J: " << J->symbol << " with data " << J->data << endl;
    cout << "Left child of J: " << (J->left ? J->left->symbol : ' ') << endl;
    cout << "Right child of J: " << (J->right ? J->right->symbol : ' ') << endl;

    cout << "Node K: " << K->symbol << " with data " << K->data << endl;
    cout << "Left child of K: " << (K->left ? K->left->symbol : ' ') << endl;
    cout << "Right child of K: " << (K->right ? K->right->symbol : ' ') << endl;

    // Clean up memory
    delete A; delete B; delete C; delete D; delete E; delete N; delete X; delete Y;
    delete I; delete J; delete K;

    return 0;
}
