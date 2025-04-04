#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) return i;
    }
    return -1;
}

int main() {
    string s = "leetcode";
    cout << firstUniqChar(s) << endl;
    return 0;
}
