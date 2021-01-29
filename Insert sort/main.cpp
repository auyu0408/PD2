#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include"Clock.h"
#include<iomanip>
using namespace std;
#define SIZE 100

void insert_sort(vector<int> &v)
{
	int insert,move;
	for(int next=1;next<(int)v.size();next++)
	{
		insert=v.at(next);
		move=next;
		while((move>0)&&(v.at(move-1)>insert))
		{
			int tmp=v.at(move-1);
			v.at(move)=tmp;
			move--;
		}
		v.at(move)=insert;
	}
}
int main()
{
	Clock clk;
	vector<int> v1(SIZE),v2;
	srandom(time(NULL));
	for(int i=0;i<SIZE;i++)
		v1.at(i)=random()%1000;
	cout<<endl;
	clk.start();
	insert_sort(v1);
	cout<<"time1="<<clk.getTime()<<endl;
	v2=v1;
	clk.start();
	cout<<"time2="<<fixed<<setprecision(10)<<clk.getTime()<<endl;
	sort(v2.begin(),v2.end());
	for(int i=0;i<SIZE;i++)
	{
		cout<<v1.at(i)<<" ";
		if(i%10==9)
		cout<<endl;		
    }
	cout<<"V2"<<endl;
	for(int i=0;i<SIZE;i++)
	{
		cout<<v2.at(i)<<" ";
		if(i%10==9)
		cout<<endl;
	}
	return 0;
}
