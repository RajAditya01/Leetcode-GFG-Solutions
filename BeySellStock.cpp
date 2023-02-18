#include <iostream>
#include <vector>
using namespace std;

void stockBuySell(vector<int> prices) {
    int n = prices.size();
    int buy = 0, sell = 0;
    bool bought = false;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[sell]) {
            sell = i;
            if (!bought) {
                bought = true;
                buy = i-1;
            }
        }
        else if (prices[i] < prices[buy] || (i == n-1 && bought)) {
            cout << "(" << buy << " " << sell << ") ";
            bought = false;
            buy = i;
            sell = i;
        }
    }
    if (!bought) cout << "No Profit";
}

int main() {
    int n = 7;
    vector<int> prices = {100,180,260,310,40,535,695};
    stockBuySell(prices);
    return 0;
}
