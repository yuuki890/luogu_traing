#include<iostream>
#include<cstring>
using namespace std;
int a[10100],b[10100],g[10100],k[10100];
int n;
int main()
{
cin>>n;
    int ans=-1;
for(int i=1;i<=n;i++)
{
cin>>a[i]>>b[i]>>g[i]>>k[i];



}


int x,y;
cin>>x>>y;
while(n)
{
if((a[n]<=x&&x<a[n]+g[n])&&(b[n]<=y&&y<b[n]+k[n]))
{
ans=n;
break;
}
    n--;
}
cout<<ans<<endl;
}