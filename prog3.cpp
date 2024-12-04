#include<iostream>
using namespace std;
int main()
{
   int arr[10];
   for(int i=0;i<=10;i++)
   {
    cin>>arr[i];
    if(arr[i]<=5)
    {
        cout<<"yes ";
    }
    else{
        cout<<"no";
    }
   } 
}