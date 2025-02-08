#include <iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter No: ";
    cin>>a;
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            break;
        }
    }
    if (i==a)
    {
        cout<<"Prime no."<<endl;
        while (a>2)
        {
            a++;
            for (i=2;i<a;i++)
            {
                if (a%i==0)
                {
                    break;
                }
            }
            if (i==a)
            {
                cout<<"Next Prime no. is "<<a;
                break;
            }
        }
    }
    else
    {
        cout<<"Composite no."<<endl<<"The Factors are:"<<endl;
        for (i=2;i<a;i++)
        {
            if (a%i==0)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}