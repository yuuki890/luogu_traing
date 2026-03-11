#include<iostream>
#include<stack>
#define ll long long
using namespace std;
stack<ll> st;
int main()
{
int N;
cin>>N;
ll ans=0;
for(int i=0;i<N;i++)
{
ll h;
cin>>h;
while(!st.empty()&&st.top()<=h) 
{
 st.pop();
}
ans+=st.size();
st.push(h);


}

cout<<ans<<endl;





}