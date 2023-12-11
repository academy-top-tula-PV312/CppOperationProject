#include <iostream>

int main()
{
    int a{ 48 };
    int b{ 15 };

    // arithmetic operations
    /*
    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << a / b << "\n";
    std::cout << a << " % " << b << " = " << a % b << "\n";

    std::cout << a << " / " << b << " = " << a / (float)b << "\n";

    int c{ 10 };
    std::cout << c++ << "\n";
    std::cout << c << "\n";
    */

    // comparer operations
    int begin{ 8 };
    int end{ 20 };
    int beginLunch{ 12 };
    int endLunch{ 14 };

    std::cout << "input time: ";
    int time;
    std::cin >> time;

    bool isWin;
    isWin = time >= begin && time < beginLunch || time >= endLunch && time < end;

    isWin = time >= begin && time < end && !(time >= beginLunch && time < endLunch);

    isWin = time >= begin && time < end && (time < beginLunch || time > endLunch);


    std::cout << std::boolalpha << "You win: " << isWin << "\n";
}
