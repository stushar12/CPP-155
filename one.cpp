#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,3,1,3};
    int size=5;

    int majority=arr[0];
    int count=1;

    for(int i=1;i<size;i++)
    {
        if(arr[i]==majority)
        count++;
        else
        count--;

    if(count==0)
    {
        majority=arr[i];
        count=1;
    }
    }


     count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==majority)
        count++;
    }

    if(count>(size/2))
    cout<<majority;
    else
    cout<<"No element exists";
}
