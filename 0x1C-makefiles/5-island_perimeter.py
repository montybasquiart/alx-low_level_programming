#!/usr/bin/python3
def island_perimeter(grid):
    """A Function that returns the perimeter of the island described in grid.

    Args:
    grid (List[List[List[int]]): The grid representing the island
    with 0 as water and 1 as land.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - Grid is rectangular with width and height not exceeding 100.
    - Island is surrounded by water with no internal lakes.

    """
    perimeter = 0
    
    for waterzone in range(len(grid)):
        for landzone in range(len(grid[0])):
            if grid[waterzone][landzone] == 1:
                perimeter += 4
                if waterzone > 0 and grid[waterzone - 1][landzone] == 1:
                    perimeter -= 2
                if landzone > 0 and grid[waterzone][landzone - 1] == 1:
                    perimeter -= 2
    return perimeter
