#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string name;
    string fatherName;
    int rollNumber;
    float marks[3];  // Assuming 3 subjects for simplicity
    int totalAssignments;
    int completedAssignments;
    float attendance;
};

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Enter the father's name of student " << i + 1 << ": ";
        cin >> students[i].fatherName;

        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> students[i].rollNumber;

        cout << "Enter marks for three subjects for " << students[i].name << " (separated by spaces): ";
        for (int j = 0; j < 3; ++j) {
            cin >> students[i].marks[j];
        }

        cout << "Enter total number of assignments for " << students[i].name << ": ";
        cin >> students[i].totalAssignments;

        cout << "Enter number of completed assignments for " << students[i].name << ": ";
        cin >> students[i].completedAssignments;

        cout << "Enter attendance percentage for " << students[i].name << ": ";
        cin >> students[i].attendance;
    }

    cout << "\nStudent Results:\n";
    cout << setw(20) << "Name" << setw(20) << "Father's Name" << setw(15) << "Roll Number" << setw(15) << "Subject 1" << setw(15) << "Subject 2" << setw(15) << "Subject 3"
         << setw(15) << "Total Marks" << setw(15) << "Percentage" << setw(15) << "Total Assignments" << setw(25) << "Completed Assignments" << setw(15) << "Attendance (%)\n";

    for (int i = 0; i < numStudents; ++i) {
        float totalMarks = 0;
        for (int j = 0; j < 3; ++j) {
            totalMarks += students[i].marks[j];
        }

        float percentage = totalMarks / 3;

        cout << setw(20) << students[i].name << setw(20) << students[i].fatherName << setw(15) << students[i].rollNumber
             << setw(15) << students[i].marks[0] << setw(15) << students[i].marks[1] << setw(15) << students[i].marks[2]
             << setw(15) << totalMarks << setw(15) << fixed << setprecision(2) << percentage
             << setw(15) << students[i].totalAssignments << setw(25) << students[i].completedAssignments << setw(15) << students[i].attendance << "%\n";
    }

    return 0;
}
