#include<iostream>
#include<cmath>
using namespace std;
void jumpSearch(int array[],int n,int key)
{
    int steps,prev,c=0;
    steps=sqrt(n);
    prev=0;
    while(array[(min(steps,n)-1)]<key)
    {
        c++;
        if(prev>=n)
        {
           cout<<"Not Present \t"<<c<<endl;

        }
        prev=steps;
        steps+=sqrt(n);
    }
    while(array[prev]<key)
    {
        c++;
        prev+=1;
        if(prev==min(steps,n))
        {

            cout<<"Not Present \t"<<c<<endl;
        }

    }
    if(array[prev]==key)
    {
        cout<<"Present \t"<<c<<endl;
    }
    else
    {
        cout<<"Not Present \t"<<c<<endl;

    }



}
int main()
{
    int t;
    cout<<"Enter the test cases \n";
    cin>>t;
    while(t--)
    {
        int n,i,key,re;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int array[n];
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }
        cout<<"Enter the element \n";
        cin>>key;
        jumpSearch(array,n,key);



    }

}

