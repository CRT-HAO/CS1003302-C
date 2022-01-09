#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define WIDTH 12
#define HEIGHT 12

#define UP {-1, 0}
#define LEFT {0, -1}
#define DOWN {1, 0}
#define RIGHT {0, 1}

void findStartPos(char maze[WIDTH+1][HEIGHT+1], int* start_pos) {
    bool stop = false;
    for (int i = 0; i < HEIGHT && !stop; i++) {
        for (int j = 0; j < WIDTH && !stop; j++) {
            printf("%d ", maze[i][j]);
            if (maze[i][j] == 'X') {
                start_pos[0] = i;
                start_pos[1] = j;
                stop = true;
            }
        }
        printf("\n");
    }
}

int main() {
    int pos[] = { 0, 0 };
    int start_pos[] = { 0, 0 };
    char maze[WIDTH + 1][HEIGHT + 1] = { { '\0' } };
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH + 1; j++) {
            char c = getchar();
            if (c != '\n') {
                maze[i][j] = c;
            }
        }
    }
    findStartPos(maze, start_pos);
    printf("Start Pos: (%d, %d)", start_pos[0], start_pos[1]);
    return 0;
}