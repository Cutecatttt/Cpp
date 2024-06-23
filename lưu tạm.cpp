#include <bits/stdc++.h>

using namespace std;
multimap<int,int> mp;
int sum, save[500005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v, k; cin >> u >> v >> k;
        mp.insert({u,k});
        mp.insert({v+1,-k});
    }
    auto it = mp.begin();
    //sum = (*it).second;
    int i = 1;
    //++it;
    while(it != mp.end()) {
        while((*it).first > i){
            save[i] = sum;
            i++;
        }
        sum += (*it).second;
        ++it;
    }

    int p; cin >> p;
    for(int i = 0; i < p; i ++){
        int ans = 0;
        int u, v; cin >> u >> v;
        for(int i = u; i <=v ; i++){
            if(save[i] > ans) ans = save[i];
        }
        cout << ans << endl;
    }
    return 0;
}
