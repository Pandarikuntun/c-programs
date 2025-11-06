/* arithmetic operator 
if one operand is integer other operand is float then result is float*/
void main()
{
	float x = 2.1;
	int y = 5;
	printf("%f\n",x+y);	//7.100000
	printf("%f\n",x-y);	//-2.100000
	printf("%f\n",x*y);	//10.500000
	printf("%f\n",x/y);	//0.420000
	//printf("%f\n",x%y);	//modulas is not valid operator output is float
}
