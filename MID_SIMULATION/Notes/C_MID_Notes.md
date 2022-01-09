# C MID Notes

## 輾轉相除法 Euclidean Algorithm

找最大公因數

```c
int mygcd(unsigned long a, unsigned long b) {
    while ((a %= b) && (b %= a));
    return a + b;
}
```

## 河內塔 Hanoi Tower

```c
void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        move(n, a, b, c);
    } else {
        hanoi(n - 1, a, c, b);
        move(n, a, b, c);
        hanoi(n - 1, b, a, c);
    }
}
```

## 矩陣相乘 Matrix Multiplication

![image-20211129005055325](C:\Users\m8317\VS_NTUST_Tests\MID_SIMULATION\Notes\Img\image-20211129005055325.png)

```c
int result[100][100];
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
        result[i][j] = 0;
        for (int k = 0; k < rows; k++) {
            result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}
```

## 矩陣相加 Matrix Addition

```c
int sum[100] = {0};
for (int i = 0; i < matries_num; i++) {
    for (int j = 0; j < (rows * rows); j++) {
        sum[j] += matrix[i][j];
    }
}
```

## 醜數 Ugly Number

能被2, 3, 5整除的就是醜數

```c
bool isUgly(int num) {
	if (num <= 0) return false;
	while ((num % 2) <= 0) num /= 2;
	while ((num % 3) <= 0) num /= 3;
	while ((num % 5) <= 0) num /= 5;
	return num == 1;
}
```

## 二進制轉十進制 Binary To Decimal

### 字串版本 String Ver.

```c
unsigned long binaryStringToInt(char* str) {
    char* start = &str[0];
    unsigned long total = 0;
    while (*start) {
        total *= 2;
        if (*start++ == '1') total += 1;
        printf("%d\n", total);
    }
    return total;
}
```

### 數字版本 Numeric Ver.

```c
int binaryIntToInt(unsigned long num) {
    int dec = 0;
    int i = 0;
    while (num != 0) {
        unsigned long rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
```

## 十進制轉二進制 Decimal To Binary

```c
long long convertDecimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0) {
        remainder = n%2;
        printf("Step %d: %d/2, 餘數 = %d, 商 = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}
```

## 金字塔

```c
width = 1;
for (int i = 0; i < height; i++) {
    for (int j = 0; j < height - i - 1; j++) {
        printf(" ");
    }
    for (int j = 0; j < width; j++) {
        printf("*");
    }
    printf("\n");
    width += 2;
}
```



## Quiz 1

![IMG_8300](Img\IMG_8300.JPG)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int height, width;
	scanf("%d", &height);
	width = height * 2 - 1;
	for (int i = 0; i < height - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
		width -= 2;
	}
	width = 1;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
		width += 2;
	}
	return 0;
}
```

## Quiz 2

![IMG_8301](Img\IMG_8301.JPG)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {
	if (num <= 0) return false;
	while ((num % 2) <= 0) num /= 2;
	while ((num % 3) <= 0) num /= 3;
	while ((num % 5) <= 0) num /= 5;
	return num == 1;
}

int main() {
	int num;
	scanf("%d", &num);
	if (isUgly(num)) {
		printf("It is an ugly number.");
	}
	else {
		printf("It is not an ugly number.");

	}
	return 0;
}
```

## Quiz 3

![IMG_8302](Img\IMG_8302.JPG)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}
	int repeat[10];
	int n = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num[i] == num[j] && i != j) {
				bool repeated = false;
				for (int k = 0; k < n; k++) {
					if (num[i] == repeat[k]) {
						repeated = true;
						break;
					}
				}
				if (!repeated) {
					repeat[n] = num[i];
					n++;
					break;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += repeat[i];
	}
	printf("%d", sum);
	return 0;
}
```

## Quiz 4

![IMG_8303](Img\IMG_8303.JPG)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int rows;
	int matrix1[100][100];
	int matrix2[100][100];
	scanf_s("%d", &rows);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			scanf_s("%d", &matrix1[i][j]);
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			scanf_s("%d", &matrix2[i][j]);
		}
	}
	int result[100][100];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			result[i][j] = 0;
			for (int k = 0; k < rows; k++) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d", result[i][j]);
			if (j == rows - 1) {
				if(i != rows - 1) printf("\n");
			}
			else {
				printf(" ");
			}
		}
	}
	return 0;
}
```

## Quiz 5

![IMG_8304](Img\IMG_8304.JPG)

![IMG_8305](Img\IMG_8305-16381172706521.jpg)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int matries_num, rows;
	int matrix[100][100];
	scanf_s("%d", &matries_num);
	scanf_s("%d", &rows);
	for (int i = 0; i < matries_num; i++) {
		for (int j = 0; j < (rows * rows); j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	// sum
	int sum[100];
	for (int i = 0; i < 100; i++) sum[i] = 0;
	for (int i = 0; i < matries_num; i++) {
		for (int j = 0; j < (rows * rows); j++) {
			sum[j] += matrix[i][j];
		}
	}
	for (int i = 0; i < (rows * rows); i++) {
		printf("%d", sum[i]);
		if ((i + 1) % rows == 0 && i != (rows * rows) - 1) {
			printf("\n");
		}
		else {
			printf(" ");
		}
	}
	return 0;
}
```

## Quiz 6

![IMG_8305_2](Img\IMG_8305_2.jpg)

```c
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	char num_str[31];
	scanf_s("%s", &num_str, 30);
	unsigned long odd_sum = 0, even_sum = 0;
	for (int i = 0; i < 30; i++) {
		if (num_str[i] == 0) break;
		if ((i + 1) % 2 == 0) {
			odd_sum += num_str[i] - '0';
		}
		else {
			even_sum += num_str[i] - '0';
		}
	}
	unsigned long diff = odd_sum - even_sum;
	if (diff % 11 == 0) {
		printf("%s ia a mutiple of 11.", num_str);
	}
	else {
		printf("%s is not a mutiple of 11.", num_str);
	}
	return 0;
}
```