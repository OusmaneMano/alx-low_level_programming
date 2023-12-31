#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a basic dog's info
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
char *_strcpy(char *dset, char *src);
int _strlen(char *s);

#endif
