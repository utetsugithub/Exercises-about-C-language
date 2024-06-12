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
