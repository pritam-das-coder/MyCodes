#include <stdio.h>
#include <stdlib.h>


struct Node {
    int coeff;
    int power;
    struct Node* next;
};


struct Node* createNode(int coeff, int power) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}


void insertNode(struct Node** head, int coeff, int power) {
    struct Node* newNode = createNode(coeff, power);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void buildPolynomial(struct Node** poly, int polyNumber) {
    int terms, coeff, power;
    printf("\nEntering Polynomial %d \n", polyNumber);
    printf("Enter the total number of terms: ");
    scanf("%d", &terms);
    
    printf("Please enter the terms in descending order of their powers.\n");
    for (int i = 0; i < terms; i++) {
        printf("Term %d - Enter coefficient and power (separated by space): ", i + 1);
        scanf("%d %d", &coeff, &power);
        insertNode(poly, coeff, power);
    }
}


struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->power > poly2->power) {
            insertNode(&result, poly1->coeff, poly1->power);
            poly1 = poly1->next;
        } 
        else if (poly1->power < poly2->power) {
            insertNode(&result, poly2->coeff, poly2->power);
            poly2 = poly2->next;
        } 
        else { 
            int sum = poly1->coeff + poly2->coeff;
            if (sum != 0) {
                insertNode(&result, sum, poly1->power);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    
    
    while (poly1 != NULL) {
        insertNode(&result, poly1->coeff, poly1->power);
        poly1 = poly1->next;
    }
    
    
    while (poly2 != NULL) {
        insertNode(&result, poly2->coeff, poly2->power);
        poly2 = poly2->next;
    }
    
    return result;
}


void printPolynomial(struct Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->power);
        poly = poly->next;
        if (poly != NULL) {
            if (poly->coeff >= 0)
                printf(" + ");
            else
                printf(" "); 
        }
    }
    printf("\n");
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    
    buildPolynomial(&poly1, 1);
    buildPolynomial(&poly2, 2);

    
    printf("\nResults\n");
    printf("Polynomial 1: ");
    printPolynomial(poly1);

    printf("Polynomial 2: ");
    printPolynomial(poly2);

    
    result = addPolynomials(poly1, poly2);

    printf("Resultant Polynomial: ");
    printPolynomial(result);

    return 0;
}