#ifndef SUDOKU_H
#define SUDOKU_H
#include<iostream>
class sudoku{
public:
	sudoku();
	sudoku(const int initial[]);
	void setMap(const int set[]);
	int getElement(int index);
	bool iscorrect();
	static const int Size=81;
private:
	bool checkUnity(int arr[]);
	int map[Size];
};
#endif
