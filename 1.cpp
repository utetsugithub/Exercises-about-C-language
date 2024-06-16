//1 Hello, World!と出力する

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


// 2 整数変数 a,b を宣言する．それぞれの変数に今日の日と月を代入する．例えば, 4月25日であれば，a=25, b=4 とする．

#include <iostream>

int main(void){
        int a = 25;
        int b = 4;
                std::cout<< b << "月" << a << "日\n";
                return 0;
        }


//3 a=25, b=4 とする．この a,b の整数変数同士の加算，減算，乗算，除算，剰余を (標準出力に) 出力しなさい

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


//4 for 文を使い，1 から 10 までの整数を出力しなさい

#include <iostream>
    int main(void){
        for(int i = 1; i <= 10; i++){
            std::cout<< i <<std::endl;
        }
        return 0;
    }


//
#include <iostream>
    int main(void){
        for(int i = 1; i <= 1000; i++){
            std::cout<< i <<"\n";
        }
        return 0;
    }
