#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


#include <iostream>

int main(void){
        int a = 25;
        int b = 4;
                std::cout<< b << "月" << a << "日\n";
                return 0;
        }


#include <iostream>

int main(void){
        int a = 25;
        int b = 4;

        int add = a + b;
        int sub = a - b;
        int mlt = a * b;
        int div = a / b;
        int dpl = a % b;

        std::cout<< "a + b = "<< add << "\n"
                 << "a - b = "<< sub << "\n"
                 << "a * b = "<< mlt << "\n"
                 << "a / b = "<< div << "\n"
                 << "a % b = "<< dpl << "\n";

                return 0;
        }
