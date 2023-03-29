#include <iostream>
#include "Add.h"
using std::cin;

int main() {
    //define variable
    int a;
    int b;
    //input
    std::cout << "Please enter the first number:";
    cin >> a;
    std::cout << "Please enter the second number:";
    cin >> b;
    int result = add(a,b);
    std::cout << "result: " << result << std::endl;
    return 0;
}
