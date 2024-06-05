#!/usr/bin/python3
def island_perimeter(grid):
    """A Function that returns the perimeter of the island described in grid.

    Args:
    grid (List[List[List[int]]): The grid representing the island
    with 0 as water and 1 as land.

    Returns:
    int: The perimeter of the island.

    Constraints:
    Grid is rectangular with width and height not exceeding 100.
    Island is surrounded by water with no internal lakes.

    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0
    
    for waterzone in range(height):
        for landzone in range(width):
            if grid[waterzone][landzone] == 1:
                perimeter += 1
                if (waterzone > 0 and grid[waterzone - 1][landzone] == 1):
                    edges += 1
                if (landzone > 0 and grid[waterzone][landzone - 1] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
