// Combined C++ Programs with Organized Sections
// Each problem is enclosed in #pragma regions

#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

// Combined C++ Programs from COURSE 7
// Each problem is commented and organized

COURSE 7


#pragma region Problem 1
//  Problem #01
Write a program to fill a 3x3 matrix with random numbers ؟
""""""""""""""""""""""""""""
#include <iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	int resualt;
	resualt = rand() % (To - From + 1) + From;
	return resualt;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0;i < Rows;i++) {
		for (int j = 0;j < Cols;j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Cols;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int num = 3;
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);
}


#pragma endregion

#pragma region Problem 2
//  Problem #02
Write a program to fill a 3x3 matrix with random numbers, then print each row sum :
""""""""""""""""""""""""""""""""
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to generate a random number
int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
// Function to fill matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
// Function to print the matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
// Function to calculate the sum of a row
int RowSum(int arr[3][3], short RowNumber, short Cols) {
	int Sum = 0;
	for (short j = 0; j < Cols; j++) {
		Sum += arr[RowNumber][j];
	}
	return Sum;
}
// Function to print the sum of each row
void PrintEachRowSum(int arr[3][3], short Rows, short Cols) {
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (short i = 0; i < Rows; i++) {
		cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
	}
}
int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	// Fill matrix with random numbers
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	// Print the matrix
	PrintMatrix(arr, 3, 3);
	// Print the sum of each row
	PrintEachRowSum(arr, 3, 3);
	system("pause>0");
	return 0;
}
====================================================== =


#pragma endregion

#pragma region Problem 3
//  Problem #03
Write a program to fill a 3x3 matrix with random numbers then sum each row in Separate Array and Print the results
“””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to generate a random number
int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
// Function to fill matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
// Function to print the matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
// Function to calculate the sum of a row
int RowSum(int arr[3][3], short RowNumber, short Cols) {
	int Sum = 0;
	for (short j = 0; j < Cols; j++) {
		Sum += arr[RowNumber][j];
	}
	return Sum;
}
// Function to calculate the sum of each row and store it in an array
void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		arrSum[i] = RowSum(arr, i, Cols);
	}
}
// Function to print the sum of each row
void PrintRowsSumArray(int arrSum[3], short Rows) {
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (short i = 0; i < Rows; i++) {
		cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}
int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrSum[3];
	// Fill matrix with random numbers
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	// Print the matrix
	PrintMatrix(arr, 3, 3);
	// Calculate and print the sum of each row
	SumMatrixRowsInArray(arr, arrSum, 3, 3);
	PrintRowsSumArray(arrSum, 3);
	system("pause>0");
	return 0;
}
================================================================================== =


#pragma endregion

#pragma region Problem 4
//  Problem #04
Write a program to fill a 3x3 matrix with random numbers, then print each Col sum
“”””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to generate a random number
int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
// Function to fill matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
// Function to print the matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
// Function to calculate the sum of a column
int ColSum(int arr[3][3], short Rows, short ColNumber) {
	int Sum = 0;
	for (short i = 0; i < Rows; i++) {
		Sum += arr[i][ColNumber];
	}
	return Sum;
}
// Function to print the sum of each column
void PrintEachColSum(int arr[3][3], short Rows, short Cols) {
	cout << "\nThe following are the sum of each column in the matrix:\n";
	for (short j = 0; j < Cols; j++) {
		cout << "Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl;
	}
}
int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	// Fill matrix with random numbers
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	// Print the matrix
	PrintMatrix(arr, 3, 3);
	// Print the sum of each column
	PrintEachColSum(arr, 3, 3);
	system("pause>0");
	return 0;
}
==============================================================================


#pragma endregion

#pragma region Problem 5
//  Problem #05
Write a program to fill a 3x3 matrix with random numbers then sum each in another Array and Print them
""""""""""""""""""""""""""""""""""""""""""
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to generate a random number
int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
// Function to fill matrix with random numbers
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
// Function to print the matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
// Function to calculate the sum of a column
int ColSum(int arr[3][3], short Rows, short ColNumber) {
	int Sum = 0;
	for (short i = 0; i < Rows; i++) {
		Sum += arr[i][ColNumber];
	}
	return Sum;
}
// Function to calculate the sum of each column and store it in an array
void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols) {
	for (short i = 0; i < Cols; i++) {
		arrSum[i] = ColSum(arr, Rows, i);
	}
}
// Function to print the sum of each column
void PrintColsSumArray(int arrSum[3], short length) {
	cout << "\nThe following are the sum of each column in the matrix:\n";
	for (short i = 0; i < length; i++) {
		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}
int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrSum[3];
	// Fill matrix with random numbers
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	// Print the matrix
	PrintMatrix(arr, 3, 3);
	// Calculate and print the sum of each column
	SumMatrixColsInArray(arr, arrSum, 3, 3);
	PrintColsSumArray(arrSum, 3);
	system("pause>0");
	return 0;
}
================================================================================== =


#pragma endregion

#pragma region Problem 6
//  Problem #06
//Write a program to Fill A 3x3 Matrix with Ordered Numbers.
"""""""""""""""""""""""""""""""""""""
#include <iostream>
#include <string>
using namespace std;
// Function to fill matrix with ordered numbers
void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols) {
	short Counter = 1; // Start counter from 1
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}
// Function to print the matrix
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int main() {
	int arr[3][3];
	// Fill matrix with ordered numbers
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	// Print the matrix
	PrintMatrix(arr, 3, 3);
	system("pause>0");
	return 0;
}
============================================================================== =


#pragma endregion

#pragma region Problem 7
//  Problem #07
//Write a program to Fill a 3x3 Matrix with Ordered Numbers and Print It, then Transpose Matrix and Print
"""""""""""""""""""""
#include <iostream>
#include <string>
using namespace std;
void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << " " << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTransposed[i][j] = arr[j][i];
		}
	}
}
int main()
{
	int arr[3][3], arrTransposed[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);
	TransposeMatrix(arr, arrTransposed, 3, 3);
	cout << "\n\nThe following is the transposed matrix:\n";
	PrintMatrix(arrTransposed, 3, 3);
	system("pause>0");
}
====================================================== =


#pragma endregion

#pragma region Problem 8
//  Problem #08
//Write a program to fill two 3x3 matrix with random numbers and them, then multiply them into a 3rd matrix and print it.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
			//cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],
	int MatrixResults[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			MatrixResults[i][j] = Matrix1[i][j] *
				Matrix2[i][j];
		}
	}
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);
	MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);
	cout << "\nResults:\n";
	PrintMatrix(MatrixResults, 3, 3);
	system("pause>0");
}
============================================================== =


#pragma endregion

#pragma region Problem 9
//  Problem #09
//Write a program to Fill a 3x3 Matrix with Random Numbers, Print it, then Print the Middle Row and Middle Col

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
void PrintMiddlRowInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddlRows = Rows / 2;
	for (short j = 0; j < Cols; j++)
	{
		printf(" %0*d ", 2, arr[MiddlRows][j]);
	}
	cout << "\n";
}
void PrintMiddlColInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddlCols = Cols / 2;
	for (short j = 0; j < Rows; j++)
	{
		printf(" %0*d ", 2, arr[j][MiddlCols]);
	}
	cout << "\n ";
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMiddlRowInMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMiddlColInMatrix(Matrix1, 3, 3);
	system("pause>0");
}
========================================================== =


#pragma endregion

#pragma region Problem 10
//  Problem #10
//Write a program to fill two 3x3 matrix with random numbers and them, then write a function to sum all numbers in this matrix and print it.
//“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nSum of Matrix1 is: " << SumOfMatrix(Matrix1, 3, 3);
	system("pause>0");
}
========================================================


#pragma endregion

#pragma region Problem 11
//  Problem #11
//Write a program to compare two matrices and check if they are equal or not.
//“”””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
bool CheckOfMatrixAreEqual(int arr[3][3], int arr2[3][3], short Rows, short Cols)
{
	return (SumOfMatrix(arr, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols));
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);
	if (CheckOfMatrixAreEqual(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: both martices are equal.";
	else
		cout << "\nNo: martices are NOT equal.";
	system("pause>0");
}
============================================================== =


#pragma endregion

#pragma region Problem 12
//  Problem #12
//Write a program to compare two matrices and check if they are Typical or not.
//“””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short	Cols)
{
	int cout = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//cout++;
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}
bool CheckOfMatrixAreTypicl(int arr[3][3], int arr2[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] != arr2[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);
	if (CheckOfMatrixAreTypicl(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: both martices are Typicl.";
	else
		cout << "\nNo: martices are NOT Typicl.";
	system("pause>0");
}
============================================================


#pragma endregion

#pragma region Problem 13
//  Problem #13
Write a program to check if the matrix is identity or not.
“”””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool IsIdentityMarix(int Matrix1[3][3], short Rows, short Cols)
{
	//check Diagonal elements are 1 and rest elements are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//check for diagonals element
			if (i == j && Matrix1[i][j] != 1)
			{
				return false;
			}
			//check for rest elements
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	//int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsIdentityMarix(Matrix1, 3, 3))
		cout << "\nYES: Matrix is identity.";
	else
		cout << "\nNo: Matrix is NOT identity.";
	system("pause>0");
}
====================================================================== =


#pragma endregion

#pragma region Problem 14
//  Problem #14
Write a program to check if the matrix is Scalar or not.
“”””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool IsScalarMarix(int Matrix1[3][3], short Rows, short Cols)
{
	int scalarValue = Matrix1[0][0];
	//check Diagonal elements are 1 and rest elements are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//check for diagonals element
			if (i == j && Matrix1[i][j] != scalarValue)
			{
				return false;
			}
			//check for rest elements
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	//int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matrix1[3][3] = { {3,0,0},{0,3,0},{0,0,3} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsScalarMarix(Matrix1, 3, 3))
		cout << "\nYES: Matrix is Scalar .";
	else
		cout << "\nNo: Matrix is NOT Scalar .";
	system("pause>0");
}
============================================================ =


#pragma endregion

#pragma region Problem 15
//  Problem #15
Write a program to count given number in Matrix.
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””’’”
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int ReadNumber()
{
	int num;
	cout << "\nEnter the number to count in matrix? ";
	cin >> num;
	return num;
}
int CountNumberInMatrix(int Matrix1[3][3], short Rows, short Cols, int num)
{
	int count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == num)
			{
				count++;
			}
		}
	}
	return count;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	int Matrix1[3][3] = { {3,2,1},{4,3,0},{0,0,3} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	int Count = ReadNumber();
	cout << "\nNumber " << Count << " count in matrix is " << CountNumberInMatrix(Matrix1, 3, 3, Count) << endl;
	system("pause>0");
}
==============================================================


#pragma endregion

#pragma region Problem 16
//  Problem #16
Write a program to check if the matrix is Sparce or not
‘’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’’””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int CountNumberInMatrix(int Matrix1[3][3], short Rows, short Cols, int num)
{
	int count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == num)
			{
				count++;
			}
		}
	}
	return count;
}
bool IsSparseMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;
	return (CountNumberInMatrix(Matrix1, 3, 3, 0) >= ceil((float)MatrixSize / 2));
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	int Matrix1[3][3] = { {3,2,0},{4,0,0},{0,0,3} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "\nYes: It is Sparse\n";
	else
		cout << "\nNo: It's NOT Sparse\n";
	system("pause>0");
}
============================================================== =


#pragma endregion

#pragma region Problem 17
//  Problem #17
Write a program to check if a given number exists in matrix  or not
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool IsNumberInMatrix(int Matrix1[3][3], short Rows, short Cols, int num)
{
	int count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == num)
			{
				return true;
			}
		}
	}
	return false;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	int Matrix1[3][3] = { {3,2,0},{4,0,0},{0,0,3} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	int Number;
	cout << "\nPlease Enter the number to look for in matrix? ";
	cin >> Number;
	//This is faster mthod
	if (IsNumberInMatrix(Matrix1, 3, 3, Number))
		cout << "\nYes it is there.\n";
	else
		cout << "\nNo: It's NOT there.\n";
	system("pause>0");
}
==========================================================


#pragma endregion

#pragma region Problem 18
//  Problem #18
Write a program to print the intersected numbers in two given matrices.
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool IsNumberInMatrix(int Matrix1[3][3], short Rows, short Cols, int num)
{
	int count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == num)
			{
				return true;
			}
		}
	}
	return false;
}
void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	int number;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			number = Matrix1[i][j];
			if (IsNumberInMatrix(Matrix2, Rows, Cols, number))
			{
				cout << setw(3) << number;
			}
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	int Matrix1[3][3] = { {3,2,10},{14,20,30},{20,30,35} };
	int Matrix2[3][3] = { {31,2,0},{14,0,0},{0,20,3} };
	int Matrix3[3][3];
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);
	cout << "intersected Number :  " << endl;
	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 19
//  Problem #19
Write a program to print the minimum and maximum numbers in Matrix.
“””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int Min = Matrix1[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] < Min)
			{
				Min = Matrix1[i][j];
			}
		}
	}
	return Min;
}
int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int Mix = Matrix1[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] > Mix)
			{
				Mix = Matrix1[i][j];
			}
		}
	}
	return Mix;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		cout << "\n";
	}
}
int main()
{
	int Matrix1[3][3] = { {3,2,10},{14,40,30},{20,30,35} };
	int Matrix2[3][3] = { {31,2,0},{14,0,0},{0,20,3} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\nMinimum Number is: ";
	cout << MinNumberInMatrix(Matrix1, 3, 3);
	cout << "\n\nMax Number is: ";
	cout << MaxNumberInMatrix(Matrix1, 3, 3);
	system("pause>0");
}
============================================================


#pragma endregion

#pragma region Problem 20
//  Problem #20
Write a program to check it the matrix is palindrome or not.
“””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			//printf(" %0*d ", 2, arr[i][j]);
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
int IsPalindromeMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsPalindromeMatrix(Matrix1, 3, 3))
	{
		cout << "\nYes: Matrix is Palindrome\n";
	}
	else
		cout << "\nNo: Matrix is NOT Palindrome\n";
	system("pause>0");
}
============================================================== =


#pragma endregion

#pragma region Problem 21
//  Problem #21
Write a program to print fibonacci series of 10 .
“”””””””””””””””””””””””””””””””””””””””””””””””’
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void PrintFibonacciUsingLoop(short Number)
{
	int FebNumber = 0;
	int Prev2 = 0, Prev1 = 1;
	cout << "1 ";
	for (short i = 2; i <= Number; ++i)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << " ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}
int main()
{
	PrintFibonacciUsingLoop(10);
	system("pause>0");
}
========================================================


#pragma endregion

#pragma region Problem 22
//  Problem #22
Write a program to print fibonacci series of 10 by Recurssion .
“”””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//حل ثاني قوة
void PrintFibonacciSeriesUsingRecursion(int Number, int prev1 = 0, int prev2 = 1)
{
	if (Number == 0) return;
	cout << prev1 + prev2 << "  ";
	PrintFibonacciSeriesUsingRecursion(Number - 1, prev1 + prev2, prev1);
}
void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
{
	int FebNumber = 0;
	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;
		Prev1 = Prev2;
		Prev2 = FebNumber;
		cout << FebNumber << "   ";
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
}
int main()
{
	PrintFibonacciUsingRecurssion(10, 1, 0);
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 23
//  Problem #23
Write a program to read a string then print the first letter of each word in that string .
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
void PrintFirstLetterOfEachWord(string name)
{
	bool isFirstLetter = true;
	for (short i = 0;i < name.length();i++)
	{
		if (name[i] != ' ' && isFirstLetter)
		{
			cout << name[i] << endl;
		}
		isFirstLetter = (name[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord(ReadString());
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 24
//  Problem #24
Write a program to read a string then uppercase the first letter of each word in that string .
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””’’
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string UpperFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = toupper(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
void PrintFirstUpperLetterOfEachWord(string name)
{
	bool isFirstLetter = true;
	for (short i = 0;i < name.length();i++)
	{
		if (name[i] != ' ' && isFirstLetter)
		{
			cout << char(name[i] - 32);
		}
		else
		{
			cout << name[i];
		}
		isFirstLetter = (name[i] == ' ' ? true : false);
	}
}
int main()
{
	string S1 = ReadString();
	cout << "\nString after conversion:\n";
	S1 = UpperFirstLetterOfEachWord(S1);
	cout << S1 << endl;
	//2
	PrintFirstUpperLetterOfEachWord(ReadString());
	system("pause>0");
}
========================================================


#pragma endregion

#pragma region Problem 25
//  Problem #25
Write a program to read a string then loweruppercase the first letter of each word in that string .
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””’
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string LowerFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
void PrintFirstUpperLetterOfEachWord(string name)
{
	bool isFirstLetter = true;
	for (short i = 0;i < name.length();i++)
	{
		if (name[i] != ' ' && isFirstLetter)
		{
			cout << char(name[i] + 32);
		}
		else
		{
			cout << name[i];
		}
		isFirstLetter = (name[i] == ' ' ? true : false);
	}
}
int main()
{
	string S1 = ReadString();
	cout << "\nString after conversion:\n";
	S1 = UpperFirstLetterOfEachWord(S1);
	cout << S1 << endl;
	//2
	PrintFirstUpperLetterOfEachWord(ReadString());
	system("pause>0");
}
====================================================


#pragma endregion

#pragma region Problem 26
//  Problem #26
Write a program to read a string then upper All letter, then lower All letter and print them .
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string LowerAllString(string S1)
{
	for (char& ch : S1)
	{
		ch = tolower(ch);
	}
	return S1;
}
string UpperAllString(string S1)
{
	for (char& ch : S1)
	{
		ch = toupper(ch);
	}
	return S1;
}
int main()
{
	string S1 = ReadString();
	cout << "\nString  Lower conversion:\n";
	S1 = LowerAllString(S1);
	cout << S1 << endl;
	cout << "\nString  Upper conversion:\n";
	S1 = UpperAllString(S1);
	cout << S1 << endl;
	system("pause>0");
}
================================================================


#pragma endregion

#pragma region Problem 27
//  Problem #27
#include <string>
#include <iostream>
using namespace std;
char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}
char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
char InvertLetterCase(char char1)
{
	char x = char(char1);
	if (x >= 65 && x <= 90)
	{
		return   char(char1 + 32);
	}
	else  if (x >= 97 && x <= 122)
	{
		return   char(char1 - 32);
	}
}
int main()
{
	char Ch1 = ReadChar();
	cout << "\nChar after inverting case:\n";
	Ch1 = InvertLetterCase(Ch1);
	cout << Ch1 << endl;
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 28
//  Problem #28
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
string InvertAllStringLettersCase(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}
	return S1;
}
int main()
{
	string Ch1 = ReadString();
	cout << "\nChar after inverting case:\n";
	Ch1 = InvertAllStringLettersCase(Ch1);
	cout << Ch1 << endl;
	system("pause>0");
}
==================================================


#pragma endregion

#pragma region Problem 29
//  Problem #29
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };
short CountLetters(string S1, enWhatToCount	WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			Counter++;
		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;
	}
	return Counter;
}
int CountCapitalLetters(string S1)
{
	int count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			count++;
	}
	return count;
}
int CountSmallLetters(string S1)
{
	int count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
			count++;
	}
	return count;
}
int main()
{
	string S1 = ReadString();
	cout << "\nString Length = " << S1.length();
	cout << "\nCapital Letters Count= " << CountCapitalLetters(S1);
	cout << "\nSmall Letters Count= " << CountSmallLetters(S1);
	cout << "\n\nMethod 2\n";
	cout << "\nString Length = " << CountLetters(S1);
	cout << "\nCapital Letters Count= " << CountLetters(S1, enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count= " << CountLetters(S1, enWhatToCount::SmallLetters);
}
================================================================


#pragma endregion

#pragma region Problem 30
//  Problem #30
#include <iostream>
#include <string>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n ";
	cin >> Ch1;
	return Ch1;
}
short CountLetter(string S1, char C1)
{
	int count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (C1 == S1[i])
			count++;
	}
	return count;
}
int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	cout << "\nLetter \'" << Ch1 << "\' Count = " <<
		CountLetter(S1, Ch1);
	system("pause>0");
}
========================================================== =


#pragma endregion

#pragma region Problem 31
//  Problem #31
Write a program gram to read a string and read a character then count the character in that string(Match Case or Not)
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n ";
	cin >> Ch1;
	return Ch1;
}
short CountLetterAll(string S1, char C1)
{
	int count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (tolower(S1[i]) == tolower(C1))
			count++;
	}
	return count;
}
char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
short CountLetter(string S1, char Letter, bool MatchCase = true)
{
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}
	}
	return Counter;
}
int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	cout << "\nLetter \'" << Ch1 << "\' Count = " <<
		CountLetter(S1, Ch1);
	cout << "\nLetter \'" << Ch1 << "\' ";
	cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
	cout << " Count = " << CountLetterAll(S1, Ch1);
	system("pause>0");
}
====================================================== =


#pragma endregion

#pragma region Problem 32
//  Problem #32
Write a program to read a character the check if it is a vowel or not (Vowels are : a, e, i, o, u)
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
using namespace std;
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n ";
	cin >> Ch1;
	return Ch1;
}
bool IsVowel(char Letter)
{
	return (Letter == 'a' || Letter == 'A' || Letter == 'e' || Letter == 'E' || Letter == 'i' ||
		Letter == 'I' || Letter == 'u' || Letter == 'U' || Letter == 'o' || Letter == 'O');
}
bool IsVowel2(char Letter)
{
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}
int main()
{
	char Ch1 = ReadChar();
	if (IsVowel(Ch1))
		cout << "\nYES Letter \'" << Ch1 << "\' is vowel";
	else
		cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel";
	system("pause>0");
}
========================================================


#pragma endregion

#pragma region Problem 33
//  Problem #33
Write a program to read a string then count all vowels in that string(Vowels are: a, e, i, o, u)
“””””””””””””””””””””””””””””””””””””””””””’’’’
#include <iostream>
#include <string>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
bool IsVowel(char Letter)
{
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}
short CountLetterIsVowel(string S1)
{
	int count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			count++;
	}
	return count;
}
int main()
{
	string S1 = ReadString();
	cout << "\nNumber of vowels is: " << CountLetterIsVowel(S1);
	system("pause>0");
}
====================================================== =


#pragma endregion

#pragma region Problem 34
//  Problem #34
Write a program to read a string then print all vowels in that string(Vowels are : a, e, i, o, u)
“”””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
bool IsVowel(char Letter)
{
	Letter = tolower(Letter);
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}
void PrintVowels(string S1)
{
	cout << "\nVowels in string are: ";
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i] << " ";
	}
}
int main()
{
	string S1 = ReadString();
	PrintVowels(S1);
	system("pause>0");
}
==================================================== =


#pragma endregion

#pragma region Problem 35
//  Problem #35
Write a program to read a string then print each word in that string.
“””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
void PrintEachWordInString(string S1)
{
	string delim = " "; // delimiter
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(delim)) != string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length());
		/* erase() until positon and move to next word. */
	}
	if (S1 != "")
	{
		cout << S1 << endl; // it print last word of the string.
	}
}
void PrintEachWordInString2(string S1)
{
	istringstream stream(S1); // تحويل النص إلى دفق نصي
	string word;
	cout << "\nYour string words are:\n\n";
	// قراءة كل كلمة من الدفق النصي
	while (stream >> word)
	{
		cout << word << endl;
	}
}
int main()
{
	string S1 = ReadString();
	PrintEachWordInString(S1);
	cout << "\n========== 2 ===============\n";
	PrintEachWordInString2(S1);
	system("pause>0");
}
==========================================================


#pragma endregion

#pragma region Problem 36
//  Problem #36
Write a program to read a string then count each word in that string.
“””””””””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
short CountWords(string S1)
{
	string delim = " "; // delimiter
	short pos = 0;
	string sWord; // define a string variable
	short count = 0;
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(delim)) != string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			count++;
			//cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length());
		/* erase() until positon and move to next word. */
	}
	if (S1 != "")
	{
		count++;
	}
	return count;
}
int main()
{
	string S1 = ReadString();
	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S1);
	system("pause>0");
}
==========================================================


#pragma endregion

#pragma region Problem 37
//  Problem #37
Write a program to read a string then make a function to split each word in vector.
“”””””””””””””””””””””””””””””””””””””””””””’
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
void PrintEachWords(vector <string> sVector)
{
	for (string& s : sVector)
	{
		cout << s << endl;
	}
}
int main()
{
	vector <string> sVector;
	string S1 = ReadString();
	sVector = SplitString(S1, "*");
	cout << "\nTokens = " << sVector.size() << endl;
	PrintEachWords(sVector);
	system("pause>0");
}
======================================================


#pragma endregion

#pragma region Problem 38
//  Problem #38
Write a program to read a string then Trim Left, Right, All.
“”””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}
string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}
string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}
int main()
{
	string S1 = "      Hamood Ahmed Moorab         ";
	cout << "\nString = " << S1;
	cout << "\n\nTrim Left = " << TrimLeft(S1);
	cout << "\nTrim Right = " << TrimRight(S1);
	cout << "\nTrim = " << Trim(S1);
	system("pause>0");
}
==================================================


#pragma endregion

#pragma region Problem 39
//  Problem #39
Write a program to join vector of strings into a one string with separators
“”””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
int main()
{
	vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, "+");
	system("pause>0");
}
==================================================== =


#pragma endregion

#pragma region Problem 40
//  Problem #40
Write a program to join array of strings into a one string with separators.
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string JoinString(string arr[], short Length, string Delim)
{
	string S1 = "";
	for (short i = 0;i < Length;i++)
	{
		S1 = S1 + arr[i] + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
int main()
{
	vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
	string vStringArray[] = { "Mohammed","Faid","Ali","Maher" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");
	cout << "\n\n\n\Vector after Array: \n";
	cout << JoinString(vStringArray, 4, " ");
	system("pause>0");
}
============================================================


#pragma endregion

#pragma region Problem 41
//  Problem #41
Write a program to Read string and reverse its words .
“”””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string ReverseWordsInString(string S1)
{
	vector<string> vString;
	string S2 = "";
	vString = SplitString(S1, " ");
	// declare iterator
	vector<string>::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + " ";
	}
	S2 = S2.substr(0, S2.length() - 1); //remove last space.
	return S2;
}
void ReverseWords(string & input)
{
	vector<string> words;
	string word;
	// استخراج الكلمات يدويًا باستخدام الحلقات
	for (short i = 0; i < input.size(); ++i)
	{
		if (input[i] == ' ')
		{
			if (!word.empty())
			{
				words.push_back(word);
				word.clear();
			}
		}
		else
		{
			word += input[i];
		}
	}
	// إضافة الكلمة الأخيرة إذا كانت موجودة
	if (!word.empty())
	{
		words.push_back(word);
	}
	// طباعة الكلمات بشكل عكسي
	for (int i = words.size() - 1; i >= 0; --i) {
		cout << words[i];
		if (i > 0)
		{
			cout << " ";
		}
	}
	cout << endl;
}
int main()
{
	string S1 = ReadString();
	ReverseWords(S1);
	cout << " The Two : " << ReverseWordsInString(S1) << endl;
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 42
//  Problem #42
Write a program to  replace word in string.
“”””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
{
	short pos = S1.find(StringToReplace);
	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
		pos = S1.find(StringToReplace);//find next
	}
	return S1;
}
int main()
{
	string S1 = ReadString();
	cout << ReplaceWordInStringUsingBuiltInFunction(S1, "a", "H") << endl;
	system("pause>0");
}
======================================================== =


#pragma endregion

#pragma region Problem 43
//  Problem #43
Write a program to  replace word in string  using custom function.
“”””””””””””””””””””””””””””””””””””””””””””””””””””””’
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string JoinString(vector<string> vString, string Delim)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}
string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
{
	vector<string> vString = SplitString(S1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sRepalceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = sRepalceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);
	system("pause>0");
}
========================================================== =


#pragma endregion

#pragma region Problem 44
//  Problem #44
Write a program to remove all punctuations from a string :
“”””””””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadString()
{
	string Ch1;
	cout << "Please Enter a string?\n";
	getline(cin, Ch1);
	return Ch1;
}
string RemovePunctuationsFromString(string S1)
{
	string S2 = "";
	for (short i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}
int main()
{
	string S1 = "Welcome to Jordan, Jordan is a nice country; it's mazing.";
	cout << "Original String:\n" << S1;
	cout << "\n\nPauncuations Removed:\n" << RemovePunctuationsFromString(S1);
	system("pause>0");
}
================================================ =


#pragma endregion

#pragma region Problem 45
//  Problem #45
Write a program to read bank client data record and convert it to one line.
“”””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct sClient
{
	string sAccountNumber;
	string sPinCode;
	string sNameClient;
	string sPhoneNumber;
	double dAccountBalance;
};
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	getline(cin, Client.sAccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.sPinCode);
	cout << "Enter Name? ";
	getline(cin, Client.sNameClient);
	cout << "Enter Phone? ";
	getline(cin, Client.sPhoneNumber);
	cout << "Enter AccountBalance? ";
	cin >> Client.dAccountBalance;
	return Client;
}
string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.sAccountNumber + Seperator;
	stClientRecord += Client.sPinCode + Seperator;
	stClientRecord += Client.sNameClient + Seperator;
	stClientRecord += Client.sPhoneNumber + Seperator;
	stClientRecord += to_string(Client.dAccountBalance);
	return stClientRecord;
}
int main()
{
	cout << "\nPlease Enter Client Data: \n\n";
	sClient Client;
	Client = ReadNewClient();
	cout << "\n\nClient Record for Saving is: \n";
	cout << ConvertRecordToLine(Client);
	system("pause>0");
}
==================================================== =


#pragma endregion

#pragma region Problem 46
//  Problem #46
Write a program to convert line data to record and print it :
“””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct sClient
{
	string sAccountNumber;
	string sPinCode;
	string sNameClient;
	string sPhoneNumber;
	double dAccountBalance;
};
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	getline(cin, Client.sAccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.sPinCode);
	cout << "Enter Name? ";
	getline(cin, Client.sNameClient);
	cout << "Enter Phone? ";
	getline(cin, Client.sPhoneNumber);
	cout << "Enter AccountBalance? ";
	cin >> Client.dAccountBalance;
	return Client;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.sAccountNumber + Seperator;
	stClientRecord += Client.sPinCode + Seperator;
	stClientRecord += Client.sNameClient + Seperator;
	stClientRecord += Client.sPhoneNumber + Seperator;
	stClientRecord += to_string(Client.dAccountBalance);
	return stClientRecord;
}
sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector<string> vClientData;
	vClientData = SplitString(Line, Seperator);
	Client.sAccountNumber = vClientData[0];
	Client.sPinCode = vClientData[1];
	Client.sNameClient = vClientData[2];
	Client.sPhoneNumber = vClientData[3];
	Client.dAccountBalance = stod(vClientData[4]);//cast string to	double
	return Client;
}
void PrintClientRecord(sClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.sAccountNumber;
	cout << "\nPin Code : " << Client.sPinCode;
	cout << "\nName : " << Client.sNameClient;
	cout << "\nPhone : " << Client.sPhoneNumber;
	cout << "\nAccount Balance: " << Client.dAccountBalance;
}
int main()
{
	string stLine = "A150#//#1234#//#Hammod Moorab#//#079999#//#5270.000000";
	cout << "\nLine Record is:\n";
	cout << stLine;
	sClient Client = ConvertLinetoRecord(stLine);
	PrintClientRecord(Client);
	system("pause>0");
}
============================================================


#pragma endregion

#pragma region Problem 47
//  Problem #47
Write a program to ask you to enter clients and save them to file.
“””””””””””””””””””””””””””””””””””””””””””””””””””
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
const string ClientsFileName = "Clients.txt";
struct sClient
{
	string sAccountNumber;
	string sPinCode;
	string sNameClient;
	string sPhoneNumber;
	double dAccountBalance;
};
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	// Usage of std::ws will extract allthe whitespace character
	getline(cin >> ws, Client.sAccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.sPinCode);
	cout << "Enter Name? ";
	getline(cin, Client.sNameClient);
	cout << "Enter Phone? ";
	getline(cin, Client.sPhoneNumber);
	cout << "Enter AccountBalance? ";
	cin >> Client.dAccountBalance;
	return Client;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.sAccountNumber + Seperator;
	stClientRecord += Client.sPinCode + Seperator;
	stClientRecord += Client.sNameClient + Seperator;
	stClientRecord += Client.sPhoneNumber + Seperator;
	stClientRecord += to_string(Client.dAccountBalance);
	return stClientRecord;
}
sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector<string> vClientData;
	vClientData = SplitString(Line, Seperator);
	Client.sAccountNumber = vClientData[0];
	Client.sPinCode = vClientData[1];
	Client.sNameClient = vClientData[2];
	Client.sPhoneNumber = vClientData[3];
	Client.dAccountBalance = stod(vClientData[4]);//cast string to	double
	return Client;
}
void PrintClientRecord(sClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.sAccountNumber;
	cout << "\nPin Code : " << Client.sPinCode;
	cout << "\nName : " << Client.sNameClient;
	cout << "\nPhone : " << Client.sPhoneNumber;
	cout << "\nAccount Balance: " << Client.dAccountBalance;
}
void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
		MyFile.close();
	}
}
void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}
void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";
		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients ? Y / N ? ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}
int main()
{
	AddClients();
	system("pause>0");
}
============================================================


#pragma endregion

#pragma region Problem 48
//  Problem #48
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
const string ClientsFileName = "Clients.txt";
struct sClient
{
	string sAccountNumber;
	string sPinCode;
	string sNameClient;
	string sPhoneNumber;
	double dAccountBalance;
};
sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	// Usage of std::ws will extract allthe whitespace character
	getline(cin >> ws, Client.sAccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.sPinCode);
	cout << "Enter Name? ";
	getline(cin, Client.sNameClient);
	cout << "Enter Phone? ";
	getline(cin, Client.sPhoneNumber);
	cout << "Enter AccountBalance? ";
	cin >> Client.dAccountBalance;
	return Client;
}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.sAccountNumber + Seperator;
	stClientRecord += Client.sPinCode + Seperator;
	stClientRecord += Client.sNameClient + Seperator;
	stClientRecord += Client.sPhoneNumber + Seperator;
	stClientRecord += to_string(Client.dAccountBalance);
	return stClientRecord;
}
sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector<string> vClientData;
	vClientData = SplitString(Line, Seperator);
	Client.sAccountNumber = vClientData[0];
	Client.sPinCode = vClientData[1];
	Client.sNameClient = vClientData[2];
	Client.sPhoneNumber = vClientData[3];
	Client.dAccountBalance = stod(vClientData[4]);//cast string to	double
	return Client;
}
void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.sAccountNumber;
	cout << "| " << setw(10) << left << Client.sPinCode;
	cout << "| " << setw(40) << left << Client.sNameClient;
	cout << "| " << setw(12) << left << Client.sPhoneNumber;
	cout << "| " << setw(12) << left << Client.dAccountBalance;
}
void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
		MyFile.close();
	}
}
void ReadDataFromFile(string FileName, sClient stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in); // فتح الملف للقراءة
	if (MyFile.is_open())
	{
		string line;
		cout << "\nFile contents:\n";
		while (getline(MyFile, line))
		{  // قراءة كل سطر
			stDataLine = ConvertLinetoRecord(line);  // طباعة السطر إلى الشاشة
		}
		MyFile.close();  // إغلاق الملف
	}
	else {
		cerr << " Error : Could not open file for reading." << endl;
	}
}
vector <sClient> LoadCleintsDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		sClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}
void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}
void  ٍShowAllClient()
{
	sClient Client;
	string S1;
	ReadDataFromFile(ClientsFileName, ConvertLinetoRecord(S1));
}
void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}
void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";
		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients ? Y / N ? ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}
int main()
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	PrintAllClientsData(vClients);
	system("pause>0");
}
====================================================== =


#pragma endregion

#pragma region Problem 49
//  Problem #49
#pragma endregion


int main() {
	srand((unsigned)time(NULL));
	// Add test cases here
	return 0;
}
