#include <iostream>
#include <vector>

using namespace std;

int countChordIntersections(vector<float>& radians) {
    int n = radians.size();
    int intersections = 0;

    for (int i = 0; i < n-1; i++) {
        float current_Start = radians[i];
        float other_Start = radians[(i + 1)];

        for (int j = i + 1; j < n-1; j++) {
            float current_End = radians[j];
            float other_End = radians[(j + 1)];

            // Check for intersection based on starting points
            if ((current_Start < other_Start && other_Start < current_End) ||
                (current_Start > current_End && (other_Start > current_Start || other_Start < current_End)) ||
                (current_Start == 0 && other_Start == 0)) {
                intersections++;
            }
        }
    }

    return intersections;
}

int main() {
    vector<float> radians = {0.78, 1.47, 1.77, 3.92};
    int result = countChordIntersections(radians);
    cout << "Number of intersections: " << result << endl;
    return 0;
}