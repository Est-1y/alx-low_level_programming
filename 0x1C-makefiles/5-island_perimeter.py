#!/usr/bin/python3

"""
Island Perimeter module
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in a grid.

    Args:
        grid (list of list of int): A 2D grid where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Add 4 for each land cell.
                perimeter += 4

                # Subtract 1 for each adjacent land cell.
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
