#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int val;
    struct node *left;
    struct node *right;
};
struct node *root = new struct node;

void bfs(int target)
{
    int flag = 0;
    queue<int> q;
    q.push(root->val);
    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        if (ele == target)
        {
            cout << "Element found!";
            flag = 1;
            break;
            // int flag=1;
        }

        else
        {
            q.push(root->left->val);
            q.push(root->right->val);
        }
    }

    if (flag == 0)
    {
        cout << "Element not found!";
    }
}

int main()
{
    root->val = 1;
    struct node *rn = new struct node;
    struct node *ln = new struct node;
    root->left = ln;
    root->right = rn;
    rn->left = rn->right = ln->left = ln->right = NULL;
    rn->val = 2;
    ln->val = 3;
    bfs(4);
    // return 0;
}