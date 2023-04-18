#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Description: struct dog is a structure that holds information about a dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
