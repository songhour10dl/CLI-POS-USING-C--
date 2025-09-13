#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> ages;  // Vector to store input ages
    map<int, int>   ageCount;  // Map to count occurrences of each age
    int numOfAges, age;

    // Taking dynamic input
    cout << "Enter the number of ages: ";
    cin >> numOfAges;

    cout << "Enter the ages:\n";
    for(int i = 0; i < numOfAges; i++) {
        cin >> age;
        ages.push_back(age);  // Add each age to the vector
        ageCount[age]++;  // Increment the count of this age in the map
    }

    // Loop through the map to print each age and the corresponding number of char(178)
    cout << "\nAge distribution:\n";
    for(auto &entry : ageCount) {
        cout << "Age " << entry.first << ": ";  // Print the age
        for(int i = 0; i < entry.second; i++) {
            cout << "# ";  // Print char(178) as many times as the age count
        }
        cout << " (" << entry.second << " times)" << std::endl;  // Print the count
    }

    return 0;
}
