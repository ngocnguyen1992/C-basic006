#include <iostream>
using namespace std;
#include <stdio.h>
#include<conio.h>
int main()
{
	int n;
	int a;
	cout << " nhap vao canh hinh vuong : ";
	cin >> n;
	cout << "nhap vao canh hinh tam giac : ";
	cin >> a;

	if (n < 0 || a < 0)
	{
		cout << " canh khong hop le.";
	}
	
	else
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout <<  " * ";
			}
			cout << endl;
		}
		
		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				//if (i == 1 || j == 1 || i == n || j == n)
				//{
					cout << " * ";
				//}
				//else
				//{
				//	cout << "   ";
				//}
			}
			cout << endl;

		}
		for (int i = 1; i <= n; i+=4)
		{
			for (int j = 1; j <= n; j ++)
			{
				cout << " * ";
			}
			cout << endl;
		}
		for (char i = 'A'; i <= 'Z'; i++)
		{
			
			cout<<" "<< i <<"\t" << "\t"<<"\t";
		}



	}
	

	

	
	return 0;




}