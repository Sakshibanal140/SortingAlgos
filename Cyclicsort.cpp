#include <iostream>
#include <vector>

// Function to perform cyclic sort on an array
void CyclicSort(std::vector<int> &arr) {
    int i = 0;
    while (i < arr.size()) {
        int correct = arr[i] - 1;

        if (arr[i] != arr[correct]) {
            // Swap the elements to their correct positions
            int temp = arr[i];
            arr[i] = arr[correct];
            arr[correct] = temp;
        } else {
            // Move to the next element
            i++;
        }
    }
}

int main() {
    std::vector<int> nums = {5, 6, 7, 1, 2, 3, 4, 8, 9, 11, 10};
    CyclicSort(nums);

    // Print the sorted array
    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
