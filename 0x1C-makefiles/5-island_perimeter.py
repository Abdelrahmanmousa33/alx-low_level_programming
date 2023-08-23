#!/usr/bin/python3
""" Island parameter problem"""


def island_perimeter(grid):
    """calculates an island parameter in a grid"""
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    for i in range(0, height):
        for j in range(0, width):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i - 1][j] == 1:
                    perimeter -= 2
                if grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
