#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
    int height()
    {
        if (this == NULL)
        {
            return 0;
        }
        else
        {
            int lheight = this->left->height();
            int rheight = this->right->height();
            if (lheight > rheight)
            {
                return lheight + 1;
            }
            else
            {
                return rheight + 1;
            }
        }
    }
    void print()
    {
        int h = this->height();
        for (int i = 0; i < h; i++)
        {
            printlevel( i);
        }
    }
    void printlevel( int level)
    {
        if (this == NULL)
        {
            return;
        }
        else
        {
            if (level > 0)
            {
               this->left->printlevel( level - 1);
               this->right->printlevel( level - 1);
            }
        }
    }
};
int main()
{
    
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << "level order traversal is :" << endl;
    root->print();
    
}