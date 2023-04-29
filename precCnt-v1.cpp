#include <bits/stdc++.h>

using namespace std;

int main() {
    string num; cin >> num;
    cout << num.substr(0, num.find(".")) << " " << num.substr(num.find(".") + 1, num.size() - 1) << endl;
}
