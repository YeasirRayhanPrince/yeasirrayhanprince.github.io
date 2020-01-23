#include<math.h>

int main() {
	float a, b, c, d;
	float x1, x2;
	printf("Enter a, b and c of ax^2+bx+c : ");
	scanf("%f %f %f", &a, &b, &c);
	d = sqrt(b*b - 4*a*c);
	x1 = (-b + d)/ (2*a);
	x2 = (-b - d)/ (2*a);
	printf("Roots are %f and %f\n", x1, x2);
	return 0;
}
