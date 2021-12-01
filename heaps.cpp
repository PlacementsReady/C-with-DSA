#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Car {
public:
	string name;
	int price;
};
class CompareCar {
public:
	bool operator()(Car a, Car b) {
		if (a.price == b.price) {
			return a.name > b.name;
		}
		return a.price < b.price;
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// priority_queue<int>pq;
	// priority_queue<int, vector<int>, greater<int>>pq;

	// priority_queue<Car, vector<Car>, CompareCar>pq;
	int n, k;
	cin >> n >> k;
	// int target;
	// cin >> target;
	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	pq.push(x);
	// 	if (pq.size() > k) {
	// 		pq.pop();
	// 	}
	// 	// string name;
	// 	// int price;
	// 	// cin >> name >> price;
	// 	// Car c{name, price};
	// 	// pq.push(c);
	// }

	// while (!pq.empty()) {
	// 	cout << pq.top() endl;
	// 	pq.pop();
	// }

	// cout << pq.top() << endl;
	// while (!pq.empty()) {
	// 	cout << pq.top() << " ";
	// 	pq.pop();
	// }

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	int arr[n];
	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}
	// vector<pair<int, int>>v;
	map<int, int>freq;
	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}

	// for (int i = 0; i < n; i++) {
	// 	// cout << v[i].first << " " << v[i].second << endl;
	// 	pq.push(v[i]);
	// 	if (pq.size() > k) {
	// 		pq.pop();
	// 	}
	// }

	for (auto p : freq) {
		pq.push({p.second, p.first});
		if (pq.size() > k) {
			pq.pop();
		}
	}
	while (!pq.empty()) {
		cout << pq.top().second << " ";
		pq.pop();
	}

	return 0;
}