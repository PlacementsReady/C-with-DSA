#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool checkForPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    // string s1, s2;
    // cin >> s1 >> s2;
    // int n = s1.length();
    // string s;
    // cin >> s;
    // int maxLength = 0;
    // string ans;
    // int n = s.length();
    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         // for (int k = i; k <= j; k++) {
    //         //     cout << s[k];
    //         // }
    //         string curr = s.substr(i, j - i + 1) ;
    //         if (checkForPalindrome(curr)) {
    //             if (j - i + 1 > maxLength) {
    //                 maxLength = max(maxLength, j - i + 1);
    //                 ans = curr;
    //             }
    //         }
    //     }
    // }
    // cout << maxLength << " " << ans << endl;



    // for (int i = 0; i < n; i++) {
    //     string sub = s1.substr(0, n - i);
    //     if (s2.find(sub) != string::npos) {
    //         cout << 0 << " " << n - i - 1 << endl;
    //         break;
    //     }
    // }


    unordered_set<int>s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}