#include <iostream>

int Policz (int a, int b) {
    return a * b;
}

int main() {



    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";
    std::cout << "W pierwszym branchu; 2*3=" << Policz(2, 3) << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}