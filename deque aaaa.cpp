#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>

int main() {
    std::deque<int> myDeque; 
    std::srand(std::time(nullptr));
    for (int i = 0; i < 10; i++) {
        int value = std::rand() % 100; 
        myDeque.push_back(value); 
    }
    int sum = 0;
    for (int i = 0; i < myDeque.size(); i++) {
        sum += myDeque[i];
    }
    double average = (double)sum / myDeque.size(); 
    std::cout << "Average: " << average << std::endl;
    return 0;
}
