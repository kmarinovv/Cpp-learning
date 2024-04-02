#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

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




