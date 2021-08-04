#include <stdio.h>
int main(){
    // typedef is a key word used to create a name for an existing datatype
    typedef int i;
    i number = 10;
    printf("The typedef value is %d\n",number);


    // enum is a keyword to create an enumerated datatype,  by default it takes 0
    enum days{mon=1,tue,wed,thus,fri,sat,sun};
    enum days date = sun;
    printf("The enum value of sunday is %d\n",date);
    return 0;
}