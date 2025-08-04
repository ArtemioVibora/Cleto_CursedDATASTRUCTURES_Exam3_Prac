#include <iostream>

using namespace std;

struct Node{
    int data;
    char symbol;
    Node* next;
    Node* prev;
};

int main()
{

    cout << "Doubly Linked List Example" << endl;
    cout << "---------------------------" << endl;
    Node* head = new Node;
    head->data = 1;
    head->symbol = 'A';
    head->next = nullptr;
    head->prev = nullptr;

    Node* second = new Node;
    second->data = 2;
    second->symbol = 'B';
    second->next = nullptr;
    second->prev = head;

    head->next = second;

    cout << "First Node: " << head->data << " " << head->symbol << endl;
    cout << "Second Node: " << second->data << " " << second->symbol << endl;

    // Clean up memory
    delete second;
    delete head;

    cout << "Cursed version of the code" << endl;
    cout << "---------------------------" << endl;

    Node* cursedHead = new Node;
    cursedHead->data = 3;
    cursedHead->symbol = 'A';
    cursedHead->next = nullptr;
    cursedHead->prev = nullptr;

    Node* cursedSecond = new Node;
    cursedSecond->data = 4;
    cursedSecond->symbol = 'B';
    cursedSecond->next = nullptr;
    cursedSecond->prev = nullptr;

    Node* cursedThird = new Node;
    cursedThird->data = 5;
    cursedThird->symbol = 'C';
    cursedThird->next = nullptr;
    cursedThird->prev = nullptr;

    Node* cursedFourth = new Node;
    cursedFourth->data = 6;
    cursedFourth->symbol = 'D';
    cursedFourth->next = nullptr;
    cursedFourth->prev = nullptr;

    cursedHead->next = cursedSecond;
    cursedHead->prev = cursedFourth;

    cursedSecond->prev = cursedHead;
    cursedSecond->next = cursedThird;

    cursedThird->prev = cursedSecond;
    cursedThird->next = cursedFourth;

    cursedFourth->next = cursedHead;
    cursedFourth->prev = cursedThird;

    cout << "Cursed First Node: " << cursedHead->data << " " << cursedHead->symbol << endl;
    cout << "Cursed First Node Previous: " << cursedHead->prev->data << " " << cursedHead->prev->symbol << endl;
    cout << "Cursed First Node Next: " << cursedHead->next->data << " " << cursedHead->next->symbol << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Cursed Second Node: " << cursedSecond->data << " " << cursedSecond->symbol << endl;
    cout << "Cursed Second Node Previous: " << cursedSecond->prev->data << " " << cursedSecond->prev->symbol << endl;
    cout << "Cursed Second Node Next: " << cursedSecond->next->data << " " << cursedSecond->next->symbol << endl;
    cout << "----------------------------------------------" << endl;

    cout << "Cursed Third Node: " << cursedThird->data << " " << cursedThird->symbol << endl;
    cout << "Cursed Third Node Previous: " << cursedThird->prev->data << " " << cursedThird->prev->symbol << endl;
    cout << "Cursed Third Node Next: " << cursedThird->next->data << " " << cursedThird->next->symbol << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Cursed Fourth Node: " << cursedFourth->data << " " << cursedFourth->symbol << endl;
    cout << "Cursed Fourth Node Previous: " << cursedFourth->prev->data << " " << cursedFourth->prev->symbol << endl;
    cout << "Cursed Fourth Node Next: " << cursedFourth->next->data << " " << cursedFourth->next->symbol << endl;

    // Clean up cursed nodes
    delete cursedFourth;
    delete cursedThird;
    delete cursedSecond;
    delete cursedHead;

    cout << "Memory cleaned up." << endl;

    return 0;
}