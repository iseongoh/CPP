#include <iostream>

int main() 
{
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int space = 0; space < n - i; space++) {
           std::cout << "   ";
        }

        for (int j = i; j >= 1; j--) {
           std::cout << j << "  ";
        }

        std::cout << "\n";
    }

    return 0;
}