#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// bool compare(int a, int b) {
//     // cout << a << " " << b << endl;
//     return a < b;
// }

struct employee {
    string name;
    int salary;
};

bool compare1(employee e1, employee e2) {
    return e1.salary > e2.salary;
}

bool compare2(employee e1, employee e2) {
    return e1.name < e2.name;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // vector<int>v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // v.pop_back();
    // v.pop_back();

    // sort(v.begin(), v.end());

    // sort(v.begin(), v.end(), compare);


    // sort(v.begin(), v.end(), greater<int>());




    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // v.erase(v.begin(), v.begin() + 2);

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // int n;
    // cin >> n;
    // vector<employee>empArr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> empArr[i].name >> empArr[i].salary;
    // }

    // sort(empArr.begin(), empArr.end(), compare2);

    // for (int i = 0; i < n ; i++) {
    //     cout << empArr[i].name << " " << empArr[i].salary << endl;
    // }


    string s;
    cin >> s;

    // cout << s << endl;

    string temp = s;

    reverse(temp.begin(), temp.end());

    if (temp == s) {
        cout << "Palindrome\n";
    }
    else {
        cout << "Not Palindrome\n";
    }

    // sort(s.begin(), s.end());
    // reverse(s.begin(), s.end());



    cout << s << endl;




    return 0;
}