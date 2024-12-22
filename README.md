# Search in a Row-Column Sorted matrix
Given a matrix mat[][] and an integer x, the task is to check if x is present in mat[][] or not. Every row and column of the matrix is sorted in increasing order.
Example:
       1.  Input: x = 62, mat[][] = [[3, 0, 8],
                                    [0, 5, 2],
                                    [1, 7, 6]]
           Output: false
           Explanation: 62 is not present in the matrix.
       2.  Input: x = 55, mat[][] = [[8,1,27],
                                    [38, 5, 6]]
           Output: true
           Explanation: mat[1][1] is equal to 5.

Eliminating rows or columns – 
-> O(n + m) Time 
-> O(1) Space
Cases:
1. x is equals to the current element : return true because this will end the search.
2. x is greater than the current element : it means x is not present in the current row this ensures all the elements are smaller then the current element because
   the row is sorted .Thus, the entire row gets eliminated and continues the search from the next row. 
4. x is less than the current element: This ensures that all the elements in the current column are greater than the given number. Thus, the entire column gets
   eliminated and continues the search from the previous column, i.e. the column on the immediate left.
