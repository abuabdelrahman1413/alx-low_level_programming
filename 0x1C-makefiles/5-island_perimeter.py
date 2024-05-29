#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter

    Args:
        grid (list): list of list of integers
    Returns:
        int: perimeter
    """
    perimeter = 0
    connections = 0
    # iterate
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4

                # top check
                if i != 0 and grid[i - 1][j] == 1:
                    connections += 1
                # left check

                if j != 0 and grid[i][j - 1] == 1:
                    connections += 1
    return perimeter - (connections * 2)
