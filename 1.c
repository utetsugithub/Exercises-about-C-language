// Hello, World!と出力する

#include <stdio.h>         // 標準入出力ライブラリのヘッダファイルを読み込む

int main (void){　　　　　// 実行時main( )関数から処理が始まる
    printf("Hello, World！\n");  // ”で囲まれた文字列を表示する
    return 0;    // 正常終了として0を返す
}


// 英文で，学科名学部名大学名を出力する

#include <stdio.h>

int main (void){
    printf("Tokushima University Faculty of Engineering Intelligent Informatics Course\n");
    return 0;
}


// 英文で自己紹介を複数行で出力して，最後に改行するプログラムを作成しなさい．printf() を複数回使うこと

#include <stdio.h>

int main (void){
    printf("Hello I`m a student\n");
    printf("I`m studying in Tokushima University Faculty of Engineering Intelligent Informatics Course\n");
    printf("Thank you\n");
    return 0;
}


// 整数変数 a,b を宣言する．それぞれの変数に今日の日と月を代入する．例えば, 4月25日であれば，a=25, b=4 とする．

#include <stdio.h>

int a = 25;
int b = 4;

int main (void){
    printf("%d月%d日\n", b, a);
    return 0;
}


// a=25, b=4 とする．この a,b の整数変数同士の加算，減算，乗算，除算，剰余を (標準出力に) 出力しなさい

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

