/* A  certain  grade  of  steel  is  graded  according  to  the  following  conditions:
(i)Hardness must be greater than 50
(ii)Carbon content must be less than 0.7
(iii)Tensile strength must be greater than 5600
The grades are as follows:
 Grade is 10 if all three conditions are met
 Grade is 9 if conditions (i) and (ii) are met
 Grade is 8 if conditions (ii) and (iii) are met
 Grade is 7 if conditions (i) and (iii) are met
 Grade is 6 if only one condition is met
 Grade is 5 if none of the conditions are met */
 #include<stdio.h>
 main()
 {
  int h,t,c;
  printf("enter value of hardness, tensile strenght and carbon content:");
  scanf("%d, %d, %f",&h,&t,&c);

  if (h>50 && c<0.7 && t>5600)
  printf("grade is 10");
  else if (h>50 && c<0.7 && t<=5600)
  printf("grade is 9");
  else if (h<=50 && c<0.7 && t>5600)
  printf("grade is 8");
  else if (h>50 && c>=0.7 && t>5600)
  printf("grade is 7");
  else if (h>50 || c<0.7 || t>5600)
  printf("grade is 6");
  else
  printf("grade is 5");
}
