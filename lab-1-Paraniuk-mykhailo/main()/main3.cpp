#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::vector<int> X = {1, 2, 3, 4, 5};
    std::vector<int> Y = {3, 4, 5, 6, 7};

    std::unordered_set<int> unionSet;

    for (int element : X) {
        unionSet.insert(element);
    }

    for (int element : Y) {
        unionSet.insert(element);
    }

    std::cout << "Елементи об'єднання: ";
    for (int element : unionSet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int element : unionSet) {
        sum += element;
    }

    std::cout << "Сума елементів об'єднання: " << sum << std::endl;

    return 0;
}