#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// unordered_map<string, int>m;
	// int n;
	// cin >> n;

	// for (int i = 0; i < n; i++) {
	// 	string food;
	// 	int price;
	// 	cin >> food >> price;
	// 	m[food] = price;
	// }

	// for (auto p : m) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	// for (auto it = m.begin(); it != m.end(); it++) {
	// 	cout << it->first << " " << it->second << endl;
	// }

	// map<int, int>m;
	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	// if (m.find(x) != m.end()) {
	// 	// 	continue;
	// 	// }
	// 	// else {
	// 	// 	m[x] = true;
	// 	// }
	// 	m[x]++;
	// }
	// for (auto p : m) {
	// 	cout << p.first << " " << p.second << endl;
	// }



	// int n;
	// cin >> n;
	// int arr[n];
	// for (int i = 0 ; i < n ; i++) {
	// 	cin >> arr[i];
	// }
	// unordered_map<int, int>m;
	// int sum = 0;
	// int maxLength = 0;
	// for (int i = 0; i < n; i++) {
	// 	sum += arr[i];
	// 	if (sum == 0) {
	// 		maxLength = max(maxLength, i + 1);
	// 	}
	// 	if (m.find(sum) != m.end()) {
	// 		maxLength = max(maxLength, i - m[sum]);
	// 	}
	// 	else {
	// 		m[sum] = i;
	// 	}
	// }

	// cout << maxLength << endl;


	// stack<int>s;
	queue<int>q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	// while (!s.empty()) {
	// 	cout << s.top() << " ";
	// 	s.pop();
	// }

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}


	return 0;
}