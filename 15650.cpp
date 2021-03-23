#include <bits/stdc++.h>

using namespace std;

int n, m;
int ch[10];
int dy[10];

void DFS(int L, int s){
	if(L == m){
		for(int i = 0; i < m; i++)
			cout << dy[i] << " ";
		cout << "\n";
	}else{
		for(int i = s; i <= n; i++){
			if(ch[i] == 0){
				ch[i] = 1;
				dy[L] = i;
				DFS(L+1, i+1);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	DFS(0, 1);
	return 0;
}
