// //solid pattern  

// #include<stdio.h>
// int main()
// {
//    int i;
//    int j;

//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(i%2==0)
//            {
//                printf("5");

//            }
//            else
//            {
//                printf("2");

//            }
//        }printf("\n");
//    }
//    return 0;

// }


// //solid pattern with alternate colum
// #include<stdio.h>
// int main()
// {
// 	int r;
// 	int c;
	
// 	for(r=0;r<4;r++)
// 	{
// 		for(c=0;c<4;c++)
// 	{
// 		if(c %2==0)
// 		  printf("4");
		  
// 		  else
// 		  printf("5");
// 	}
// 	printf("\n");
// }
// return 0; 
// }


//Q3
// #include<stdio.h>
// int main()
// {
// 	int r;
// 	int c;
	
// 	for(r=0;r<5;r++)
// 	{
// 		for(c=0;c<5;c++)
// 		{
// 			if(r==0||r==4||c==0||c==4)
// 			{
// 				printf("*");
// 			}
// 			else
// 			{
// 				printf(" ");
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }



//Q4
//#include<stdio.h>
//int main()
//{
//	int r;
//	int c;
//	
//	for(r=0;r<5;r++)
//	{
//		for(c=0;c<5;c++)
//		{
//			if(r==0 || r==4 || c==0 || c==4 )
//			{
//			   if(r%2==0)
//			   {
//			   	printf("1");
//			   }
//			   else
//			   {
//			   	printf("0");
//			   }
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



// sollid pattern print pattern type peramid pattern 

// #include<stdio.h>
// int main()
// {
// 	int r;
// 	int c;
// 	int s;
// 	for( r=1;r<5;r++) //1;1<3
// 	{
// 		for(s=1;s<(5-r);s++)//1;1<2
// 		{
// 			printf(" ");
// 		}
// 		for(c=1;c<=(2*r-1);c++)//c=1;1<1
// 		{
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }



//print pattern type of (A)
// #include<stdio.h>
// int main()
// {
// 	int r;
// 	int c;
// 	for(r=0;r<6;r++)
// 	{
// 		for( c=0;c<6;c++)
// 		{
// 			if((c==2&&r==0)||(r==1&&c==1)||(r==1&&c==3)||r==2||
// 			(r==3&&c==0)||(r==3&&c==5)||(r==4&&c==0)||(r==4&&c==5))
// 			{
// 				printf("*");
// 			}
// 			else
// 			{
// 				printf(" ");
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

