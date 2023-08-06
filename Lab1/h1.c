#include <stdio.h>
struct Rectangle {
  int length;
  int breadth;
};
struct Square {
  int side;
};
union Triangle {
  int base;
  int height;
};
int main() {
  struct Rectangle rectangle;
  struct Square square;
  union Triangle triangle;
  printf("Enter the length and breadth of the rectangle: ");
  scanf("%d %d", &rectangle.length, &rectangle.breadth);
  printf("Enter the side of the square: ");
  scanf("%d", &square.side);
  printf("Enter the base and height of the triangle: ");
  scanf("%d %d", &triangle.base, &triangle.height);
  int area_rectangle = rectangle.length * rectangle.breadth;
  int area_square = square.side * square.side;
  int area_triangle = (triangle.base * triangle.height) / 2;
  printf("The area of the rectangle is %d\n", area_rectangle);
  printf("The area of the square is %d\n", area_square);
  printf("The area of the triangle is %d\n", area_triangle);
  return 0;
}