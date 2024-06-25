//42 二つのint型整数の小さい方の値を返す関数を作成せよ．

#include <stdio.h>

int min2(int a, int b){
   if (a > b){
   return b;
   }
   else{
   return a;
   }
return 0;
}

int main(void){
int x;
int y;
scanf("%d", &x);
scanf("%d", &y);

printf("小さい方は%d\n", min2(x, y));

return 0;
}


//43 int型整数の4乗値を返す関数を作成せよ 

#include <stdio.h>
int sqr(int n)
{
return n * n;
}

int pow4(int x){
return sqr(x) * sqr(x);
 }

int main(void){
int number;
scanf("%d", &number);
printf("%d\n", pow4(number));
}


//44 max4 の引数を1つ増やし、五つの整数の最大値を返すように書き換えよ

#include <stdio.h>
int max2(int a, int b){ 
 return a > b ? a : b;
}
int max5(int a, int b, int c, int d, int e){
 return max2(max2(max2(a,b), max2(c,d)), e);
}
int main(void){
 int n[5];
   puts("５つの整数を入力せよ");
    for(int i = 0; i < 5; i++){
     printf("please put the number: ");
     scanf("%d", &n[i]);
     putchar('\n');
    }
    printf("最も大きい値は%dです。\n", max5(n[0], n[1], n[2], n[3], n[4]));
return 0;
}


//45 画面に「こんにちは。」と表示する関数を作成せよ 

#include <stdio.h>

void hello(void){
  puts("こんにちは");
 }
int main(void){
 hello();
 return 0;
}


//46 その桁数を表示するプログラムを関数化(部品化)せよ．
具体的には，以下の３つの処理内容(部品)ごとに分けて別の関数として定義し、正しく実行できるように変更せよ．
・キーボードから値を入力する部分
・桁数を計算する部分
・結果(桁数)を表示する部分

#include <stdio.h>

int putnumber(int number){
 do{
 printf("please put ther number: ");
 scanf("%d", &number);}while(number <= 0);
 return number;
}

int ketasu(int number){
   int i;
   for(i = 0; number > 0; i++){
   number /= 10;
   };
 return i;
}

void input(int number){
 printf("%dは%d桁の数字である\n", number, ketasu(number));
}

int main(void){
 int number;
 input(putnumber(number));
 return 0;
 }
