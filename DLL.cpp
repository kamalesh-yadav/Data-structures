#include <iostream>
#include <cstdlib>
using namespace std;
class node
{
public:
    int value;
    node *prev;
    node *next;
    node()
    {
        value = 0;
        prev = NULL;
        next = NULL;
    }
};
class DLL
{
    node *head;

public:
    DLL()
    {
        head = NULL;
    }
    void create(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;

            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }
    void insertatbegin(int k)
    {
        node *temp = new node();
        temp->value = k;
        if (head == NULL)
        {
            temp = head;
        }
        else
        {

            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    void insertatmiddile(int n, int s)
    {
        node *temp = new node();
        temp->value = s;

        if (n == 0 && head != NULL)
        {
            this->insertatbegin(s);
            return;
        }
        if (head == NULL && n > 1)
        {
            cout << "position not found";
            return;
        }
        else
        {
            node *t = head;
            while (n > 1)
            {
                n--;
                if (t->next != NULL)
                {
                    t = t->next;
                }
                else
                {
                    cout << "position does not exist";
                }
            }
            temp->next = t->next;
            temp->prev = t;
            t->next->prev = temp;
            t->next = temp;
        }
    }
    void deletion(int n)
    {
        node *t = head;
        if (head == NULL)
        {
            cout << "position does not exist";
            return;
        }
        if (n == 1)
        {
            head = t->next;
            head->prev = NULL;
            delete t;
            return;
        }
        while (n > 1)
        {
            n--;
            if (t->next == NULL)
            {
                cout << "position does not exist" << endl;
                return;
            }
            t = t->next;
        }
        t->prev->next = t->next;
        if (t->next != NULL)
        {
            t->next->prev = t->prev;
        }

        cout << t->value << "  deleted " << endl;
        delete t;
    }
    void printDLL()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << " <=> ";
            t = t->next;
        }
        cout << endl;
    }
};
int main()
{
    DLL num;
    num.create(5);
    num.create(10);
    num.create(20);
    num.create(30);
    num.insertatbegin(7);
    num.insertatmiddile(2, 6);
    num.insertatmiddile(3, 7);
    num.deletion(3);

    num.deletion(6);
    num.deletion(10);

    num.printDLL();
}