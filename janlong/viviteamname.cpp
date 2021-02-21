#include <iostream>
#include <vector>
#include <map>
#include <sstream>
 
using namespace std;
 
template<typename E>
[[maybe_unused]] stringstream printVector(vector<E> &v) {
    stringstream ss;
    ss << "[";
    for (auto &i : v)
        ss << i << ", ";
    ss << "]";
    return ss;
}
 
int numberOfDistinctElements(vector<char> &a, vector<char> &b) {
    map<char, int> freqMap;
    for (auto &i : a)
        freqMap[i]++;
    for (auto &i: b)
        freqMap[i]++;
 
    return freqMap.size();
}
 
 
int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        map<string, vector<char>> team;
 
        int n;
        cin >> n;
 
        string s[n];
 
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            string str = s[i];
            team[str.substr(1)].push_back(str[0]);
        }
 
        // print the hashmap for debugging
        //    for (auto &i : team) {
        //        cout << i.first << " : " << printVector(i.second).str() << endl;
        //    }
 
        auto suffixList = vector<string>();
        suffixList.reserve(team.size());
 
        for (auto &i : team)
            suffixList.push_back(i.first);
 
        int number_of_combos = 0;
 
        for (int i = 0; i < team.size(); ++i)
            for (int j = i + 1; j < team.size(); ++j) {
                auto distinctElements = numberOfDistinctElements(team[suffixList[i]], team[suffixList[j]]);
                number_of_combos +=
                        (int) (distinctElements - team[suffixList[i]].size()) *
                        (int) (distinctElements - team[suffixList[j]].size());
            }
 
 
        cout << number_of_combos * 2 << endl;
    }
}