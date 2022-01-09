WIDTH = 12
HEIGHT = 12

directions = [
    (-1, 0), # Up
    (0, -1), # Left
    (1, 0), # Down
    (0, 1) # Right
]

def findStartPos(maze: list[list[chr]]) -> tuple[int, int]:
    for i in range(len(maze)):
        for j in range(len(maze[i])):
            if maze[i][j] == 'X':
                return (i, j)

current_dir = 0
def step(maze: list[list[chr]], pos: tuple[int, int]):
    global current_dir
    d = directions[current_dir]
    print(d)
    new_pos = (pos[0] + d[0], pos[1] + d[1])
    if maze[new_pos[0]][new_pos[1]] != '#':
        new_maze[new_pos[0]][new_pos[1]] = 'R'
    else:
        current_dir += 1
        if current_dir > len(directions) - 1: current_dir = 0
    if new_pos[1] != WIDTH - 1 and new_pos[1] != 0:
        step(maze, new_pos)
    # return new_pos


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
    pos = start_pos

    print(start_pos)

    step(maze, pos)

    printMaze(new_maze)