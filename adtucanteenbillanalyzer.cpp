problem title:AdtU Canteen Bill Analyzer.
#include <iostream>
using namespace std;

int main() {
    bool A[10][7];  
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            int x;
            cin >> x;
            A[i][j] = (x == 1); 
        }
    }

    int studentTotal[10] = {0};
    int dayTotal[7] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            if (A[i][j]) {
                studentTotal[i]++;
                dayTotal[j]++;
            }
        }
    }


    int maxAttendance = studentTotal[0];
    int maxStudent = 1;

    for (int i = 1; i < 10; i++) {
        if (studentTotal[i] > maxAttendance) {
            maxAttendance = studentTotal[i];
            maxStudent = i + 1;
        }
    }


    int minDay = 0;
    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] < dayTotal[minDay]) {
            minDay = j;
        }
    }


    cout << "Weekly Attendance Summary\n";
    cout << "-------------------------\n\n";

    cout << "Total Present Days:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << studentTotal[i] << endl;
    }

    cout << "\nStudent with Highest Attendance: Student "
         << maxStudent << " (" << maxAttendance << " Days)\n";

    cout << "\nDay with Lowest Overall Attendance: Day "
         << minDay + 1 << endl;

    return 0;
}

