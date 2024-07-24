#include<iostream>

using namespace std;

int main(){

    int a,min,num;
    cin>>a>>min>>num;
    int arr[a];
    for(int i=0;i<a;i++)
    cin>>arr[i];
    int count=0;
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    if(arr[a-num]<min)
    {
    cout<<min-arr[a-num];
    }
    else 
    cout<<0;

    return 0;
}