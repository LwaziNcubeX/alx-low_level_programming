#!/usr/bin/python3
"""
5. Island Perimeter
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid: a list of list of integers representing the island.
              0 represents a water zone.
              1 represents a land zone.

    Returns:
        An integer representing the perimeter of the island.
    """
    if not grid:
        return 0

    width = len(grid[0])
    height = len(grid)

    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if row == 0 or row == height - 1:
                    perimeter += 1

                if col == 0 or col == width - 1:
                    perimeter += 1

                if col > 0 and grid[row][col - 1] == 0:
                    perimeter += 1

                if col < width - 1 and grid[row][col + 1] == 0:
                    perimeter += 1

                if row > 0 and grid[row - 1][col] == 0:
                    perimeter += 1

                if row < height - 1 and grid[row + 1][col] == 0:
                    perimeter += 1

    return perimeter
