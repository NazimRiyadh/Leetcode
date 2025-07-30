//--------O(n)---------
#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    int max = INT_MIN;
    vector<int> riyadh;
    for (int i = n - 1; i >= 0; i--) {
        if (elements[i] > max) {
            riyadh.push_back(elements[i]);
            max = elements[i];
        }
    }
    reverse(riyadh.begin(), riyadh.end());
    return riyadh;
}