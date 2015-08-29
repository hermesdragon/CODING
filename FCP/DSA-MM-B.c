
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void levelorder(struct node *);
void printlevel(struct node* , int );

void printlevel(struct node* tree, int level)
{
  if(tree == NULL)
    return;
  if(level == 1)
    printf("%d ", tree->data);
  else if (level > 1)
  {
    printlevel(tree->left, level-1);
    printlevel(tree->right, level-1);
  }
}

void levelorder(struct node* tree)
{
  int h = height(tree);
  int i;
  for(i=1; i<=h; i++)
    printlevel(tree, i);
}

struct node* newNode (int data)
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {

     int lheight = height(node->left);
     int rheight = height(node->right);


     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
}

struct node* treemake (int pre[], int post[], int* preIndex,int l, int h, int size)
{

    if (*preIndex >= size || l > h)
        return NULL;
    struct node* tree = newNode ( pre[*preIndex] );
    ++*preIndex;
    if (l == h)
        return tree;
    int i;
    for (i = l; i <= h; ++i)
        if (pre[*preIndex] == post[i])
            break;
    if (i <= h)
    {
        tree->left = treemake (pre, post, preIndex, l, i, size);
        tree->right = treemake (pre, post, preIndex, i + 1, h, size);
    }

    return tree;
}

struct node *constructTree (int pre[], int post[], int size)
{
    int preIndex = 0;
    return treemake (pre, post, &preIndex, 0, size - 1, size);
}

void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

int main ()
{
    int n;
    scanf("%d",&n);
    int pre[n],post[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&pre[i]);
    for(i=0;i<n;i++)
        scanf("%d",&post[i]);
    int size = sizeof( pre ) / sizeof( pre[0] );

    struct node *tree = constructTree(pre, post, size);


    levelorder(tree);

    return 0;
}
