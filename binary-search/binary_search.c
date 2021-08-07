////print multiples of 3 in 1-100.
//#include <stdio.h>
//
//int main()
//
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if(i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}	
//	}
//	return 0;
//}





//find the greatest common divisor
//#include <stdio.h>
//
//int main()
//
//{
//	int a = 24;
//	int b = 18;
//	int modulus = 0;
//	scanf ("%d %d", &a, &b);
//	while (a % b)//Euclid's algorithm; a % b = 0 is false, then stop loop\
//a % b != 0 is true, then continue loop.
//	{	
//		modulus = a%b;
//		a = b;
//		b = modulus;
//	}
//	printf ("%d\n", b);
//	return 0;
//}




//print leap year.
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year=1000; year<=2000; year++)
//	{
//		if ((year%4==0) && (year%100!=0))
//		{
//			printf ("%d ", year);
//			count++;
//		}
//		else if ((year%400) == 0)
//		{
//			printf ("%d ", year);
//			count++;
//		}
//	}
//	// or if (((year%4==0) && (year%100!=0)) || ((year%400)==0)))
//	printf ("\ncount = %d", count);
//	return 0;
//}




//how many number can show between 1-100.
//#include <stdio.h>
//
//int main()
//
//{
//	int i = 0;
//	int count = 0;
//	for (i=1; i<=100; i++)
//	{
//		if (i%10 == 9)
//		{
//			printf("%d\n", i);
//			count++;	
//		}
//		if (i/10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}




//calculate the answer of 1/1-1/2+1/3-1/4...+1/99-1/100 and print.
//#include <stdio.h>
//
//int main()
//
//{
//	int i = 0;
//	float k = 0;
//	float answer = 0.0;
//	for (i=1; i<=100; i++)
//	{
//		//or answer += flag*1.0/i;
//		//flag = -flag
//		if (i%2 == 0)
//		{
//			k = -(1.0/i);
//		}	
//		if (i%2 == 1)
//		{
//			k = 1.0/i;
//		}
//		answer = answer + k;
//	}
//	printf("%lf\n", answer);
//	return  0;
//} 




//print multiplication formula table
//#include <stdio.h>
//
//int main()
//
//{
//	int i = 0;
//	int j = 0;
//	int product = 0;
//	for (i=1; i<=9; i++)
//	{
//		for (j=1; j<=9; j++)
//		{
//			if (j <= i)
//			{
//				product = i * j;
//				printf("%d*%d=%-2d ", i, j, product);//2d express right-justified two-digit integer, and -2d express left-justified two-digit integer.
//			}
//		}
//		printf("\n");
//	}
//		
//		
//
//	return 0;
//}




//binary search method.
#include <stdio.h>
int main()

{
	int key = 11;
	int sz = 0;
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	sz = sizeof (arr)/sizeof (arr[0]);
	int left = 0;
	int right = sz - 1;
	while (right >= left)
	{	int mid = (right + left)/2;
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
		else 
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (right < left)
	{
		printf("not find.\n");
	}	
	return 0;
}
