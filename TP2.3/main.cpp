// Problem 3 -  A C++ program (using function) to sort 10 integer values
#include <iostream>

using namespace std;

void sort_table(int* table)
{
	 int max = table[0];
	 int min = table[0];
	 int n = 10, index = 0;
	 int sorted_table[10] = { 0 };
	 int p = -1;

	 while (n--)
	 {
		 p++;
		 for (int i = 0; i < 10; i++)
		 {
			 if (table[i] > max)
			 {
				 max = table[i];
				 index = i;
			 }
			 if (p == 0) // important just for first enter
			 {
				if (table[i] < min)
					min = table[i];
			 }
		 }
		 table[index] = min;
		 sorted_table[p] = max;
		 max = table[0];
		 index = 0;
	 }

	 for (int i = 0; i < 10; i++)
		 cout << sorted_table[i] << " ";
}

int main()
{
	int table[10] = { 17, 3, 6, 4, 8, 2, 11, 7, 76, 52 };
	sort_table(table);
}
