The converter class is a self contained rref converter. 

to use this class:
call the function rref_converter 
the args should be a 2d array of floats representing a matrix, the amount
of rows and the amount of columns. 
this has been done in the matrix.cpp file which also includes functions 
to display a 2d array of floats and free the dynamic memory used. 

how I run this code:
g++ matrix.cpp rref_functions.cpp
./a.out

This function returns a 2d array of floats representing the row reduces
matrix. 

this converter is a work in progress. At this point it has passed the 
limited amount of testing I have done and works for most edge cases. 
I am currently testing it further and working out any bugs I come across. 


backround info:
I got the idea of this process in my linear algebra class. Systems
of equations can be solved by putting the coefficients in an augmented
matrix. Row reducing a matrix makes it easier to solve. This process takes
a long amount of time to do by hand because of the amount of times
you have to rewrite the matrix for each step. I figured that this converter
could solve these problems faster than doing it by hand. 

rref stands for reduced row echelon form
the conditions for this are that all 0 rows need to be at the bottom,
the leading coefficient of a row must be 1 with all 0's ahead of it. 
pivot columns (column with a rows leading coefficient, aka pivot) 
can only have 0's in positions other than pivot position. 

This program also includes some test functions in the matrix.cpp file.
These are meant to verify that everything is working through each step. 

This is a project that I am working on for personal practice.

-Aryeh Kempler-DeLugach
