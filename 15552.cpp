#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}
}
