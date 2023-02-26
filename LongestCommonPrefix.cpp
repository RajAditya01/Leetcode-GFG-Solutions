#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) {
                return "";
            }
        }
    }
    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs1) << endl; // should output "fl"
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(strs2) << endl; // should output ""
    return 0;
}
