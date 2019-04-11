#include <stdio.h>

int main (void){

	int num1, num2;
	char c;
	
	printf("\n연산자를 입력하세요: \n");
	scanf("%c", &c);
	printf("첫번째 숫자를 입력하세요: \n");
	scanf("%d", &num1);
	printf("두번째 숫자를 입력하세요: \n");
	scanf("%d", &num2);

	switch(c){

		case '+':
			printf("결과: %d\n",num1 + num2);
			break;
		case '-':
			printf("결과: %d\n",num1 - num2);
			break;
		case '/':
			printf("결과: %d\n",num1 / num2);
			break;
		case '*':
			printf("결과: %d\n",num1 * num2);
			break;
		default:
			break;
		}


	printf("\n");

	return 0;

}
