#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 500
#define PI 3.14
int minm = 500;
// void fun(){
//  cout<<r<<endl;
//  cout<<"Inside fun : "<< minm<<endl;
// }
int add(int a, int &b) {
    a = a + b;
    return a;
}
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
    //  cout << "You will not go outside";
    // }
    // else {
    //  cout << "You can go outside";
    // }

    // int age = 9;

    // if (age >= 18) {
    //     cout << "You can watch all type of movies\n";
    // }
    // else if (age >= 16) {
    //     cout << "You can watch only age restricted movies\n";
    // }
    // else if (age >= 10) {
    //     cout << "You can watch only child movies\n";
    // }
    // else {
    //     cout << "Abhi bacche ho padhai kro";
    // }


    // int a, b;
    // cin >> a >> b;

    // char op;
    // cin >> op;

    // switch (op) {
    // case '+' :
    //     cout << a + b << endl;
    //     break;
    // case '-' :
    //     cout << a - b << endl;
    //     break;
    // case'*':
    //     cout << a*b << endl;
    //     break;
    // case '/':
    //     cout << (a / ((1.0)*b)) << endl;
    //     break;
    // default:
    //     cout << "Invalid Operation" << endl;
    //     break;

    // }


    int n;
    cin >> n;

    // for (int i = 0; i < n; i++) {
    //     // if (i == 5) {
    //     //     break;
    //     // }
    //     if (i == 5) {
    //         continue;
    //     }
    //     cout << i << " Hello World\n";
    // }

    int i = 0;

    // while (i < n) {
    //     cout << "Hello World\n";
    //     i++;
    // }


    do {
        cout << "We are inside do while loop\n";
        i++;
    }
    while (i < n);

    // ll r;
    // cin>>r;
    // cout<<PI*r*r<<endl;
    // cout<<"Inside main "<<minm<<endl;
    // fun();
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    cout << a << endl;

    return 0;
}