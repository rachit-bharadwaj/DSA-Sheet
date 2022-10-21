#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void Is_Sorted(Node *&head)
{
    Node *p = head;
    int x = p->data;

    while (p != NULL)
    {
        if (p->data < x)
        {
            cout << "Not Sorted";
            return;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    cout << "Yes, Linked List is Sorted";
}

void display(Node *&head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Node *one = new Node(3);
    Node *two = new Node(6);
    Node *three = new Node(9);

    one->next = two;
    two->next = three;
    three->next = NULL;

    Node *head = one;
    display(head);
    Is_Sorted(head);
}
