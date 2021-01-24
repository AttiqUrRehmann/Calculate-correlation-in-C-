#include <iostream>
#include <cmath>
using namespace std;

float corr(float x[], float y[]);

int main()
{
	float x[5], y[5];
	int i, j;
	
	cout << "Enter x:  "<<endl;
	for (i = 0; i < 5; ++i)
	{
		cin >> x[i];
	}

	cout << "Enter y:  " << endl;
	for (j = 0; j < 5; ++j)
	{
		cin >> y[j];
	}

	cout << endl << "correlation = " << corr(x, y);
	system("pause>0");
}

float corr(float x[], float y[]) {
	double sumx = 0.0, sumy =0.0, meanx, meany, varx=0.0, vary=0.0, cov=0.0;
	int i, j;

	for (i = 0; i < 5; ++i)
	{
		sumx += x[i];
	}

	for (j = 0; j < 5; ++j)
	{
		sumy += y[j];
	}
	meanx = sumx / 5;
	meany = sumy / 5;

	for (i = 0; i < 5; ++i)
		varx += pow(x[i] - meanx, 2);

	for (j = 0; j < 5; ++j)
		vary += pow(y[i] - meany, 2);

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			cov += ((x[i] - meanx) * (y[i] - meany));
		}
	}
	
	return cov / sqrt(varx * vary);
}
