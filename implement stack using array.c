#include<stdio.h>
#include<conio.h>
#define MAX 5
int stack[MAX],top=-1;
int isFull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

void push(int x)
{
	if (isFull())
	{
		 printf("\n STACK Overflow");
	}
	else
	{
		top++;
		stack[top]=x;
		printf("\n Push successfully.");
	}
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void pop()
{
    int x;
    if(isEmpty())
    {
        printf("\n STACk is underflow..");
    }
    else
	{
		printf("%d is deleted.\n",stack[top]);
		top--;
	}
}
void display()
{
    int i;
    if(isEmpty()==1)
        printf("stack is Empty");
    else
    {
        printf("stack is\n");
    for(i=0;i<=top;i++)
        printf("%d\n",stack[i]);
    }
}
void peep()
{
    if(isEmpty()==1)
       printf("stack is Empty");
     else
        printf("topmost element is %d",stack[top]);
}
void change()
{
    int index,value;
    printf("Enter index:");
    scanf("%d",&index);
    printf("Enter newvalue");
    scanf("%d",&value);
    if(stack[top-index+1]<0)
    {
        printf("invalid index");
    }
    if(stack[top-index+1]=value)
    {
        printf("\n value changed successfully");
    }
}

int main()
{
	int ch,newvalue;
	while(1)
	{
		printf("\nEnter stack operations...\n");
		printf("1.PUSH\n 2.POP\n 3.PEEP\n 4.CHANGE\n 5.DISPLAY\n 6.isEMPTY\n 7.isFULL\n 8.EXIT\n");

		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter a value: ");
				scanf("%d",&newvalue);
				push(newvalue);
				break;

			case 2:
				pop();
				break;
            case 3:
                peep();
                break;
            case 4:
                change();
                break;
            case 5:
                display();
                break;
            case 6:
            {
               if(isEmpty()==1)
                    printf("yes,stack is empty");
               else
                    printf("no,stack is not empty");
            }
			case 7:
				if(isFull()==1)
				{
					printf("\n YES,STACK is full");
				}
				else
				{
					printf("\n NO,STACK is not full");
				}
				break;

			case 8:
				exit(0);

			default:
				printf("\n Invalid choice,Try again...");
		}
	}
}
