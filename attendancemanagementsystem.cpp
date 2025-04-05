#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Attendance {
    string name;
    int present;
    int absent;
};

void displayMenu() {
    cout << "\nAttendance Management System\n";
    cout << "1. Mark Present\n";
    cout << "2. Mark Absent\n";
    cout << "3. View Attendance\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}


int findStudent(vector<Attendance>& records, string name) {
    for (int i = 0; i < records.size(); i++) {
        if (records[i].name == name) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<Attendance> attendance;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore(); 
        
        if (choice == 1 || choice == 2) {
            string name;
            cout << "Enter name: ";
            getline(cin, name);

            int index = findStudent(attendance, name);
            if (index == -1) { 
                if (choice == 1) attendance.push_back({name, 1, 0});
                else attendance.push_back({name, 0, 1});
            } else { 
                if (choice == 1) attendance[index].present++;
                else attendance[index].absent++;
            }
            cout << name << " marked as " << (choice == 1 ? "Present" : "Absent") << ".\n";
        } 
        else if (choice == 3) { 
            cout << "\nAttendance Records:\n";
            if (attendance.empty()) {
                cout << "No records found.\n";
            } else {
                for (Attendance& record : attendance) {
                    cout << record.name << ": Present - " << record.present << ", Absent - " << record.absent << endl;
                }
            }
        } 
        else if (choice == 4) { 
            cout << "Exiting... Goodbye!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
