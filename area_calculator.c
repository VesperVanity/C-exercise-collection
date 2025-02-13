#include <stdio.h>

void calculate_circle_area();
void calculate_rectangle_area();

int main(void)
{
	calculate_circle_area();
	calculate_rectangle_area();
	return 0;
}


void calculate_circle_area()
{
	const double PI = 3.141592653589793;
	double radius = 0;
	printf("%s\n", "Enter radius: ");
	scanf("%lf", &radius);
	double area_of_circle = 0.0;
	printf("%s%lf%c%c%c%lf%c%c%c%lf\n", "Formula: ", PI, ' ', '*', ' ', radius, ' ', '*', ' ', radius);
	area_of_circle = PI * radius * radius;
	printf("%s%lf\n", "The calculated area of the circle is: ", area_of_circle);
}

void calculate_rectangle_area()
{
	double square_width = 0;
	double square_height = 0;
	printf("%s\n", "Enter width and height: ");
	scanf("%lf%lf", &square_width, &square_height);
	printf("%s%lf%c%c%c%lf\n", "Formula: ", square_width, ' ', '*', ' ', square_height);
	double rectangle_area = square_width * square_height;
	printf("%s%lf\n", "The calculated area of the rectangle is: ", rectangle_area);
}