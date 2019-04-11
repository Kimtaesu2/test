#include <stdio.h>

int cal(char c,int a,int b)
{
	int ans;
	
	switch(c) {

		case '+':
			ans = a + b;
			break;
		case '-':
			ans = a - b;
			break;
		case '/':
			ans = a / b;
			break;
		case '*':
			ans = a * b;
			break;
		default:
			ans = 0; 
			break; 
	}

	return ans;
};

int main (void){

	int num1, num2, ans;
	char c;
	
	printf("\n연산자를 입력하세요: \n");
	scanf("%c", &c);
	printf("첫번째 숫자를 입력하세요: \n");
	scanf("%d", &num1);
	printf("두번째 숫자를 입력하세요: \n");
	scanf("%d", &num2);

	printf("결과값: %d", cal(c, num1, num2));
	printf("\n");

	return 0;

}
