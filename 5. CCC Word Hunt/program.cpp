#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int result=0;
string target;
vector<string> vec;

void search(int d, int x, int y, int dx, int dy, bool occur=false) {
	if (x < 0 || x >= n || y < 0 || y >= m) return;
	if (vec[x][y] != target[d]) return;
	if (d == target.size() - 1) {
		result++;
		return;
	}

	search(d + 1, x + dx, y + dy, dx, dy, occur);
	if (!occur && d >= 1) {
		search(d + 1, x - dy, y + dx, -dy, dx, true);
		search(d + 1, x + dy, y - dx, dy, -dx, true);
	}
}

int main() {
	cin >> target >> n >> m;

	for (int i = 0; i < n; i++) {
		string s2 = "";
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			s2 += c;
		}
		vec.push_back(s2);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vec[i][j] == target[0]) {
				search(0, i, j, -1, -1);
				search(0, i, j, -1, 0);
				search(0, i, j, -1, 1);
				search(0, i, j, 0, -1);
				search(0, i, j, 0, 1);
				search(0, i, j, 1, -1);
				search(0, i, j, 1, 0);
				search(0, i, j, 1, 1);
			}
		}
	}

	cout << result << '\n';
	return 0;
}