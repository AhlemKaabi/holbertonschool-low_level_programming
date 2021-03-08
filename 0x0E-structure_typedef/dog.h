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
typedef struct dog my_dog;
#endif
