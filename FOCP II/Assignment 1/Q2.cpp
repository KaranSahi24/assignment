#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,i,ss,s,sl,l;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }

    cout<<"Array: ";
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl+<<"Reverse Array: ";
    for (i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    ss=INT_MAX;
    s=INT_MAX;
    for(i=0;i<n;i++)
    {
        if (a[i]<ss && a[i]>s)
            ss=a[i];
        else if (a[i]<s)
        {
            ss=s;
            s=a[i];
        }
    }
    if (ss==INT_MAX)
    {
        cout<<endl<<"No second smallest element";
    }
    else 
    {
        cout<<endl<<"The second smallest element is "<<ss;
    }

    sl=INT_MIN;
    l=INT_MIN;
    for(i=0;i<n;i++)
    {
        if (a[i]>sl && a[i]<l)
            sl=a[i];
        else if (a[i]>s)
        {
            sl=l;
            l=a[i];
        }
    }
    if (sl==INT_MAX)
    {
        cout<<endl<<"No second largest element";
    }
    else 
    {
        cout<<endl<<"The second largest element is "<<sl;
    }
    return 0;
}