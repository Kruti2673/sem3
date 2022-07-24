#include<iostream>
using namespace std;


int main()
{
    int part,ca,price1,price2,win1=0,win2=0,n=0;
    cout<<"Enter number of cases:";
    cin>>ca;
    cout<<"Enter price of green ballons:";
    cin>>price1;
    cout<<"Enter price of purple ballons:";
    cin>>price2;
    cout<<"Enter number of participate:";
    cin>>part;

    for(int i=0;i<ca;i++)
    {
       for(int j=0;j<part;j++)
        {
            if(n%4==0)
            {
                win1=1;
            }
            else
            {
                win2=0;
            }
            cout<<win1<<","<<win2<<endl;
            n++;
        }
    }
    return 0;

}

