#include<stdio.h>

int main()
{
    int no_part, test, green, purple, a[10][2], sum1=0, sum2=0;
    printf("Enter Number Of Test: ");
    scanf("%d", &test);

    for(int i=0;i<test;i++)
    {

        printf("\nEnter Cost Of Green Balloon : ");
        scanf("%d",&green);

        printf("\nEnter Cost Of Purple Balloon : ");
        scanf("%d",&purple);

        printf("\nEnter No. Of Participant: ");
        scanf("%d",&no_part);

        for(int j=0;j<no_part;j++)
        {
            for(int k=0;k<2;k++)
            {
                scanf("%d",&a[j][k]);
            }
        }

        for(int j=0;j<no_part;j++)
            {
                if(a[j][0]==1)
                {
                    sum1=sum1+green;
                }
                if (a[j][1]==1)
                {
                    sum2=sum2+purple;
                }
            }
         for(int j=0;j<no_part;j++)
        {
                if(a[j][0]==1)
                {
                    sum2=sum2+green;
                }
                if (a[j][1]==1)
                {
                    sum1=sum1+purple;
                }
        }

        if(sum1>sum2)
        {

            printf("\nTotal= %d",sum2);
        }
        else
        {
            printf("Total= %d",sum1);
        }
    }
  }
