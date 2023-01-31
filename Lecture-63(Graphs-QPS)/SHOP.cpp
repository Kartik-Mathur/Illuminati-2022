#include <iostream>
#include <queue>
using namespace std;
#define ll long long
char a[25][25];
ll dist[25][25];
ll inf = 1e9;
ll src_i, src_j, des_i, des_j;
ll c, r;
ll nx[] = {0, 1, 0, -1};
ll ny[] = { -1, 0, 1, 0};

bool kyaSahiHai(ll i, ll j) {
	if (i >= 0 and i < r and j >= 0 and j < c and
	        a[i][j] != 'X') return true;
	return false;
}

ll solve() {

	queue<pair<ll, ll> > q;
	q.push({src_i, src_j});
	dist[src_i][src_j] = 0;

	while (!q.empty()) {
		auto p = q.front();
		q.pop();

		ll ci = p.first;
		ll cj = p.second;

		for (int i = 0; i < 4; ++i)
		{
			ll ni = ci + nx[i];
			ll nj = cj + ny[i];
			if (kyaSahiHai(ni, nj) and
			        (dist[ni][nj] > dist[ci][cj] + (a[ni][nj] - '0')))
			{
				dist[ni][nj] = dist[ci][cj] + (a[ni][nj] - '0');
				q.push({ni, nj});
			}
		}
	}

	return dist[des_i][des_j];
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> c >> r;


	while (c and r) {
		for (ll i = 0; i < r; ++i)
		{
			for (ll j = 0; j < c; ++j)
			{
				cin >> a[i][j];
				if (a[i][j] == 'S') src_i = i, src_j = j, a[i][j] = '0';
				else if (a[i][j] == 'D') des_i = i, des_j = j, a[i][j] = '0';

				dist[i][j] = inf;
			}
		}

		cout << solve() << endl;
		cin >> c >> r;
	}

	return 0;
}














