#include <stdio.h>
#include <stdlib.h>

int r = -1;
int size = 5; // Fixed Size
int f = 0;
int queue[5];

void insert() {
	int element;

	if(r == size -1) {
		printf("Insertion is not possible \n");
	} else {
		printf("Enter an element \n");
		scanf("%d", &element);
		++r;
		queue[r] = element;
	}
}

void delete() {
	if(r == -1 || f > r) {
		printf("Queue is empty \n");
	} else {
		printf("Element deleted is %d \n", queue[f]);
		++f;
	}
}

void display() {
	int i;
	if(r == -1 || f > r) {
		printf("Queue is empty \n");
	} else {
		for(i = f; i <= r; i++) {
			printf("%d \t", queue[i]);
		}
	}
}

int main() {
    int choice;

    while(1) {
        printf("Press 1 to insert \n");
        printf("Press 2 to delete \n");
        printf("Press 3 to display \n");
        printf("Press any key to stop \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
            break;
        }
    }
}