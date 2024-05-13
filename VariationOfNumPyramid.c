/*
Construct the following pyramid of numbers
1
232
34543
4567654
567898765
67890109876
7890123210987
890123454321098
90123456765432109
0123456789876543210
Create variations to create Left, center and right aligned pyramids.  right aligned pyramid looks like below
           1
         232
       345434567654
*/

#include<stdio.h>
#include<stdlib.h>
void leftSide(int n){
    int x = 1;
    int y = 1;
    for(int i=1;i<=n;i++){
      //number
      for(int j=x;j<=y;j++){
        int val= j%10;
        printf("%d\t",val);
      }
      //number
      for(int j=y-1;j>=x;j--)
		  {
			  int val= j%10;
        printf("%d\t",val);
		  }
      y+=2;
      x++;
      printf("\n");
    }
}
void center(int n){
    int x = 1;
    int y = 1;
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
        printf("\t");
      }
      //number
      for(int j=x;j<=y;j++){
        int val= j%10;
        printf("%d\t",val);
      }
      //number
      for(int j=y-1;j>=x;j--)
		  {
			  int val= j%10;
        printf("%d\t",val);
		  }
      y+=2;
      x++;
      printf("\n");
    }
}
void rightSide(int n) {
    int x = 1;
    int y = 1;
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
        printf("\t\t");
      }
      for(int j=x;j<=y;j++){
        int val= j%10;
        printf("%d\t",val);
      }
      for(int j=y-1;j>=x;j--)
		  {
			  int val= j%10;
        printf("%d\t",val);
		  }
      y+=2;
      x++;
      printf("\n");
    }
}
void main()
{
  int n,choice;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  while(1){
      printf("1.left side\n2.center\n3.right side\n4.exit");
      printf("Enter the position : ");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1: leftSide(n);
              break;
      case 2: center(n);
              break;
      case 3: rightSide(n);
              break;
      case 4: exit(0);
      default:printf("Invalid choice\n");
        break;
      }
  }
}