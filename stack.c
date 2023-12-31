#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
 int top=-1,arr[100];
void main()
{
    while(1)
    {
        int op;
        printf("\nStack Operations");
        
        printf("\n  1.Push");
        printf("\n  2.Pop");
        printf("\n  3.Peek");
        printf("\n  4.Display");
        printf("\nSelect your operation :  ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                
            default:
                printf("\nSelect from 1,2,3,4 : \n\n");
        }
    }
}
void push()
{
    int n;
    printf("\nEnter element to be pushed : ");
    scanf("%d",&n);
    top=top+1;
    arr[top]=n;
    printf("%d added to stack.\n\n",n);
}
void pop()
{
    if (top==-1)
    {
        printf("\nStack underflow.\n");
    }
    else
    {
        printf("\n%d popped.\n",arr[top]);
        top=top-1;
    }
}
void peek()
{
    if (top==-1)
    {
        printf("\nNo element in stack\n");
    }
    else
    {
        printf("\nTop element is %d.\n",arr[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("\nElements in stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n",arr[i]);
    }
}
