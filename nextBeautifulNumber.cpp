class Solution {
public:
    int nextBeautifulNumber(int n) {
        unordered_map<char, int> mp;
        for (int i = n + 1; i <= 10000000; i++) {
            mp.clear();
            string s = to_string(i);
            for (auto& j : s) {
                mp[j]++;
            }
            bool ok = true;
            for (auto& k : mp) {
                if ((k.first - '0') != k.second) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                return i;
        }

        return -1;
    }
};
