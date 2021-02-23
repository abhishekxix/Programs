#include <iostream>
#include <algorithm>

int main() {
    int n{};
    std::cout << "Enter the numeber of students -> ";
    std::cin >> n;

    int *rupee = new int[n], *paise25 = new int[n], *paise50 = new int[n];
    double *fourth = new double[n];

    std::cout << "Enter the number of 1 rupee coins for " << n << " students separated by a space ->\n";

    for(int i {}; i < n; i++) {
        std::cin >> *(rupee + i);
    } 

    std::cout << "Enter the number of 50 paise coins for " << n << " students separated by a space ->\n";

    for(int i {}; i < n; i++) {
        std::cin >> *(paise50 + i);
    }

    std::cout << "Enter the number of 25 paise coins for " << n << " students separated by a space ->\n";

    for(int i {}; i < n; i++) {
        std::cin >> *(paise25 + i);
    }    
    double sum {};

    for(int i {}; i < n; i++) {
        *(fourth + i) = *(rupee + i) + 0.25 * *(paise25 + i) + 0.5 * *(paise50 + i);
        sum += *(fourth + i);
    }

    std::sort(fourth, fourth + n - 1);

    double range =  *(fourth + n - 1)- *fourth;
    double mean  = sum / n;
    double median = *(fourth + (n / 2) - 1);

    std::cout << "Range = " << range << std::endl
              << "mean = " << mean << std::endl
              << "median = " << median << std::endl;
       

    delete []rupee;
    delete []paise25;
    delete []paise50;
    delete []fourth;
    return 0;
}