#!/usr/bin/python3
"""
Module for task 5
"""


def island_perimeter(grid):
    """
        island_perimeter: will compute the perimeter of the island on grid
        args:
            grid: grid to check
    """
    perimeter = 0
    island = []
    for i in grid:
        for j in i:
            if j == 0:
                pass
            elif j == 1:
                island.append(j)
    for i in range(0, len(island)):
        if i != 0:
            if i + 1 == len(island):
                perimeter += 3
            elif i + 1 != len(island):
                perimeter += 2
        elif i == 0:
            if i != len(island):
                perimeter += 3
            elif i == len(island):
                perimeter += 4

    return perimeter
