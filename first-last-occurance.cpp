//find first and last occurance of number in array
#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i == n)
    {
        return -1;
    }
    int restarray = lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    int i=0;
    int m;
    cin>>m;
    cout<<firstocc(arr,n,i,m)<<endl;
    cout<<lastocc(arr,n,i,m)<<endl;
    
    return 0;
}
