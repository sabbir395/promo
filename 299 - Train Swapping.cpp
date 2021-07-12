#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,a[1005],temp;

    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(a[j]<a[j-1])
                {
                    temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                    s++;
                }
            }
        }
        cout<<"Minimum exchange operations : " <<s<<endl;
    }
}
