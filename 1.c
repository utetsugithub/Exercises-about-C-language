//1 Hello, World!と出力する

#include <stdio.h>

int main (void){
    printf("Hello, World！\n");
    return 0;
}

//2 整数変数 a,b を宣言する．それぞれの変数に今日の日と月を代入する．例えば, 4月25日であれば，a=25, b=4 とする．

#include <stdio.h>

int a = 25;
int b = 4;

int main (void){
    printf("%d月%d日\n", b, a);
    return 0;
}


//3 a=25, b=4 とする．この a,b の整数変数同士の加算，減算，乗算，除算，剰余を (標準出力に) 出力しなさい

#include <stdio.h>

int a = 25;
int b = 4;

int add = 25 + 4;
int sub = 25 - 4;
int mlt = 25 * 4;
int div = 25 / 4;
int dpl = 25 % 4;

int main (void){
    printf(" a + b = %d\n a - b = %d\n a * b = %d\n a / b = %d\n a %% b = %d\n", add, sub, mlt, div, dpl);
    return 0;
}


//4 for 文を使い，1 から 10 までの整数を出力しなさい．

#include <stdio.h>

int main(void) {

        for(int i = 1; i <= 10; i++){
           printf("%d\n", i);}

    return 0;
}


//5 for 文を使い，1 から 1000 までの整数を出力しなさい．

#include <stdio.h>

int main(void) {

        for(int i = 1; i <= 1000; i++){
           printf("%d\n", i);}

    return 0;
}


//6 for 文を使い，1 から 1000 までの偶数を出力しなさい．

#include <stdio.h>

int main(void) {

        for(int i = 1; i <= 1000; i++){
                if(i % 2 == 0){
           printf("%d\n", i);
                }

        }
    return 0;
}


//7 for 文だけを使い，2 から 1000 までの偶数を出力しなさい．

#include <stdio.h>

int main(void) {

        for(int i = 2; i <= 1000; i += 2){
           printf("%d\n", i);

        }
    return 0;
}


//8 for 文だけを使い，1 から 1000 までの奇数を出力しなさい．

#include <stdio.h>

int main(void) {

        for(int i = 1; i <= 1000; i += 2){
           printf("%d\n", i);

        }
    return 0;
}


//9 for 文を使い，1 から 10 までの整数の和を求め，出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 1; i <= 10; i ++){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//10 for 文を使い，10 から 30 までの整数の和を求め，出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 10; i <= 30; i ++){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//11 for 文を使い，15 から 67 までの整数の和を求め，出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 15; i <= 67; i ++){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//12 for 文を使い，1 から 10 までの範囲の偶数の和を求め，出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 2; i <= 10; i += 2){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//13 for 文を使い，1 から 10 までの範囲の奇数の和を求め，出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 1; i <= 10; i += 2){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//14 for 文を使い，1 から 1000 までの範囲の 13 の倍数の数の和を求め，出力するプログラムを作>成しなさい．

#include <stdio.h>

int main(void) {

int sum;

for(int i = 13; i <= 1000; i += 13){
        sum += i;
}
    printf("%d\n", sum);
   return 0;
}


//15 for 文を二重に使い，掛け算の九九を一行毎に出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int m;
for(int i = 1; i <= 9; i ++){

        for(int j = 1; j <= 9; j++){
        m = i*j;
        printf("%d * %d = %d\n", i, j, m);
        }
}
   return 0;
}

//16 for 文を二重に使い，掛け算の九九の結果を以下のように出力するプログラムを作成しなさい．

#include <stdio.h>

int main(void) {

int m;
for(int i = 1; i <= 9; i ++){

        for(int j = 1; j <= 9; j++){
        m = i*j;
        printf("%4d", m);
        }
    printf("\n");
}
   return 0;
}

/* 17  2 から 1000 までの範囲の素数を出力するプログラムを作成しなさい．*/

#include <stdio.h>

int main(void) {

int m = 0;

for(int i = 2; i <= 1000; i ++){
        for(int j = 2; j < i; j++){
        if(i % j == 0){
        m = 1;
        }
        }
        if(m == 0){
        printf("%4d", i);
        }
m = 0;
}
  printf("\n");
   return 0;
}

/*18  整数引数 n を取り，n 回「Hello, World!\n」と表示する関数を void printNth(int n)として設計し，その動作を確認できる main() と共にプログラムを>作成しなさい．*/

#include <stdio.h>

void printNth(int n){
   for(int i = 1; i <= n; i++){
   printf("Hello, World!\n");}
}

int main(void) {

int n = 5;
printNth(n);

return 0;
}

