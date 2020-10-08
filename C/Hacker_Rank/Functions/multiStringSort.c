#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LETTRS 26

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int sort_by_length(const char* a, const char* b) {
    int c = strlen(a) - strlen(b);
    return (c) ? c : lexicographic_sort(a, b);
}

int sort_by_distinct_helper(const char *a){
    int alphabet[LETTRS] = {0}, distinct = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        alphabet[a[i] - 'a']++;
    }

    for (int i = 0; i < LETTRS; i++)
        if (alphabet[i])
            distinct++;

    return distinct;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int c = sort_by_distinct_helper(a) - sort_by_distinct_helper(b);
    return (c) ? c : lexicographic_sort(a, b);
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b))
{
    char* large; int i, j;
    for(i = 0; i < len; i++){
		for (j = 0; j < len - i - 1; j++){
			if(cmp_func(arr[j], arr[j + 1]) > 0){
					large = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = large;
			}
		}
	}
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("\n");
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}