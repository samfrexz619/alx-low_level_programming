#!/usr/bin/python3
'''
get island perimeter
'''


def island_perimeter(grid):
    '''
    get the perimeter of the island
    '''
    num = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    num = num + 1
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    num = num + 1
                if col == 0 or grid[row][col - 1] == 0:
                    num = num + 1
                if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
                    num = num + 1
    return num
