#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if (!(cin >> N >> M)) return 0;
    vector<vector<int>> rev(N + 1);
    for (int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
       
        rev[y].push_back(x);
    }

    int Q;
    cin >> Q;
    vector<char> good(N + 1, 0); 
    for (int i = 0; i < Q; ++i) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            if (good[v]) continue; 
            queue<int> qu;
            qu.push(v);
            good[v] = 1;
            while (!qu.empty()) {
                int cur = qu.front(); qu.pop();
                for (int nb : rev[cur]) {
                    if (!good[nb]) {
                        good[nb] = 1;
                        qu.push(nb);
                    }
                }
            }
        } else if (t == 2) {
            if (good[v]) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
