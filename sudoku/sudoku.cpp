#include "sudoku.h"
using namespace std;
sudoku::sudoku()
{
	for(int i=0;i<Size;i++)
		map[i]=0;
}
sudoku::sudoku(const int initial[])
{
	setMap(initial);
}
void sudoku::setMap(const int set[])
{
	for(int i=0;i<Size;i++)
		map[i]=set[i];
}
int sudoku::getElement(int index)
{
	if(index<0||index>=Size)
	return map[0];
	else return map[index];
}
bool sudoku::checkUnity(int arr[])
{
	int check[9]={0};
	for(int i=0;i<9;i++)
		check[arr[i]-1]++;
	for(int i=0;i<9;i++)
		if(check[i]!=1)
			return false;
	return true;
}
bool sudoku::iscorrect()
{
	int tmp[9]={0};
	for(int i=0;i<Size;i+=9)
	{
		for(int j=0;j<9;j++)
			tmp[j]=map[i+j];
		bool res=checkUnity(tmp);
		if(res==false) return false;
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
			tmp[j]=map[i+j*9];
		bool res=checkUnity(tmp);
		if(!res) return false;
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			int loc=27*(i/3)+3*(i%3)+9*(j/3)+(j%3);
			tmp[j]=map[loc];
		}
		bool res=checkUnity(tmp);
		if(!res) return false;
	}
	return true;
}
