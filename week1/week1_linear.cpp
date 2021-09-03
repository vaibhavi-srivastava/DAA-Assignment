#include<iostream>
using namespace std;
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
        int a[n],el,i,c=1;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the element to check \n";
        cin>>el;
        for(i=0;i<n;i++)
        {
            if(a[i]==el)
            {
                cout<<"Present \t"<<c<<endl;
                break;
            }
            else
            {
                c++;
            }
        }
        t--;
    }
}
