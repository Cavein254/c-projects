 #include <stdlib.h>
 #include <stdio.h>

 struct user 
 {
    char *name;
    char *email;
    int age;
 };


 struct User *new_user(char *name, char *email, int age)
 {
    struct User *user;
    return user;
 }

 int main(void)
 {
    struct User *user;

    user = new_user("Foo", "foo@bar.com", 98);

    if (user == NULL)
        return (1);
    printf("User %s created !\n", user->name);
    printf("His email is %s!\n", user->email);
    printf("And he is %d years old \n", user->age);
    return (0);
 }