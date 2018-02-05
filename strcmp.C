 #include<stdio.h>
 #include<string.h>
 void main()
 {
 char s1,s2;
 int result;
 printf("enter the first string:");
 gets(str1);
 printf("enter the second string:");
 gets(str2);
 res=compare(str1,str2);
 if(res<0)
 {
 printf("first string is smaller than the second string");
 }
 else(res>0)
 {
 printf("first string is greater than the second string");
 }
 }
