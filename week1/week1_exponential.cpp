#include<iostream>
using namespace std;
void binarySearch(int array[],int left,int right,int key)
{
    int c=1,mid;
    while(left<=right)
    {
        mid=left+((right-left)/2);
        if(array[mid]==key)
        {
            cout<<"Present \t"<<c<<endl;
            break;
        }
        else if(array[mid]<=key)
        {
            left=mid+1;
            c++;
        }
        else
        {
            right=mid-1;
            c++;
        }
    }
    if(array[mid]!=key)
    cout<<"Not present \t"<<c<<endl;

}
void exponentialSearch(int array[],int n,int key)
{
    int c=1;
    if(array[0]==key)
    {
        cout<<"Present \t"<<c<<endl;
    }
    int i=1;
    while(i<n && array[i]<key)
    {
        i=i*2;
        c++;
    }
    binarySearch(array,i/2,min(i,n-1),key);

}
int main()
{
    int t;
    cout<<"Enter the no. of test cases \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int array[n],i,key;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
        cout<<"Enter the element \n";
        cin>>key;
        exponentialSearch(array,n,key);

    }
}
