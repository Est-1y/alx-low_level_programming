#!/usr/bin/python3

"""
Island Perimeter module
"""

def island_perimeter(grid):
    """
    Calculate the perimeter.
    """
    c = 0
    length = len(grid)
    width = len(grid[0])

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    c += 1
                if i == length - 1 or grid[i + 1][j] == 0:
                    c += 1
                if j == 0 or grid[i][j - 1] == 0:
                    c += 1
                if j == width - 1 or grid[i][j + 1] == 0:
                    c += 1
    return c
