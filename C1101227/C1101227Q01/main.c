#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define WIDTH 12
#define HEIGHT 12

typedef struct {
    int x;
    int y;
} Pos;

Pos pt(int, int);
void findStartPos(char[HEIGHT + 1][WIDTH + 1], Pos*);
bool findEndPos(char[HEIGHT + 1][WIDTH + 1], Pos*);
bool step(char[HEIGHT + 1][WIDTH + 1], Pos, Pos, int);
void printMaze(char[HEIGHT + 1][WIDTH + 1]);
Pos rotate(Pos, int);

Pos pt(int x, int y) {
    Pos p = { x, y };
    return p;
}

void findStartPos(char maze[HEIGHT + 1][WIDTH + 1], Pos *start_pos) {
    for (int i = 0; i < HEIGHT; i++) {
        if (maze[i][0] == 'X') {
            start_pos->x = i;
            start_pos->y = 0;
            return;
        }
    }
}

bool findEndPos(char maze[HEIGHT + 1][WIDTH + 1], Pos* end_pos) {
    for (int i = 0; i < HEIGHT; i++) {
        if (maze[i][WIDTH - 1] == 'X') {
            end_pos->x = i;
            end_pos->y = WIDTH - 1;
            return true;
        }
    }
    return false;
}

int dirs[][2] = {
    {0, 1},
    {-1, 0},
    {0, -1},
    {1, 0}
};

bool step(char maze[HEIGHT + 1][WIDTH + 1], Pos start, Pos end, int dir) {
    if (maze[start.x][start.y] == 'X') {
        maze[start.x][start.y] = 'R';
        int d;
        if (maze[end.x][end.y] != 'R' &&
            !(step(maze, rotate(start, (d = (dir + 1) % 4)), end, d) ||
            step(maze, rotate(start, (d = (dir + 4) % 4)), end, d) ||
            step(maze, rotate(start, (d = (dir + 3) % 4)), end, d) )) {
            //maze[start.x][start.y] = 'X';
        }
    }
    return maze[end.x][end.y] == 'R';
}

Pos rotate(Pos pos, int dir) {
    return pt(pos.x + dirs[dir][0], pos.y + dirs[dir][1]);
}

void printMaze(char maze[HEIGHT + 1][WIDTH + 1]) {
    for (int i = 0; i < HEIGHT; i++) {
        printf("%s", maze[i]);
        if(i != HEIGHT - 1) printf("\n");
    }
}

int main() {
    Pos pos = { 0, 0 };
    Pos start_pos = { 0, 0 };
    Pos end_pos = { 0, 0 };
    char maze[HEIGHT + 1][WIDTH + 1] = { { '\0' } };
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH + 1; j++) {
            char c = getchar();
            if (c != '\n') {
                maze[i][j] = c;
            }
        }
    }
    findStartPos(maze, &start_pos);
    bool valid = findEndPos(maze, &end_pos);
    valid &= step(maze, start_pos, end_pos, 0);
    if (valid) {
        printMaze(maze);
    }
    else {
        printMaze(maze);
        printf("\nThis maze has no solution");
    }
    return 0;
}