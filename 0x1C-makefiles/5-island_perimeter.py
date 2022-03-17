#!/usr/bin/python3
"""
Module that define the function island_perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if grid is None or grid == [[]]:
        return

    perimeter = 0
    lenght = len(grid) - 1
    width = len(grid[0] - 1)

    for i in range(1, lenght):
        for j in range(1, width):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
