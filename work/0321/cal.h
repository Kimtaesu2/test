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
