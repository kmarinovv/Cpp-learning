#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <list>

// int main() {
//     std::vector<double> squareRoots;

//     for (int i = 0; i < 100; i++) {
//         squareRoots.push_back(sqrt(i));
//     }

//     std::vector<char> letters {'x', 'y', 'z'};
//     std::vector<char> otherLetters = {'x', 'y', 'z'};

//     return 0;
// }

// #include <iostream>
// #include <vector>


///////////////second demo////////////////////////////////////////////////////
// void print(std::vector<int> numbers) {
//     for (int i = 0; i < numbers.size(); i++) {
//       std::cout << numbers[i] << " ";
//     }
//     std::cout << std::endl;
    
// }

// void printMultiplied(std::vector<int> numbers, int multiplier) {
//     for (int i = 0; i < numbers.size(); i++) {
//         numbers[i] *= multiplier;
//     }
//     print(numbers);
//     numbers.clear();
// }

// int main() {
//     std::vector<int> numbers {1, 2, 3};
//     printMultiplied(numbers, 10); /// 10, 20, 30
//     print(numbers); /// 1, 2, 3
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <cmath>


////////////////////////////////////////////////////////////third demo////////////////////////////////////
// std::vector<double> getSquareRoots(int from, int to) {
//     std::vector<double> roots;
//     for (int i = from; i <= to; i++) {
//         roots.push_back(sqrt(i));
//     }

//     return roots;
// }

// void print(std::vector<double> numbers) {
//     for (int number : numbers) {
//         std::cout << number << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//     print(getSquareRoots(4, 25));
//     std::cerr << "Why is the output incorrect?" << std::endl;
//     return 0;
// }


/////fourth demo/////////

// int main() {
//   // Reads numbers until "end" is entered, then shows
//   // the maximum abs difference between any two elements

//   std::vector<int> numbers;

//   std::string itemString;
//   std::cin >> itemString;
//   while (itemString != "end") {
//     std::stringstream itemParser(itemString);
//     int itemValue;
//     itemParser >> itemValue;

//     numbers.push_back(itemValue);

//     std::cin >> itemString;
//   }

//   int maxAbsDifference = 0;
//   for (unsigned long a = 0; a < numbers.size(); a++) {
//     for (unsigned long b = 0; b < numbers.size(); b++) {
//       const int currentDiff = numbers[a] - numbers[b];
//       if (currentDiff > maxAbsDifference) {
//         maxAbsDifference = currentDiff;
//       }
//     }
//   }

//   std::cout << "max abs difference: " << maxAbsDifference << std::endl;

//   std::cerr << "But how to find this messy main file?!?" << std::endl;

//   return 0;
// }

//////////////fifth demo///////////////////////////

// void print(const std::vector<int> &numbers) {
//   for (int number : numbers) {
//     std::cout << number << " ";
//   }
//   std::cout << std::endl << std::endl;
// }

// void findAndPrintElement(const std::vector<int> &numbers, int element) {
//   std::cout << "Element: " << element << ' ';

//   std::vector<int>::const_iterator it = std::find(numbers.begin(),numbers.end(), element);
//   if (it == numbers.end()) {
//     std::cout << "not found" << std::endl;
//   } else {
//     std::cout << "found at index: " << it - numbers.begin() << std::endl;
//   }
// }

// int main() {
//   std::vector<int> numbers { 1, -4, 13, 8 };
//   findAndPrintElement(numbers, 7);
//   findAndPrintElement(numbers, 8);

//   std::sort(numbers.begin(), numbers.end());
//   findAndPrintElement(numbers, 8);
//   print(numbers);

//   std::sort(numbers.begin(), numbers.end(), std::less<int>());
//   findAndPrintElement(numbers, 8);
//   print(numbers);

//   std::sort(numbers.begin(), numbers.end(), std::greater<int>());
//   findAndPrintElement(numbers, 8);
//   print(numbers);

//   return 0;
// }



int main() {
    std::list<int> numbers {1, 3, 5};

    // points to AFTER 5
    std::list<int>::iterator lastItemIter = numbers.end();
    lastItemIter--; // points to 5 now
    numbers.insert(lastItemIter, 4);

    // adds to the end - same as numbers.insert(numbers.end(), 6);
    numbers.push_back(6);

    std::list<int>::iterator secondItemIter = numbers.begin(); // points to 1
    secondItemIter++; // points to 3 now
    numbers.insert(secondItemIter, 2);

    // inserts at start - same as numbers.insert(numbers.begin(), 0);
    numbers.insert(numbers.begin(), 0);

    // prints 0 1 2 3 4 5 6
    for (int number : numbers) {
        std::cout << number << " ";
    }

    // By the way, if you replace std::list with std::vector at the start,
    // the printed result will be EXACTLY the same,
    // except that you need to use insert instead of push_front
    // (but operations will be slower, because vector insert is O(N), not O(1)).
    // That's the point of iterators and data structures -
    // they abstract-away the implementation details

    return 0;
}






