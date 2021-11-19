#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//integer

	// int a = 5;
	// cout << a << endl;
	// cout << sizeof(a) << endl;

	//char

	// char ch = 'a';
	// cout << ch << endl;
	// cout << int(ch) << endl;
	// cout << sizeof(ch) << endl;

	//float
	// float f = 0.5;
	// cout << f << endl;


	//string
	// string str = "aa";
	// cout << str << endl;


	// bool isRaining = false;
	// if (isRaining == true) {
	// 	cout << "You will not go outside";
	// }
	// else {
	// 	cout << "You can go outside";
	// }

	int age = 9;

	if (age >= 18) {
		cout << "You can watch all type of movies\n";
	}
	else if (age >= 16) {
		cout << "You can watch only age restricted movies\n";
	}
	else if (age >= 10) {
		cout << "You can watch only child movies\n";
	}
	else {
		cout << "Abhi bacche ho padhai kro";
	}




	return 0;
}