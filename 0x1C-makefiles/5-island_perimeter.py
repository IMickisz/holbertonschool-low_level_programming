#!/usr/bin/python3
"""
Module that define the function island_perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if grid is None or grid == [[]]:
        return

    perimeter = 0
    lenght = len(grid)
    width = len(grid[0])

    for i in range(lenght):
        for j in range(width):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
