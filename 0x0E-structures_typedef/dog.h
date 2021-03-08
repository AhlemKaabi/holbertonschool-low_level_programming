#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
* struct dog - a struct for a dog
* @name: its name
* @age:its age
* @owner: its owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
