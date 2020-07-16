#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
int a, b, c, i, j;
float p;
int *arr = malloc(n * sizeof(int));
	for (i = 0; i < n; i++){
		a = tr[i].a, b = tr[i].b, c = tr[i].c;
		p = (a + b + c)/2.0;
		arr[i] = p * (p - a) * (p - b) * (p - c);
	}

	triangle largerTri; int largerArea;
	for(i = 0; i < n; i++){
		for (j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
					largerArea = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = largerArea;

					largerTri = tr[j];
					tr[j] = tr[j + 1];
					tr[j + 1] = largerTri;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}