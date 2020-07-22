#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[1000], b[1000], n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	vector<int> v;
	if(n >= m) {
		bool p[n+1];
		memset(p, true, sizeof(p));
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(p[i] == true) {
					if(a[i] == b[j]) {
						p[j] = p[i] = false;
						v.push_back(a[i]);
						break;
					}
				}
			}
		}
	}
	else {
		bool p[m+1];
		memset(p, true, sizeof(p));
		for(int i = 0; i < m; ++i) {
			for(int j = 0; j < n; ++j) {
				if(p[i] == true) {
					if(b[i] == a[j]) {
						p[j] = p[i] = false;
						v.push_back(b[i]);
						break;
					}
				}
			}
		}
	}
	if((int) v.size() != 0) {
		cout << "YES\n";
		cout << 1 << " ";
		for(auto x : v) {
			cout << x << " ";
			break;
		}
	}
	else {
		cout << "NO";
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
