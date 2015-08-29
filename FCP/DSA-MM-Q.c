#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[100];
    struct node *left, *right;
};
int flag,count;

struct node *newNode(char item[])
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    strcpy(temp->name,item);
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%s ", root->name);
        inorder(root->right);
    }
}

void preorder(struct node *temp) {
   if (temp != NULL) {
      printf("%s ", temp->name);
      preorder(temp->left);
      preorder(temp->right);
   }
}

void postorder(struct node *temp) {
   if (temp != NULL) {
      postorder(temp->left);
      postorder(temp->right);
      printf("%s ", temp->name);
   }
}


struct node* insert(struct node* node, char name[])
{
    if (node == NULL) return newNode(name);

    if (strcmp(name,node->name)<0)
        node->left  = insert(node->left, name);
    else
        node->right = insert(node->right, name);

    return node;
}

struct node * find(char name[],struct node *t)
{
    if(t==NULL)
        return NULL;
    if(strcmp(name,t->name)<0)
        return find(name,t->left);
    else if(strcmp(name,t->name)>0)
        return find(name,t->right);
    else
        return t;
}

struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;

    return current;
}

struct node* deleteNode(struct node* root, char name[])
{
    if (root == NULL) return root;

    if (strcmp(name,root->name)<0)
        root->left = deleteNode(root->left,name);
    else if(strcmp(name,root->name)>0)
        root->right = deleteNode(root->right,name);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        strcpy(root->name,temp->name);
        root->right = deleteNode(root->right, temp->name);
    }
    return root;
}

void inorderposition(struct node *root,char name[])
{
    if (root != NULL)
    {
        inorderposition(root->left,name);
        if(strcmp(root->name,name)==0 || flag==1)
            flag=1;
        else
            count++;
        inorderposition(root->right,name);
    }
}
int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);

       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}
 int main()
{
    struct node *root = NULL,*temp=NULL;
    int t,e;
    char com[100],n[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",com);
        if(strcmp(com,"InitTree")==0)
        {
            scanf("%s",n);
            root=insert(root,n);
        }
        else if(strcmp(com,"Insert")==0)
        {
            scanf("%s",n);
            root=insert(root,n);
            flag=0;
            count=0;
            inorderposition(root,n);
            printf("%d\n",count+1);
        }
        else if(strcmp(com,"Height")==0)
        {
            printf("%d\n",height(root));
        }
        else if(strcmp(com,"Find")==0)
        {
            scanf("%s",n);
            temp=root;
            temp=find(n,temp);
            if(temp==NULL)
                printf("Not Found\n");
            else
            {
                flag=count=0;
                inorderposition(root,n);
                printf("%d\n",count+1);
            }
        }
        else if(strcmp(com,"Delete")==0)
        {
            scanf("%s",n);
            temp=root;
            temp=find(n,temp);
            if(temp==NULL)
                printf("Not Found\n");
            else
            {
                flag=count=0;
                inorderposition(root,n);
                printf("%d\n",count+1);
                root=deleteNode(root,n);
            }
        }
        else if(strcmp(com,"PrintTree")==0)
        {
            scanf("%d",&e);
            if(e==1)
                {
                    postorder(root);
                    printf("\n");
                }
            else if(e==0)
                {
                    inorder(root);
                    printf("\n");
                }
            else
                {
                    preorder(root);
                    printf("\n");
                }
        }
    }
    return 0;
}
