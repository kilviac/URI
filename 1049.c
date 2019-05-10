#include <stdio.h>
#include <string.h>

int main() {
    char reino[20], classe[20], ordem[20];
    scanf("%s %s %s", reino, classe, ordem);
    
    if (strcmp (reino, "vertebrado") == 0 && strcmp (classe, "ave") == 0 && strcmp (ordem, "carnivoro") == 0) {
    	printf("aguia\n");
	} else if (strcmp (reino, "vertebrado") == 0 && strcmp (classe, "ave") == 0 && strcmp (ordem, "onivoro") == 0) {
		printf("pomba\n");

	} else if (strcmp (reino, "vertebrado") == 0 && strcmp (classe, "mamifero") == 0 && strcmp (ordem, "onivoro") == 0) {
		printf("homem\n");
	} else if (strcmp (reino, "vertebrado") == 0 && strcmp (classe, "mamifero") == 0 && strcmp (ordem, "herbivoro") == 0) {
		printf("vaca\n");
		
	} else if (strcmp (reino, "invertebrado") == 0 && strcmp (classe, "inseto") == 0 && strcmp (ordem, "hematofago") == 0) {
		printf("pulga\n");
	} else if (strcmp (reino, "invertebrado") == 0 && strcmp (classe, "inseto") == 0 && strcmp (ordem, "herbivoro") == 0) {
		printf("lagarta\n");
		
	} else if (strcmp (reino, "invertebrado") == 0 && strcmp (classe, "anelideo") == 0 && strcmp (ordem, "hematofago") == 0) {
		printf("sanguessuga\n");
	} else if (strcmp (reino, "invertebrado") == 0 && strcmp (classe, "anelideo") == 0 && strcmp (ordem, "onivoro") == 0) {
		printf("minhoca\n");
	}
    
    return 0;
}
