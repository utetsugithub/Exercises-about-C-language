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



/*24 4つの整数を入力し，その平均値を実数で表示せよ*/

#include <stdio.h>

int main(void){
    int a[4], sum = 0; 
    for(int i = 0; i <= 3; i++){
        printf("%d個目の整数: \n", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("平均は%f", sum / (double)4);
    return 0;
}



/*25 入力された２つの数字a,bを，a月b日と考え，１年の何日目かを表示せよただしaは1〜3の値とし，うるう年は考えない（２月は２８日までとする）*/

#include <stdio.h>
	
 int main(void){
  int a = 0, b = 0;
   printf("please put month and day:\n");
    scanf("%d %d", &a, &b);
     printf("%d月%d日\n", a, b);
    
     switch(a){
      case 1:
       printf("%d日目", b);
       break;
        case 2:
         printf("%d日目", 31+b);
	 break;
	  case 3:
           printf("%d日目", 59+b);
	   break;
	    case 4:
             printf("%d日目", 90+b);
	     break;
              case 5:
               printf("%d日目", 120+b);
	       break;
                case 6:
                 printf("%d日目", 151+b);
		 break;
       case 7:
       printf("%d日目", 181+b);
       break;
        case 8:
         printf("%d日目", 212+b);
         break;
          case 9:
           printf("%d日目", 243+b);
           break;
            case 10:
             printf("%d日目", 273+b);
             break;
              case 11:
               printf("%d日目", 304+b);
               break;
                case 12:
                 printf("%d日目", 334+b);
                 break;


     } 
     return 0;	
	}



/*26 if文でなくswitchを用いて書き換えよ*/

#include <stdio.h>

int main(void)
{
int month;

printf("何月ですか：");
 scanf("%d", &month);

 switch (month){
  case 3:
   case 4:
    case 5:
     printf("%d月は春です。\n", month);
      break;
       case 6:
        case 7:
         case 8:
          printf("%d月は夏です。\n", month);
           break;
            case 9:
             case 10:
              case 11:
               printf("%d月は秋です。\n", month);
                break;
                 case 1:
                  case 2:
                   case 12:
                    printf("%d月は冬です。\n", month);
                     break;
                　　　default:
                　　　　printf("%d月はありませんよ!!\a\n", month);
                        　break;
                        　　　　}
        return 0;
}
