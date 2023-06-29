/* ch11 nested.c */

#include <stdio.h>
#include <stdlib.h>

struct name
{
   	char *first;
   	char *last;
};
   
struct address
{
   	char *city;
   	char *road;
};
   
struct client
{
   	struct name name;
   	struct address address;
   	int age;
   	int length;
   	char sex;
};
   
int main()
{
    struct client somebody = {{"Joan","Lin"},
   			                  {"Taipei","110 Chung-shan St."},
   			                    22,173,
   			                    'F'
                             };
   			    
    printf("	NAME : %s %s\n",somebody.name.first,
   				somebody.name.last);
    printf("	ADDRESS: %s, %s\n",somebody.address.road,
   				somebody.address.city);
    printf("	AGE : %d\n",somebody.age);
    printf("	LENGTH : %d\n",somebody.length);
    printf("	SEX : %c\n",somebody.sex);
   
    system("PAUSE");
    return 0;
}
