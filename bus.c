#include <stdio.h>

int main() {
	
	int studentCount, seatCount, bus, x, result;
	
	printf("Enter amount of students and amount of seats\n");
	scanf("%d %d", &studentCount, &seatCount); 
	bus = studentCount/seatCount;
	x = studentCount % seatCount != 0;
	result = bus + x;
		
	printf("You need %d busses", result);
}

