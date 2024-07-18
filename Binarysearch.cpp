// #include <iostream>

// using namespace std;

// // Function to perform binary search on a sorted array
// // Returns the index of the target element if found, otherwise returns -1
// int binarySearch(int arr[], int size, int target) {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right) {
//         int mid = (left + right) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         }
        
//         else if (arr[mid] < target) {
//             left = mid + 1;
//         }
//         else {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 8;  
//     int index = binarySearch(arr, size, target);
//     if (index != -1) {
//         cout << "Element " << target << " found at index " << index << endl;
//     } else {
//         cout << "Element " << target << " not found in the array" << endl;
//     }   
//     return 0;
// }





#include <iostream>

using namespace std;

// Function to perform binary search on a sorted array
// Returns the index of the target element if found, otherwise returns -1
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int count=0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            count++;
            return mid;        
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
return count; 
}


int main() {
    int arr[] = {2,3,2,4,6,8,4,3,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;  
   // int index = binarySearch(arr, size, target);
    int c = binarySearch(arr, size, target);
    
    cout << "Number of occurrences of " << target<< " in the array: " << c <<endl;
    
    

}



