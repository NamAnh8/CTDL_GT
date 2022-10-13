#include <bits/stdc++.h>
#include <queue>

using namespace std;
typedef struct node
{
    Item data;
    struct nde *left;
    struct nde *right;
} * Tree;
node *Create_note(int val)
{
    node *tmp = new node;
    tmp->data = val;
    tmp->left = NULL;
    tmp->right = NULL;
}
node *Insert_random(node *roof)
{
    roof = Create_note(30);
    roof->left = Create_note(20);
    roof->right = Create_note(40);
    (roof->left)->left = Create_note(15);
    (roof->left)->right = Create_note(10);
    (roof->right)->left = Create_note(35);
    (roof->right)->right = Create_note(45);
    ((roof->left)->right)->left = Create_note(5);
    return roof;
}
node *Delete_note(node *roof)
{
    if (roof != NULL)
    {
        Delete_note(roof->left);
        Delete_note(roof->right);
        cout << roof->data << " ";
        delete (roof);
    }
    roof = NULL;
    return roof;
}
// Node-Left-Right
void preOrder(node *roof)
{
    if (roof != NULL)
    {
        cout << roof->data << " ";
        preOrder(roof->left);
        preOrder(roof->right);
    }
}
// Left-Node-Right
void inOrder(node *roof)
{
    if (roof != NULL)
    {
        inOrder(roof->left);
        cout << roof->data << " ";
        inOrder(roof->right);
    }
}
void postOrder(node *roof)
{
    if (roof != NULL)
    {
        postOrder(roof->left);
        postOrder(roof->right);
        cout << roof->data << " ";
    }
}
void levelOrder(Node *node)
{
}
int main()
{
}