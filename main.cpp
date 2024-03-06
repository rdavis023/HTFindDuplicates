#include "FindDuplicates.h"


vector<int> findDuplicates(const vector<int>& nums) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function finds duplicate integers in a given |
  //   |   vector.                                           |
  //   | - It uses an unordered_map to count each integer's  |
  //   |   occurrences.                                      |
  //   | - Loops through the map to find duplicates.         |
  //   |                                                     |
  //   | Return type: vector<int>                            |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'numCounts' keeps track of each integer's count.  |
  //   | - 'duplicates' stores duplicate integers found.     |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
    unordered_map<int, int> numCounts; // Map to store the count of each integer
    vector<int> duplicates; // Vector to store duplicates

    // Count occurrences of each integer
    for (int num : nums) {
        numCounts[num]++;
    }

    // Find duplicates
    for (const auto& pair : numCounts) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first); // Found a duplicate
        }
    }

    return duplicates; // Return the vector of duplicates

}