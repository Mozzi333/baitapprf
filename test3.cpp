#include<stdio.h>
int main(){
	double num1, num2, result;
	char op;
	printf("Nhap bieu thuc:");
	if(scanf("%lf%c%lf",&num1,&op,&num2) !=3) {
	printf("Dinh dang dau vao khong hop le.\n");
	    return 1;
	}
	switch (op){
		case '+':
			result= num1 + num2;
			printf("%.2lf\n",result);
			break;
		case '-':
			result=num1-num2;
			printf("%.2lf\n",result);
			break;
		case '*':
			result=num1*num2;
			printf("%.2lf\n",result);
			break;
		case '/':
			if (num2==0){
				printf("Chia cho 0 khong hop le.\n");
				}
			else {
				result=num1/num2;
				printf("%.2lf\n",result);
			
			}
			break;
		    default:
			    printf("Truong hop khong hop le.\n");
			
		    }
	return 	0;	
}