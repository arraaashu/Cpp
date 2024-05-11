Chord Intersections counting:
This C++ program counts the number of intersections in a list of chords in a circle. The input consists of a vector containing the radian measures of the chords.

Steps to Run:
Ensure you have a C++ compiler installed (e.g., g++).
Save the provided C++ code in a file, say intersections.cpp.
Open a terminal and navigate to the directory containing the file.
Compile the code using the command: g++ -o intersections intersections.cpp
Run the compiled executable: ./intersections

Example Input
For the example input:
cpp
vector<float> radians = {0.78, 1.47, 1.77, 3.92};

The output will be:
Number of intersections: 1

BigO Runtime Estimation:
The runtime complexity of the provided algorithm is O(n^2), where 'n' is the number of chords. This is because we use nested loops to compare each pair of chords for intersections. As the number of chords increases, the runtime will quadratically increase.





