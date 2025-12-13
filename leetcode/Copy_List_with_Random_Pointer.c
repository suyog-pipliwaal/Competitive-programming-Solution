#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int val;
	struct Node *next;
	struct Node *random;
	
};

struct Node* copyRandomList(struct Node* head) {
	if (head==NULL) return NULL;

	struct Node* curr = head;
	while (curr) {
		struct Node* copy = (struct Node*) malloc(sizeof(struct Node));
		copy->val = curr->val;
		copy->random = NULL;
		copy->next = curr->next;

		curr->next = copy;
		curr = copy->next;

	}
	curr = head;
	while(curr) {
		if (curr->random) {
			curr->next->random = curr->random->next;
		}
		curr = curr->next->next;
 	}
 	struct Node* copyHead = head->next;
    struct Node* copyCurr = copyHead;

    while (curr) {
        curr->next = curr->next->next;
        curr = curr->next;

        if (copyCurr->next) {
            copyCurr->next = copyCurr->next->next;
            copyCurr = copyCurr->next;
        }
    }

    return copyHead;
}
int main() {
    // Create nodes
    struct Node* n1 = malloc(sizeof(struct Node));
    struct Node* n2 = malloc(sizeof(struct Node));
    struct Node* n3 = malloc(sizeof(struct Node));

    // Assign values
    n1->val = 1;
    n2->val = 2;
    n3->val = 3;

    // Next pointers
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // Random pointers
    n1->random = n3;   // 1 -> 3
    n2->random = n1;   // 2 -> 1
    n3->random = NULL;

    // Copy list
    struct Node* copied = copyRandomList(n1);

    // Print copied list
    struct Node* curr = copied;
    while (curr) {
        printf("Node val: %d, Random val: %d\n",
               curr->val,
               curr->random ? curr->random->val : -1);
        curr = curr->next;
    }

    return 0;
}
