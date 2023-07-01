#include<iostream>
using namespace std;

//#define one
//#define two
//#define three
//#define four
//#define five
//#define six
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
#ifdef one
	int h = 5;
	for (int i = 0; i < h; i++)
	{
		if (i < h) {
			cout << "*****";
		}
		else {
			cout << endl;
		}
		cout << endl;
	}
#endif //one

#ifdef two
	int h = 5;
	for (int i = 0; i <= h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i < h)
			{
				cout << "*";
			}
			else
			{
				cout << endl;
			}
		}
		cout << endl;
	}
#endif //two

#ifdef three
	int h = 0;
	for (int i = 5; i >= h; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i > h)
			{
				cout << "*";
			}
			else {
				cout << endl;
			}
		}
		cout << endl;
	}

#endif //three

#ifdef four
	int h = 5;
	for (int i = 0; i <= h; i++)
	{
		
		for (int j = 0; j <= h; j++)
		{
				if (i >= j)
				{
					cout << " ";
				}
				else
				{ 
					cout << "*";
				}
		}
		cout << endl;
	}
#endif //four

#ifdef five
	int h = 1;
	for (int i = 5; i >= h; i--)
	{
		for (int j = i; j >= h; j--)
		{
			if (j > h)
			{
				cout << " ";
			}
			else
			{
				cout << "*";

			}
		}
		cout << endl;
	}
	
#endif //five FAILED

#ifdef six
	int h = 5;
	for (int i = 0; i < h; i++)
	{
		for (int j = i; j < h; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i+2; j <= h; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif //six
#ifdef seven
	int h = 5;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else {
				cout << "- ";
			}
		}
		cout << endl;
	}

#endif // seven

}