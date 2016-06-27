#include<stdio.h>
#include<string.h>

main(){



char searchname[15], name[15], telephone[14];
FILE *fp;
printf("ENTER THE SEARCH NAME: ");
scanf("%s", searchname);
fp = fopen("data.in", "r");
while(fscanf(fp, "%s%s", name, telephone) != EOF){
   if( strcmp (searchname, name) == 0 ) {
      printf("%s\n", telephone);
      return 0;

   } /*end of if*/
 } /*end of loop*/

printf("NAME NOT FOUND\n");
return 0;
}/*end of main */
