#define MAX_SIZE 100000
#include <stdio.h>
#include <string.h>
typedef int element;

typedef struct {
	element data[MAX_SIZE];
	int top;
} stack_type;

typedef stack_type* stack_type_ptr;

void init(stack_type_ptr inputStack);
void push(stack_type_ptr inputStack, element data);
int is_empty(stack_type inputStack);
int is_full(stack_type inputStack);
element pop(stack_type_ptr inputStack);
element peek(stack_type inputStack);


int main() {
	stack_type s;
	init(&s);
	int times;
	scanf("%d", &times);
	char inputs[10];
	for (int i = 0; i < times; i++) {
		scanf("%s", inputs);
		if (strcmp(inputs, "push") == 0) {
			int temp;
			scanf("%d", &temp);
			push(&s, temp);
		}
		else if (strcmp(inputs, "pop") == 0) {
			printf("%d\n", pop(&s));
		}
		else if (strcmp(inputs, "empty") == 0) {
			printf("%d\n", is_empty(s));
		}
		else if (strcmp(inputs, "size") == 0) {
			printf("%d\n", s.top + 1);
		}
		else if (strcmp(inputs, "top") == 0) {
			printf("%d\n", peek(s));
		}
	}


}

void init(stack_type_ptr inputStack) {
	inputStack->top = -1;
}

void push(stack_type_ptr inputStack, element data) {

	if (is_full(*inputStack)) {
		printf("더이상 데이터를 넣을 수 없습니다!");
		exit(1);
	}
	else {
		inputStack->top += 1;
		inputStack->data[inputStack->top] = data;
	}

}

int is_empty(stack_type inputStack) {
	return ((inputStack.top == -1));
}

int is_full(stack_type inputStack) {

	return  (inputStack.top == (MAX_SIZE - 1));
}


element pop(stack_type_ptr inputStack) {

	if (is_empty(*inputStack)) {
		return -1;
	}
	else {
		element returnData = inputStack->data[inputStack->top];

		inputStack->top -= 1;

		return returnData;
	}

}
element peek(stack_type inputStack) {
	if (is_empty(inputStack)) {
		return -1;
	}
	return inputStack.data[inputStack.top];
}
