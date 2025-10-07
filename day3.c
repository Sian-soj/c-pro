#include <stdio.h>
int main(){
    //multidimensional array!!!
    //so beforre that lemme recall what i did yesterday

    int age[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("%d\n", age[0]);

    // To store strings, you can use a 2D char array.
    char name[3][5] = {"suji", "mama", "fifi"};
    printf("%s\n", name[0]);
    printf("%s\n", name[1]);
    printf("%s\n", name[2]);

    // i have no clue why i was told to use 2d char array..... lemme check
    /*damn so basically what it is saying is that 3 represents the rows and 5 represents the columns.
    frm what i understood here 3 represents the number of items in the array
    and 5 represents the characters.
    here there is a special character \0 which is a null string to let the c know that this string ended*/

    // cool stuff

    //type name[size1][size2]...[sizeN];

    int family[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    printf("%d\n", family[0][0]);
    printf("%d\n", family[0][1]);
    printf("%d\n", family[0][2]);

    return 0;


    // guys just remember to alwyas put return 0 at the very last end!
    

    
}