#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string n;
    cout<<"Enter Sring: ";
    cin>>n;
    string k=n;
    int c[26]={0};
    int i=0,flag=0;
    for (i=0;i<n.length();i++)
    {
        n[i]=tolower(n[i]);
    }

    if(n.length()==1)
    {
        cout<<"It is a pallendrome";
        return 0;
    }


    i=0;
    int j=n.length()-1;
    while(i<j)
    {
        if (n[i]!=n[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if (flag==0)
        cout<<"It is a pallendrome"<<endl;
    else if (flag==1)
        cout<<"It is not a pallendrome"<<endl;
    
    
    for (i=0;i<j+1;i++)
    {
        c[n[i]-'a']++;
    }

    for (i=0;i<26;i++)
    {
        if (c[i]>0)
        {
            cout<<char(i+'a')<<" : "<<c[i]<<endl;
        }
    }

    for(i=0;i<j+1;i++)
    {
        if(k[i]=='a' || k[i]=='e' || k[i]=='i' || k[i]=='o' || k[i]=='u' || k[i]=='A' || k[i]=='E' || k[i]=='I' || k[i]=='O' || k[i]=='U')
        {
            k[i]='*';
        }
    }
    cout<<k;
    return 0;
}