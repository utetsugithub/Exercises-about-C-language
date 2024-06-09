/*19 整数引数 a と b を取り，その和 (a + b) を返す関数を，int add(int a, int b) と>して設計し，その動作を確認できる main() と共にプログラムを作成しなさい*/

#include <stdio.h>

int add(int a, int b);

int add(int a, int b){
        int m = 0;
        m = a + b;
        return m;
}

int main(void){
        int i, j = 0;

        i = add(3, 4);
        j = add(6, 88);

        printf("a(3, 4) = %d\na(6, 88) = %d\n", i, j);
        return 0;
}


/*20 整数引数 a と b を取り，その差 (a − b) を返す関数を，int sub(int a, int b) と>して設計し，その動作を確認できる main() と共にプログラムを作成しなさい*/

#include <stdio.h>

int sub(int a, int b);

int sub(int a, int b){
        int m = 0;
        m = a - b;
        return m;
}

int main(void){
        int i, j = 0;

        i = sub(3, 4);
        j = sub(6, 88);

        printf("a(3, 4) = %d\na(6, 88) = %d\n", i, j);
        return 0;
}


/*21 整数引数 m を取り，m の自乗 (二乗) を返す関数を，int square(int m) として設計>し，その動作を確認できる main() と共にプログラムを作成しなさい．*/

#include <stdio.h>

int square(int a);

int square(int a){
        int m = 0;
        m = a * a;
        return m;
}

int main(void){

        int i, j = 0;

        i = square(3);
        j = square(6);

        printf("square(3) = %d\nsquare(6) = %d\n", i, j);
        return 0;
}

/*22 整数引数 a と b を取り，その商 (a ÷ b) を返す関数を，double div(int a, int b) として設計し，その動作を確認できる main() と共にプログラムを作成しなさい*/

#include <stdio.h>

double div(int a, int b);

double div(int a, int b){
        double m = 0;
        m = a / (double)b;
        return m;
}

int main(void){

        double i, j = 0;

        i = div(9, 6);
        j = div(56, 9);

        printf("div(9, 6) = %f\ndiv(56, 8) = %f\n", i, j);
        return 0;
}


/*23 倍精度浮動小数点数引数 a と b を取り，その商 (a÷b) を返す関数を，double div(double a, double b)として設計し，その動作を確認できる main() と共にプログラムを作>成しなさい．*/

#include <stdio.h>

double ave(int a, int b);

double ave(int a, int b){
        double m = 0;
        m = (a + b) / (double)2;
        return m;
}

int main(void){

        double i, j = 0;

        i = ave(9, 6);
        j = ave(56, 9);

        printf("ave(9, 6) = %f\nave(56, 8) = %f\n", i, j);
        return 0;
}
