#include <iostream>
using namespace std;
class BST
{
    int data;
    BST *left;
    BST *right;

public:
    BST()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    BST(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
    BST *insert(int value)
    {
        if (!this)
        {
            return new BST(value);
        }
        if (value > this->data)
        {
            this->right = this->right->insert(value);
        }
        else
        {
            if (value <= this->data)
            {
                this->left = this->left->insert(value);
            }
        }
        return this;
    }
    void inorder()
    {
        if (this == NULL)
        {
            return;
        }
        this->left->inorder();
        cout << this->data << " ";
        this->right->inorder();
    }
    void search(int key)
    {
        if (this == NULL)
        {
            return;
        }
        else
        {
            if (key == this->data)
            {
                cout << "value found" << endl;
            }
            else
            {
                if (key > this->data)
                {
                    this->right->search(key);
                }
                else
                {
                    this->left->search(key);
                }
            }
        }
    }
    int height(BST *node)
    {
        if (node == NULL)
        {
            return 0;
        }
        else
        {
            int lheight = height(node->left);
            int rheight = height(node->right);
            if (lheight > rheight)
            {
                return (lheight + 1);
            }
            else
            {
                return (rheight + 1);
            }
        }
    }
    BST *minelement()
    {
        if (this == NULL || this->left == NULL)
        {
            return this;
        }
        else
        {
          return  this->left->minelement();
        }
    }
    BST *maxelement()
    {
        if (this == NULL || this->right == NULL)
        {
            return this;
        }
        else
        {
          return  this->right->maxelement();
        }
    }
    int getdata()
    {
        return data;
    }
    BST* deletenode(int key)
    {
        if(this==NULL)
        {
            return this;
        }
        if(key<this->data)
        {
            this->left=this->left->deletenode(key);
        }
        else
        {
            if(key>this->data)
            {
                this->right=this->right->deletenode(key);
            }
            else
            {
                // node has no child.
                if((this->left==NULL)&&(this->right==NULL))
                {
                    delete this;
                    return NULL;
                }
                // node with one child or no child
                else
                {
                    if(this->left==NULL)
                    {
                        BST* temp=this->right;
                        delete this;
                        return temp;
                    }
                    else
                    {
                        if(this->right==NULL)
                        {
                            BST* temp=this->left;
                            delete this;
                            return temp;
                        }
                        // node with two child:get the inorder successor
                        BST* temp=this->right->minelement();

                        // copy the inorder successor content to this node
                        this->data=temp->data;

                        // delete the inorder successor
                        this->right=this->right->deletenode(temp->data);
                    }
                    return this;
                }
            }
        }
    }
};
int main()
{
    BST *b = new BST(50);
    b->insert(30);
    b->insert(20);
    b->insert(40);
    b->insert(70);
    b->insert(60);
    b->insert(80);

    b->inorder();

    b->search(63);
    int x = b->height(b);
    cout<<endl<<"Height = "<<x<<endl;

    BST* minNode= b->minelement();
    cout<<"min value = "<<minNode->getdata()<<endl;
    BST* maxnode=b->maxelement();
    cout<<"max value = "<<maxnode->getdata()<<endl;
    b->deletenode(80);
    b->inorder();

    return 0; 
}