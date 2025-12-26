#include <iostream>
using namespace std;

struct Activity {
    int start;
    int finish;
};

// Function to swap two activities
void swap(Activity &a, Activity &b) {
    Activity temp = a;
    a = b;
    b = temp;
}

// Function to sort activities by start time using Bubble Sort
void sortActivities(Activity activities[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (activities[j].start > activities[j + 1].start) {
                swap(activities[j], activities[j + 1]);
            }
        }
    }
}

// Function to find the minimum number of machines required
int findMinMachines(Activity activities[], int n) {
    // Sort activities by their start time
    sortActivities(activities, n);

    int machines = 0;      // Minimum number of machines required
    int endTimes[n];        // Array to store end times of each machine

    // Iterate over each activity
    for (int i = 0; i < n; i++) {
        bool assigned = false;
        // Try to assign this activity to an existing machine
        for (int j = 0; j < machines; j++) {
            if (activities[i].start >= endTimes[j]) {
                // If activity can be assigned to this machine
                endTimes[j] = activities[i].finish;
                assigned = true;
                break;
            }
        }
        // If not assigned, we need a new machine
        if (!assigned) {
            endTimes[machines] = activities[i].finish;
            machines++;
        }
    }

    return machines; // Return the minimum number of machines required
}

int main() {
    int n;
    
    // Input number of activities
    cout << "Enter the number of activities: ";
    cin >> n;

    Activity activities[n];

    // Input start and finish times of activities
    cout << "Enter start and finish times of activities:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Activity " << i + 1 << " - Start: ";
        cin >> activities[i].start;
        cout << "Activity " << i + 1 << " - Finish: ";
        cin >> activities[i].finish;
    }

    // Call the function to find the minimum number of machines required
    int minMachines = findMinMachines(activities, n);

    // Output the result
    cout << "Minimum number of machines required: " << minMachines << endl;

    return 0;
}


 