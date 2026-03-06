#include<iostream>
#include<vector>
using namespace std;
long long a[5000010]={0};
int b[5000010]={0};//代表a的差分数组
int p,n;
int main()
{
cin>>n>>p;
    for(int i =1;i<=n;i++)
    {
cin>>a[i];
b[i]=a[i]-a[i-1];
   }
while(p--)
{
int x,y,z;
    cin>>x>>y>>z;
b[x]=+z;
b[y+1]=-z;
}
    long long  mins=1e9;
for(int i=1;i<=n;i++)
{
 a[i]=a[i-1]+b[i];
 mins=min(mins,a[i]);

}
cout<<mins<<endl;

    

}