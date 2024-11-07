#include<iostream>
using namespace std;
int main()
{
    int arr[5],temp;
    cout<<"Enter values:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    for(int q=0;q<5;q++)
    {
        for(int p=0;p<5-q-1;p++){
        if(arr[p]>arr[p+1])
        {
            temp=arr[p];
           arr[p]=arr[p+1];
           arr[p+1]=temp;

        }
        }
    }
    cout<<"after sorting";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
