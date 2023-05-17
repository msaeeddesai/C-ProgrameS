/*#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    const int size = 10;
    std::vector<int> numbers(size);

    std::cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    std::cout << "Numbers in descending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
} */


/*#include <iostream>
#include <algorithm>

int main() {
    int num[10], i;

    std::cout << "\n\t Descending Order Sorting";
    std::cout << "\n\t==================================";

    std::cout << "\n\t Enter any 10 numbers: ";

    for (i = 0; i < 10; i++) {
        std::cin >> num[i];
    }

    std::sort(num, num + 10, std::greater<int>());

    std::cout << "\n\t Numbers in Descending Order:\n";

    for (i = 0; i < 10; i++) {
        std::cout << "\n\t\t\t\t" << num[i];
    }

    return 0;
}*/





/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[10], i;

    cout << "\n\tDescending Order Sorting";
    cout << "\n\t==================================";

    cout << "\n\tEnter any 10 numbers: ";

    for (i = 0; i < 10; i++) {
        cin >> num[i];
    }

    sort(num, num + 10, greater<int>());

    cout << "\n\tNumbers in Descending Order:\n";

    for (i = 0; i < 10; i++) {
        cout << "\n\t\t\t\t" << num[i];
    }

    return 0;
}*/



