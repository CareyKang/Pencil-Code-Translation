#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a,b;
	cout<<"���볤���εĳ��Ϳ�"<<endl;
	cin>>a>>b;
	for (int i=0;i<b;i++)
	{
		for (int j=0;j<a;j++)
		{
			cout<<setw(2)<<setfill('q')<<'*';
		}
		cout<<endl;
	}
	return 0;
}