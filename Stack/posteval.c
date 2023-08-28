// postfix expression = 6 5 2 3 + 8 * + 3 + * * /
// postfix evaluation 

#include<stdio.h>
int stack[50];
int top=-1;
void sum();
void diff();
void mult();
void div();

main()
{
    char str[30];
    int i=0;
    printf("\n Enter the post expression");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            switch(str[i])
            {
                case '+':
                         sum();
                         break;
                case '-':
                         diff();
                         break;
                case '*':
                        mult();
                        break;
                case '/':
                         div();
                         break;
                default:
                        top++;
                        stack[top]=str[i]-48;
            }
        }
    }
    printf("\n result is %d ",stack[top]);
}
void sum()
{
    int op1,op2,res;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2+op1;
    top++;
    stack[top]=res;   
}
void diff()
{
    int op1,op2,res;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2-op1;
    top++;
    stack[top]=res;  
}
void mult()
{
    int op1,op2,res;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2*op1;
    top++;
    stack[top]=res;   
}
void div()
{
    int op1,op2,res;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op2/op1;
    top++;
    stack[top]=res;   
}

