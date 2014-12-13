#include <stdio.h>

void es(int rs) {

	int r = rs / 10;
	int s = rs % 10;

	switch(s) {
		case 1:
		printf("%s", "Faint signals, barely perceptible, ");
		break;
		case 2:
		printf("%s", "Very weak signals, ");
		break;
		case 3:
		printf("%s", "Weak signals, ");
		break;
		case 4:
		printf("%s", "Fair signals, ");
		break;
		case 5:
		printf("%s", "Fairly good signals, ");
		break;
		case 6:
		printf("%s", "Good signals, ");
		break;
		case 7:
		printf("%s", "Moderately strong signals, ");
		break;
		case 8:
		printf("%s", "Strong signals, ");
		break;
		case 9:
		printf("%s", "Extremely strong signals, ");
		break;
		
	}

	switch(r) {
		case 1:
		printf("%s\n", "unreadable.");
		break;
		case 2:
		printf("%s\n", "barely readable, occasional words distinguishable.");
		break;
		case 3:
		printf("%s\n", "readable with considerable difficulty.");
		break;
		case 4:
		printf("%s\n", "readable with practically no difficulty.");
		break;
		case 5:
		printf("%s\n", "perfectly readable.");
		break;
	}
}

int main(void) {
	
	int rs;
	scanf("%d", &rs);
	es(rs);

}