#include <iostream>

int Recursive_Factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * Recursive_Factorial(n - 1);
    }
}

void Iterative_Factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    std::cout << std::endl << result << std::endl;
}

int main() {
    std::cout << "// Choose an option:" <<
        "\n[1]: iterative factorial" <<
        "\n[2]: recursive factorial\n" << std::endl;

    int choice;
    std::cin >> choice;

    system("cls");
    if (choice == 1) {
        std::cout << "Enter a number: ";
        int num;
        std::cin >> num;
        Iterative_Factorial(num);
    }

    if (choice == 2) {
        std::cout << "Enter a number: ";
        int num;
        std::cin >> num;
        std::cout << std::endl << Recursive_Factorial(num) << std::endl;
    }

    std::cin.ignore();
    std::cin.get();
    return 0;
}