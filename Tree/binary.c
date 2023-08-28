//Insertion in BST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lchild;
    struct node *rchild;
};

struct node *root=NULL;

void insert()
{
    struct node *temp,*ptr,*par;
    int item;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n Memory is not allocated");
    }
    else
    {
        printf("\n Enter the item ");
        scanf("%d",&item);
        temp->info=item;
        temp->lchild=NULL;
        temp->rchild=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            ptr=root;
            while(ptr!=NULL)
            {
                par=ptr;
                if(item>ptr->info)
                {
                    ptr=ptr->rchild;
                }
                else if(item<ptr->info)
                {
                    ptr=ptr->lchild;
                }
                else
                {
                    printf("\n Duplicates found !!!");
                    break;
                }
            }
            if(ptr==NULL)
            {
                if(item<par->info)
                {
                    par->lchild=temp;
                }
                else
                {
                    par->rchild=temp;
                }
            }
        }
    }
}