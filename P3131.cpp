/*


Farmer John 的 N 头奶牛站成一排，这是它们时不时会做的事情。每头奶牛都有一个独特的整数 ID 编号，以便 Farmer John 能够区分它们。Farmer John 希望为一组连续的奶牛拍照，但由于童年时与数字 1…6 相关的创伤事件，他只希望拍摄一组奶牛，如果它们的 ID 加起来是 7 的倍数。

请帮助 Farmer John 确定他可以拍摄的最大奶牛组的大小。

输入格式
输入的第一行包含 N（1≤N≤50,000）。接下来的 N 行每行包含一头奶牛的整数 ID（所有 ID 都在 0…1,000,000 范围内）。

输出格式
请输出 ID 之和为 7 的倍数的最大连续奶牛组中的奶牛数量。如果不存在这样的组，则输出 0。
*/#include<iostream>
#include<vector>
using namespace std;
int ID[50010];
long long sum[50010];
int main()
{
int N;
cin>>N;
    sum[0]=0;
for(int i=1;i<=N;i++)
{cin>>ID[i];
 sum[i]=sum[i-1]+ID[i];
 sum[i]=sum[i]%7;
}
int maxlen=0;
int a[10]={0};//对应余数为i的最大位置
int b[10];////对应余数为i的最小位置
for(int i=1;i<=7;i++) b[i]=1e6;
    b[0]=0;
for(int i=1;i<=N;i++)
{
a[sum[i]]=max(a[sum[i]],i);
b[sum[i]]=min(b[sum[i]],i);
}
for(int i=0;i<7;i++)
  maxlen=max(maxlen,a[i]-b[i]);


    
cout<<maxlen<<endl;


}