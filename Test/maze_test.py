WIDTH = 12
HEIGHT = 12

directions = [
    (0, 1), # Right
    (-1, 0), # Up
    (0, -1), # Left
    (1, 0), # Down
]

def findStartPos(maze: list[list[chr]]) -> tuple[int, int]:
    for i in range(len(maze)):
        for j in range(len(maze[i])):
            if maze[i][j] == 'X':
                return (i, j)

def step(maze: list[list[chr]], start: tuple[int, int], end: tuple[int, int]):
    pos = start
    d = 0
    while True:
        printMaze(new_maze)
        print()
        if pos == end: return
        # if maze[pos[0]][pos[1]] == 'X':
        #     maze[pos[0]][pos[1]] = 'R'
        maze[pos[0]][pos[1]] = 'R'
        for i in range(len(directions)):
            new_pos = (pos[0] + directions[d][0], pos[1] + directions[d][1])
            print(new_pos)
            if maze[new_pos[0]][new_pos[1]] != '#':
                pos = new_pos
                break
            if i == len(directions) - 1: return
            d += 1
            if d > len(directions) - 1: d = 0

def findStartPos(maze: list[list[chr]]) -> tuple[int, int]:
    for i in range(len(maze)):
        if maze[i][0] == 'X': return (i, 0)

def findEndPos(maze: list[list[chr]]) -> tuple[int, int]:
    for i in range(len(maze)):
        if maze[i][len(maze[i]) - 1] == 'X': return (i, len(maze[i]) - 1)

def printMaze(maze: list[list[chr]]):
    for a in maze:
        for b in a:
            print(b, end='')
        print()

if __name__ == '__main__':

    maze = list()

    for i in range(HEIGHT):
        maze.append( list( input() )[:WIDTH] )

    new_maze = maze.copy()
    print(maze)

    start_pos = findStartPos(maze)
    end_pos = findEndPos(maze)

    print(start_pos)
    print(end_pos)

    step(maze, start_pos, end_pos)

    printMaze(new_maze)