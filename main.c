#include <stdio.h>
#include <math.h>

void calculateTriangleArea(float x, float y)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float tri = 0.5 * x * y;
	printf("Formula: 1/2 x Base x Height = Area\n");
	printf("Formula: 1/2 x %.2f x %.2f = %.2f\n", x, y, tri);
	printf("Area: %.2f\n", tri);
}

void calculateRectangleArea(float x, float y)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float square = x * y;
	printf("Formula: Length x Width = Area\n");
	printf("Formula: %.2f x %.2f = %.2f\n", x, y, square);
	printf("Area: %.2f\n", square);
}

void calculatePentagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float squared = pow(x, 2);
	float pentagon = 0.25 * squared * 6.881909602;
	printf("Formula: 1/4 x √5(5+2√5) x a^2 = Area\n");
	printf("Formula: 1/4 x 6.6881909602 x %.2f = %.2f\n", squared, pentagon);
	printf("Area: %.2f\n", pentagon);
}

void calculateHexagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float squared = pow(x, 2);
	float root = sqrt(3);
	float hexagon = 1.5 * root * squared;
	printf("Formula: 3/2 x √3 x a^2 = Area\n");
	printf("Formula: 3/2 x √3 x %.2f = %.2f\n", squared, hexagon);
	printf("Area: %.2f\n", hexagon);
}

void calculateHeptagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float squared = pow(x, 2);
	float angle = 1 / tan(M_PI / 7);
	float heptagon = (7 * squared * angle) / 4;
	printf("Formula: 7/4 x cot(π/7) x a^2 = Area\n");
	printf("Formula: 7/4 x cot(π/7) x %.2f = %.2f\n", squared, heptagon);
	printf("Area: %.2f\n", heptagon);
}

void calculateOctagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float root = sqrt(2);
	float squared = pow(x, 2);
	float sum = 1 + root;
	float octagon = sum * 2 * squared;
	printf("Formula: 2 x (1+√2) x a^2 = Area\n");
	printf("Formula: 2 x (1+√2) x %.2f = %.2f\n", squared, octagon);
	printf("Area: %.2f\n", octagon);
}

void calculateNonagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float angle = 1 / tan(M_PI / 9);
	float squared = pow(x, 2);
	float nonagon = (angle * 9 * squared) / 4;
	printf("Formula: 9/4 x cot(π/9) x a^2 = Area\n");
	printf("Formula: 9/4 x cot(π/9) x %.2f = %.2f\n", squared, nonagon);
	printf("Area: %.2f\n", nonagon);
}

void calculateDecagonArea(float x)
{
	if (x < 0 || x == 'a')
	{
		printf("INVALID VALUE!");
		return;
	}
	float squared = pow(x, 2);
	float decagon = (3.077683537 * 5 * squared) / 2;
	printf("Formula: 5/2 x (√5+2√5)  x a^2 = Area\n");
	printf("Formula: 5/2 x (√5+2√5) x %.2f = %.2f\n", squared, decagon);
	printf("Area: %.2f\n", decagon);
}

int main()
{
	float x, y, squared, angle;
	int shape, intro_choice;
	const double pi = 3.14159;
	char continue_choice;

	do
	{
		printf("Welcome to our app, user!\n");
		printf("What would you like to do?\n");
		printf("1. Play with circles!\n");
		printf("2. Area of polygons.\n");
		printf("3. Volume of the shapes.\n");
		printf("5. Remember your previous questions.\n");
		printf("Enter your choice: ");
		scanf("%d", &intro_choice);
		printf("\n");

		if (intro_choice == 1)
		{
		}
		else if (intro_choice == 2)
		{
			printf("Area Of Regular 2D Polygons:\n");
			printf("\n");
			printf("Triangle = 3\n");
			printf("Square = 4\n");
			printf("Pentagon = 5\n");
			printf("Hexagon = 6\n");
			printf("Heptagon = 7\n");
			printf("Octagon = 8\n");
			printf("Nonagon = 9\n");
			printf("Decagon = 10\n");
			printf("\n");
			printf("Select a 2D shape to be computed: ");
			scanf("%d", &shape);
			printf("\n");

			switch (shape)
			{
			case 3:
				printf("You Have Chosen Triangle!\n");
				printf("\n");
				printf("Enter base: ");
				scanf("%f", &x);
				printf("Enter height: ");
				scanf("%f", &y);
				printf("\n");
				calculateTriangleArea(x, y);
				break;

			case 4:
				printf("You Have Chosen Square!\n");
				printf("\n");
				printf("Enter length: ");
				scanf("%f", &x);
				printf("Enter width: ");
				scanf("%f", &y);
				printf("\n");
				calculateRectangleArea(x, y);
				break;

			case 5:
				printf("You Have Chosen Pentagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				printf("\n");
				calculatePentagonArea(x);
				break;

			case 6:
				printf("You Have Chosen Hexagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				printf("\n");
				calculateHexagonArea(x);
				break;

			case 7:
				printf("You Have Chosen Heptagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				calculateHeptagonArea(x);
				break;

			case 8:
				printf("You Have Chosen Octagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				calculateOctagonArea(x);
				break;

			case 9:
				printf("You Have Chosen Nonagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				calculateNonagonArea(x);
				break;

			case 10:
				printf("You Have Chosen Decagon!\n");
				printf("\n");
				printf("Enter side length: ");
				scanf("%f", &x);
				calculateDecagonArea(x);
				break;

			default:
				printf("Invalid Polygon!");
				break;
			}
		}

		printf("Do you want to continue using the app? (Y/N)");
		scanf(" %c", &continue_choice);
		printf("\n");

	} while (continue_choice == 'y' || continue_choice == 'Y');

	printf("See you next time!\n");
	return 0;
}