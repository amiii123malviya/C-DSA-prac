#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(j%2==0 )
            {
                continue;
            }
            else if(j%3==0)
            {
                cout<<"a"<<"\t";
            }
            else{
                cout<<"*"<<"\t";

            }
        }
        cout<<"\n";
    }
}