

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
const ll inf = 0x7fffffff;
vector<pair<int, ll>> map[100100];   // 邻接表，原变量名 map 保留
ll dis[100100];
int vis[101000] = {0};
int n, m, s;

int main() {
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) dis[i] = inf;
    dis[s] = 0;

    for (int i = 0; i < m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        map[u].push_back({v, w});   // 直接存边，重边不影响最终结果
    }

    // 小顶堆，存储 (距离, 节点)
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();   
        if (vis[u]) continue;              
        vis[u] = 1;

        for (auto &edge : map[u]) {
            int v = edge.first;
            ll w = edge.second;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++) cout << dis[i] << " ";
    return 0;
}
