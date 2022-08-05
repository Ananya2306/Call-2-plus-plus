#include<iostream>
using namespace std;

void Increment(int &s)
{
	s = s+50000;
	cout<<"Salary inside Function "<<s<<endl;
}

int main()
{
	int sal = 270000;
	Increment(sal);
	cout<<"Salary inside Main "<<sal<<endl;
	return 0;
}
