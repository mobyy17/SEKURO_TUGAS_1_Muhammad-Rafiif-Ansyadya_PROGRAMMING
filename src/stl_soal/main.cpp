#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n), c(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<pair<int,int>> paket(n);
    for (int i = 0; i < n; i++) {
        paket[i] = {x[i], c[i]};
    }

    sort(paket.begin(), paket.end());

    map<int, int> last; 
    int l = 0, hasil = 0;

    for (int r = 0; r < n; r++) {
        int kategori = paket[r].second;

        if (last.count(kategori) && last[kategori] >= l) {
        l = last[kategori] + 1;
     }

     last[kategori] = r;

        hasil = max(hasil, r - l + 1);
    }
    
    cout << hasil << "\n";
    return 0;
}