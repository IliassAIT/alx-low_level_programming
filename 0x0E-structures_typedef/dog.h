#ifndef DGG_H
#define DGG_H
/**
 * struct dog - Structures that define a dog
 * @name: the name of the dog.
 * @age: the current age of the dog.
 * @owner: the dogs owner name.
 * Description: a struct that contains a dogs attributes
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - is the new declaration way pf struct dog using typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
