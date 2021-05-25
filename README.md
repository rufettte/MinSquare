## MinSquare

### Task
Placing multiple rectangles into a square with minimum size.
### Note
No rotation transformation is applied to any of the rectangles during placement.
### Algorithm
1) Sort the rectangles in descending order w.r.t the width length.
2) Find the optimal field to place each of the rectangles.
    - look to the right side of the previously placed rectangles</item>
    - look to the bottom side of the previously placed rectangles
    - choose the best option with minimum square size
