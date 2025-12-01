#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int records[n];
    int totalProfit = 0, totalLoss = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> records[i];
        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += (-records[i]);
    }
    
    int netBalance = totalProfit - totalLoss;
    
    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;
    
    return 0;
}
