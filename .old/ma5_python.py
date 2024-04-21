from numpy import matrix
from numpy.linalg import det 
from sympy import Matrix as smatrix
from sympy import symbols
from sympy import det as sdet 

# Teht. 1 Transpoosit

A = matrix([[4, 9, 0], [-3, 7, -11]]) 

print("A:n transpoosi: ") 
print(A.transpose()) 

B = matrix([[8, 9],
	[-3, 12],
	[0, -1],
	[7, 1]])
print("\nB:n transpoosi: ")
print(B.transpose()) 

# Teht. 2 Determinantit
# 1.
# a

matrix_1 = matrix([[5, -6], [8, 10]])
print(f"\n\nmatrix_1:n determinantti on: {det(matrix_1)}")

# b
x = symbols("x")
matrix_2 = smatrix([[1-1*x, -1*x], [1*x, 1-1*x]])

print("matrix_2:n determinantti on: ", sdet(matrix_2)) 

# 2.
# a

matrix_3 = matrix([[2, 3, 4],
		[-2, -1, 1],
		[5, 3, 2]])
print("\nmatrix_3:n determinantti on: ", det(matrix_3))

# b
matrix_4 = matrix([[3, 15, 7],
		[0, -4, 0],
		[3, 2, 3]])
print("matrix_4:n determinantti on: ", det(matrix_4))

# Teht. 3 Suuri matriisi

matrix_huge = ( 
[[-2, 0, 8, 5]
,[3, -1, 2, 1]
,[4, 7, 6,  2]
,[1, 0, 2,  3]])

print("Suuren matriisin determinantti on: ", det(matrix_huge))

