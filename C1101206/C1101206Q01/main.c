#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000

int main()
{
    //int sum = 0;
    //char ch;
    //char last_ch = 0;
    //while ((ch = getchar()) != '\n' && ch != EOF) {
    //    switch (ch) {
    //    case 'I':
    //        sum += 1;
    //        break;
    //    case 'V':
    //        if (last_ch == 'I') {
    //            sum += 4;
    //        }
    //        else {
    //            sum += 5;
    //        }
    //        break;
    //    case 'X':
    //        if (last_ch == 'I') {
    //            sum += 9;
    //        }
    //        else {
    //            sum += 10;
    //        }
    //        break;
    //    case 'L':
    //        if (last_ch == 'X') {
    //            sum += 40;
    //        }
    //        else {
    //            sum += 50;
    //        }
    //    case 'C':
    //        if (last_ch == 'X') {
    //            sum += 90;
    //        }
    //        else {
    //            sum += 100;
    //        }
    //        break;
    //    case 'D':
    //        if (last_ch == 'C') {
    //            sum += 400;
    //        }
    //        else {
    //            sum += 500;
    //        }
    //        break;
    //    case 'M':
    //        if (last_ch == 'C') {
    //            sum += 900;
    //        }
    //        else {
    //            sum += 1000;
    //        }
    //        break;
    //    }
    //    last_ch = ch;
    //}
    //printf("%d", sum);
    char test[100];
    scanf_s("%s", &test, 99);
    printf("%s", test);
    return 0;
}