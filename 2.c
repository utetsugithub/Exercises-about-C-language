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



/*27 整数値を読み込んで，その数が10で割り切れるかどうかを表示するプログラムを作成せよ．なお，表示後にもう一度続けるかどうか確認し，それに応じて何度でも好きなだけ繰り返せるようにせよ．*/

#include <stdio.h>
 int main(void){
 　int j;
 　　while(j){
 　　　int number;
 　　　int repition;
 　　　int choice;
 　　　　printf("数字を入力してください: ");
 　　　　scanf("%d", &number);
 　　　　　if(number % 10 == 0){
 　　　　　　printf("10で割り切れる\n");
 　　　　　}
 　　　　　　else{
 　　　　　　　printf("10で割り切れない\n");
 　　　　　　}
 　　　　　　　printf("もう一度やりますか(Yes/1,No/0)\n");
         　　　scanf("%d", &choice);
 　　　　　　　　if(choice == 1){
	 　　　　　　　j = 1;
 　　　　　　　　}
 　　　　　　　　　else{
 　　　　　　　　　　　j = 0;
 　　　　　　　　　　　}
　　　　　}
 　　return 0;
 }



/*28 二つの整数値を読み込んで，小さい方の数以上で大きい方の数以下の全整数を加えた値を表示するプログラムを作成せよ.*/

#include <stdio.h>
 int main(void){
  int a, b;
  int sum = 0;
   printf("整数値a:");
   scanf("%d", &a);
   printf("整数値b:");
   scanf("%d", &b);
    int min = a < b ? a : b;
    int max = a > b ? a : b;
     int i = min;
      do{
	sum += i;
	i++;
        }while(i <= max);
	 printf("%d以上%d以下の総計は%d", min, max, sum);
return 0;
}



/*29 について、繰り返すかどうかを尋ねるのではなくて，読み込んだ整数値が偶数だったら繰り返すようにせよ*/

#include <stdio.h>

int main(void)

{
    int nu;
    int retry;

        do {

        printf("整数を入力せよ。：");
        scanf("%d", &nu);

        if (nu == 0)
            puts("その数は０です。");
        else if (nu > 0)
            puts("その数は正です。");
        else
            puts("その数は負です。");

        if(nu % 2 != 0){
                retry = 1;
        }
        else{
               retry = 0;
        }

    } while (!(retry != 0));

    return 0;
}



//30 0が読み込まれるまで，複数の整数値を読み込み，その中の最大値を表示するプログラムを作成せよ

#include <stdio.h>

   int main(void){
       int n = 1;
       int i;
       int max = 0;

       while(n){
	   printf("整数を入れてください:");
	   scanf("%d", &i);
         if (max < i){
          max = i;
	}   
	   if (i == 0){
	       n = 0;
         }   
	  }
	 
	 printf("最大の数字は%d\n", max);
   return 0;
   }



//31 1234567890を繰り返し表示するプログラムを作成せよ．読み込まれた整数値の個数だけ数字を表示すること(forを使用すること)

#include <stdio.h>
 int main(void){
  int number;
   printf("please input the number: ");
   scanf("%d", &number);
    for(int i = 1; i <= number; i++){
     printf("%d", i % 10);
    }
    printf("\n");
 return 0;
}



//32 （桁数の確認にwhileを使用すること）正の整数値を読み込んで，その桁数を表示するプログラムを作成

#include <stdio.h>
int main(void)
{
 int number;
 int grew = 0;
 int loop;
  printf("please input the number:");
  scanf("%d", &number);
   while(number < 1){
    printf("please input the number:");
    scanf("%d", &number);
   }
     loop = number;
      while(loop > 0){
       loop /= 10;
       grew++;
     }
        printf("%dは%d桁の数\n", number, grew);
return 0;
}



//33 読み込まれた整数値以下の２乗値を表示するプログラムを作成せよ(forを使用すること)

#include <stdio.h>
int main(void){
 int number = 0;
 printf("please input the number:");
 scanf("%d", &number);
  if(number > 0){
   for(int i = 1; i <= number; i++)
    printf("%dの2乗は%d\n", i, i*i);
  }
     else if(number < 0){
      for(int i = -1; i >= number; i--)
       printf("%dの2乗は%d\n", i, i*i);
  }
        else{
         printf("0の2乗は0\n");
        }
return 0;
}


//34 読み込まれた整数値以下である正の偶数を順に表示するプログラムを作成せよ(whileを使用すること)

#include <stdio.h>
 int main(void){

  int number;
  int i = 2;
   printf("please input the number: ");
   scanf("%d", &number);
    while(i <= number){
     printf("%d", i);
      putchar(' ');
       i += 2;
    };
     putchar('\n');
 return 0;
 }


//35 読み込んだ整数の段数をもつピラミッドを表示するプログラムを作成せよ

#include <stdio.h>

int main(void)
{
 int a;
 int b;
 int c;
 printf("層数を入力して: ");
 scanf("%d", &c);
 
 for(int a = 1; a <= c; a++){
  for(int b = 1; b <= c - a; b++){
  putchar(' ');
  }
   for(int b = 1; b <= (a-1)*2+1; b++){
   putchar('*');
   }
   putchar('\n');
 }

 return 0;
}


//36  forループを用いて int 型の配列v[ i ] に先頭から順に　0, 1, 2, 3, 4　と代入し，表示せよ.

#include <stdio.h>
 int main(void){
   int i;
   int v[4];
    for(int i = 0; i < 5; i++)
    {
     v[i] = i;
     printf("%d\n", v[i]);
      }
 return 0;
 }


//37  配列aの要素の並びを逆順にしたものをbにコピーして表示するプログラムを作成せよ．なお，表示時に順番を変えるのではなく，配列bにコピー（代入）するときに順番を変えること．

#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for( i = 0; i < 5; i++ ){
        b[ 4 - i ] = a[ i ];
    }

    puts(" a b");
    puts("------");
    for( i = 0; i < 5; i++ ){
        printf("%4d%4d\n", a[ i ],b[ i ] );
    }
    return 0;
}


//38 配列4個とその判定配列

#include <stdio.h>

int main(void)
{
int i;
int x[4]; /* 配列の要素数を4に変更 */

for (i = 0; i < 4; i++) { /* 要素に値を読み込む */
printf("x[%d] : ", i);
scanf("%d", &x[i]);
}

for (i = 0; i < 2; i++) { /* 要素数に合わせて修正 */
int temp = x[i];
x[i] = x[3 - i];
x[3 - i] = temp;
}

puts("反転しました。");
for (i = 0; i < 4; i++) /* 要素の値を表示 */
printf("x[%d] = %d\n", i, x[i]);

return 0;
}


//39 38の問題文のプログラムについて，配列の要素数をオブジェクト形式マクロで定義するように変更したプログラムを作成せよ 

#include <stdio.h>

#define number 7

int main(void)
{
int i;
int x[number]; /* 配列の要素数を4に変更 */

for (i = 0; i < number; i++) { /* 要素に値を読み込む */
printf("x[%d] : ", i);
scanf("%d", &x[i]);
}

for (i = 0; i < number/2; i++) { /* 要素数に合わせて修正 */
int temp = x[i];
x[i] = x[6 - i];
x[6 - i] = temp;
}

puts("反転しました。");
for (i = 0; i < number; i++) /* 要素の値を表示 */
printf("x[%d] = %d\n", i, x[i]);

return 0;
}


//40 ２回分の点数の合計を求める
#include <stdio.h>

int main(void)
{
int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
int sum[4][3]; // 合計

for (int i = 0; i < 4; i++) { // ４人分の
for (int j = 0; j < 3; j++) // ３科目の
sum[i][j] = (tensu1[i][j] + tensu2[i][j]); // ２回分を加算
}


//40 個人ごとの点数に対し，合計点と平均点を出す
	
// １回目の点数を表示
puts("１回目の点数");
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 3; j++)
printf("%4d", tensu1[i][j]);
putchar('\n');
}

// ２回目の点数を表示
puts("２回目の点数");
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 3; j++)
printf("%4d", tensu2[i][j]);
putchar('\n');
}

// 合計点を表示
puts("合計点");
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 3; j++)
printf("%4d", sum[i][j]);
putchar('\n');
}

// 平均点を表示
puts("平均点");
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 3; j++)
printf("%5.1f", sum[i][j]/(double)2);
putchar('\n');
}

return 0;
}


//41 ２次元配列aを2x2の行列とした時，aの転置行列bを作成せよ


#include <stdio.h>

int main(void)
{
    int a[2][2], b[2][2];

    scanf("%d",&a[0][0]);
    scanf("%d",&a[0][1]);
    scanf("%d",&a[1][0]);
    scanf("%d",&a[1][1]);
    
   printf("a\n");
   printf("%d %d\n",a[0][0],a[0][1]);
   printf("%d %d\n",a[1][0],a[1][1]);

/* ここを埋めて完成させよ*/
   b[1][0] = a[0][1];
   b[0][1] = a[1][0];
   b[0][0] = a[0][0];
   b[1][1] = a[1][1];
   printf("b\n");
   printf("%d %d\n",b[0][0],b[0][1]);
   printf("%d %d\n",b[1][0],b[1][1]);

    return 0;
}
