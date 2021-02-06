#include"sudoku.h"
#include<iostream>
#include<vector>
#define MAX 100
using namespace std;

int main()
{
	int sudoku_in[sudoku::Size];
	sudoku su_tmp;
	vector<sudoku>su;
	int num_case;
	cin>>num_case;
	for(int i=0;i<num_case;i++)
	{
		for(int j=0;j<sudoku::Size;j++)
			cin>>sudoku_in[j];
		su_tmp.setMap(sudoku_in);
		su.push_back(su_tmp);
	}
	for(int i=0;i<num_case;i++)//print sudoku
	{
		for(int j=0;j<sudoku::Size;j++)
		{
			cout<<su.at(i).getElement(j)<<" ";
			if(j%9==8) cout<<endl;
		}
		if(su.at(i).iscorrect()) cout<<"correct"<<endl;//判斷是否為數獨規定
		else cout<<"incorrect"<<endl;
	}
	return 0;
}
