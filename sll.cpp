#include <iostream>
#include <cstdlib>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node()
    {
        value = 0;
        next = NULL;
    }
};
class linkedlist
{
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    void insertatend(int num)
    {
        node *temp = new node();
        temp->value = num;
        // for first node
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            // move to the last node
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }
    void insertatbegin(int v)
    {
        node *s = new node();
        s->value = v;

        if (head == NULL)
        {
            head = s;
        }
        else
        {
            s->next = head;
            head = s;
        }
    }
    void insertinbetween(int k)
    {
        int n;
        cout << "enter the number of blocks:" << endl;
        cin >> n;
        node *r = new node();
        r->value = k;
        if (n == 1)
        {
            r->next = head;
            head = r;
        }
        else
        {
            node *i = head;
            while (n > 1)
            {
                n--;
                if (i->next != NULL)
                {
                    i = i->next;
                }
                else
                {
                    cout << "position does not exist" << endl;
                    return;
                }
            }
            r->next = i->next;
            i->next = r;
        }
    }
    void printll()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << " -> ";
            t = t->next;
        }
        cout << endl;
    }
    void deleteamiddile(int n)
    {
        node *temp = head;
        if (n == 1)
        {
            head = head->next;
            cout << temp->value << " deleted " << endl;

            delete temp;
        }
        else
        {
            node *temp = head;
            while (n > 2)
            {
                n--;
                if (temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                else
                {
                    cout << "position does not exist" << endl;
                    return;
                }
            }
            node *t = temp->next;
            temp->next = t->next;

            delete t;
            cout << t->value << "  deleted " << endl;
        }
    }
    void search(int v)
    {
        node *temp = head;

        if (head == NULL)
        {
            cout << "list is empty";
        }
        else
        {
            int count = 0;

            while (temp != NULL)
            {
                count++;

                if (temp->value == v)
                {
                    cout << "value found at  " << count << endl;
                    return;
                }
                temp = temp->next;
            }
            cout << "element not found " << endl;
        }
    }
};
int main()
{
    linkedlist num1;
    num1.insertatend(10);
    num1.insertatend(20);
    num1.insertatend(30);
    num1.insertatend(40);
    num1.insertatend(50);
    num1.insertatend(60);
    num1.insertatbegin(5);
    num1.insertatbegin(15);
    num1.insertinbetween(6);
    num1.deleteamiddile(1);
    num1.deleteamiddile(1);

    num1.deleteamiddile(3);
    num1.deleteamiddile(5);
    num1.deleteamiddile(5);
    num1.search(20);
    num1.search(60);
    num1.search(15);
    num1.printll();
    return 0;
}