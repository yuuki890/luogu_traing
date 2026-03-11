#include<iostream>
#include<string>
using namespace std;
int a[1000010]={0};
int nums[2020]={0};
int num=0,ansl,ansr,ans;
/*
双指针，左开右闭；
num代表区间内含有多少画家的画；
nums[i]代表i画师有多少








*/
int main()
{
int l=1,r=1;
int n,m;
ans=1000010;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
int tmp;
cin>>tmp;
a[i]=tmp;
}


while(l<=r&&r<=n+1)
{
   
if(num<m) 
{
    r++;
nums[a[r-1]]++;
if(nums[a[r-1]]==1) num++;
}
else
{
if(ans>r-l)
{
ans=r-l;
ansl=l;
ansr=r-1;  
}
    nums[a[l]]--;
if(nums[a[l]]==0) num-- ;
    l++;
}

}

cout<<ansl<<" "<<ansr<<endl;






}
