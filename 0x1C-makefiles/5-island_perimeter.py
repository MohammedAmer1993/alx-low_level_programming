#!/usr/bin/python3
''' function to calculate the primeter of the island asuming that the whole map is 100 * 100 and there is know lakes inside the island
	the island is represented by 1 and the water is represented by 0
'''


def island_perimeter(grid):
    ''' calculate the priemeter of the island
    Args:
            grid: 2d array of int
            max size of the grid is 100 * 100
    Return: int
            the priemeter
    '''
    visitied_squares = []
    for i in range(len(grid)):
        for x in range(len(grid[i])):
            if grid[i][x] == 1:
                return rec(i, x, visitied_squares, grid)


def rec(i, x, visited, grid):
    '''
    rec - recursive function to evaluate the area
    Args:
        i (int): the i coordinate
        x (int): the x coordinate
        visitiec: array of all visited points
        grid: the grid we are going throw
    Return:
        the priemeter of the island
    '''
    if [i, x] in visited:
        return 0
    else:
        res = 0
        visited.append([i, x])
        if i-1 >= 0:
            if grid[i-1][x] == 0:
                res += 1
            else:
                res += rec(i-1, x, visited, grid)
        if i+1 <= 100:
            if grid[i+1][x] == 0:
                res += 1
            else:
                res += rec(i+1, x, visited, grid)
        if x-1 >= 0:
            if grid[i][x-1] == 0:
                res += 1
            else:
                res += rec(i, x-1, visited, grid)
        if x+1 <= 100:
            if grid[i][x+1] == 0:
                res += 1
            else:
                res += rec(i, x+1, visited, grid)
    return res
