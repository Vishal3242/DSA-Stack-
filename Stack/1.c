// stack operation using array

#include<stdio.h>
int stack[50];
int size;
int top=-1;
//prototype of the function
void push(); 
void pop();
void display();
void peek();

main()
{
    int option;
    printf("\n Enter the size of stack\n");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1.Push \n 2.Pop \n 3.Display\n 4.peek \n 5.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                   push();
                   break;
            case 2:
                  pop();
                  break;
            case 3:
                 display();
                 break;
            case 4:
                 peek();
                 break;
            case 5:
                exit(0);     
            default:
                  printf("\n Invalid \n");                            
        }
    }
}
void push()
{
   int item;
   if(top==size-1)
   {
    printf("\n Stack overflow");
   }
   else{
    printf("\nEnter the valiue");
    scanf("%d",&item);
    top++;
    stack[top]=item;
   }   
}

void pop()
{
    int key;
    if(top==-1)
    {
        printf("\n Stack Underflow");
    }
    else
    {
        printf("\n The delelted item is ");
        printf("%d",stack[top]);
        top--;
    }
}

void display()
{
    int index;
    if(top==-1)
    {
        printf("\n Stack underflow");
    }
    else
    {
        printf("\n Value of the stack are : ");
        index=top;
        while(index>=0)
        {
            printf("%d ",stack[index]);
            index--;
        }
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\n Stack is empty");
    }
    else
    {
       printf("The peek value of the stack is : ");
       printf("%d",stack[top]);
    }
}