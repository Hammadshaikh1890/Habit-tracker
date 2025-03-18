#include <iostream>
#include <string>

using namespace std;

const int MAX_HABITS = 10;  
string habits[MAX_HABITS];
int progress[MAX_HABITS];
int habitCount = 0; 

void addHabit() {
    if (habitCount >= MAX_HABITS) {
        cout << "Habit list is full!" << endl;
        return;
    }
    
    cout << "Enter Habit Name: ";
    cin >> habits[habitCount];
    progress[habitCount] = 0; 
    habitCount++;
    
    cout << "Habit Added Successfully!" << endl;
}

void trackHabit() {
    string habitName;
    cout << "Enter Habit Name: ";
    cin >> habitName;

    for (int i = 0; i < habitCount; i++) {
        if (habits[i] == habitName) {
            progress[i]++;
            cout << "Habit Tracked: " << progress[i] << " days" << endl;
            return;
        }
    }
    
    cout << "Habit Not Found!" << endl;
}

void showProgress() {
    cout << "\nHabit Progress:\n";
    for (int i = 0; i < habitCount; i++) {
        cout << habits[i] << ": " << progress[i] << " days" << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\nSMART HABIT TRACKER" << endl;
        cout << "1. Add Habit\n2. Track Habit\n3. Show Progress\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addHabit();
                break;
            case 2:
                trackHabit();
                break;
            case 3:
                showProgress();
                break;
            case 4:
                cout << "Exiting application..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}
