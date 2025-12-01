Problem title : professor neo's attendece analyzer.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int attendance[n];
    int present = 0, absent = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }
    
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    
    return 0;
}

