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
        else if(array[mid]<key)
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
int main()
{
    int t;
    cout<<"Enter the no. of test cases \n";
    cin>>t;
    while(t)
    {
        int n;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int array[n],key,i;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
        cout<<"Enter the element \n";
        cin>>key;
        binarySearch(array,0,n-1,key);


    }
    t--;
}

