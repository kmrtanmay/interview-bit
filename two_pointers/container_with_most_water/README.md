## Container with Most Water

#### Problem Description

Given n non-negative integers a1, a2, ..., an,
where each represents a point at coordinate (i, ai).
'n' vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).

Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Your program should return an integer which corresponds to the maximum area of water that can be contained ( Yes, we know maximum area instead of maximum volume sounds weird. But this is 2D plane we are working with for simplicity ).

Note: You may not slant the container. 
Example :

Input : [1, 5, 4, 3]
Output : 6

Explanation : 5 and 3 are distance 2 apart. So size of the base = 2. Height of container = min(5, 3) = 3. 
So total area = 3 * 2 = 6

#### Solution
- **Two Pointer Technique** is used.
- left_pointer is set at 0th position and right_pointer is set at the last position.
- At each iteration, we calculate the height, base, area for these pointers' position.
- If previous maximum is smaller than the present area, max is set at current max.
- Then the minimum of the heights of two pointers is found.
- if the height of the left pointer is minimum then we will increment the left pointer else decrement the right pointer

#### Time complexity- O(N)
#### Space Complexity- O(1)
