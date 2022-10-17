#include <stdio.h>
//create the function f, fderivative, CalculateSquare function
double f(double x, double c) {
	return (x*x) - c;
}
double fderivative(double x) {
	return 2 * x;
}
double CalculateSquare(double x, int iter, double(*f)(double, double), double(*fd)(double)) {//call the value
	double xc = x;//assign value
	//created a loop for iteration
	for (int i = 0; i < iter; i++) {
		//call the function f,fderivative and divides both(f/fd) after substract with root(x) value
		x -= (f(x, xc) / fd(x));
	}
	return x;
}

int main()
{
	double root;
	do {
		printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
		printf("Enter a number you want to calculate the root of: \n");			
		if (scanf("%lf", &root)) {
			double rootPrint = root;
			root = CalculateSquare(root, 6, f, fderivative);
			printf("The root of %.4lf is: %.4lf\n", rootPrint, root);
		}		
	} while (1);
	return 0;
}
