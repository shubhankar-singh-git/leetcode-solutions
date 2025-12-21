Intuition -

A bishop’s diagonal moves are limited by the nearest board edge in each diagonal direction.

For each diagonal:

Calculate distance to vertical edge

Calculate distance to horizontal edge

Farthest possible coordinates - (1,1), (1,8), (8,1), (8,8)

Take the smaller of row or column calculated by subtracting the farthest possible distances from it's given position

Sum all four diagonals → total moves possible from (A,B).

No loops needed, purely arithmetic → very efficient.