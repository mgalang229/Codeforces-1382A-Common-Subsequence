#include <bits/stdc++.h>

using namespace std;

const int nax = 1005;
int n, m, a[nax], b;
bool vis[nax];

void test_case() {
	cin >> n >> m;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		vis[a[i]] = true;
	}
	int e = -1;
	for(int j = 0; j < m; ++j) {
		cin >> b;
		if(vis[b]) e = b;
	}
	for(int i = 0; i < n; ++i) {
		vis[a[i]] = false;
	}
	if(e == -1) {
		cout << "NO";
	}
	else {
		cout << "YES\n1 " << e;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
