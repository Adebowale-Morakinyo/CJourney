// GENERAL SYNTAX

/*
data_type array_name[array_size];
*/

// declaring an array
#include <stdio.h>

int main(){
    int grades[5];
}

// declaring plus initializing
#include <stdio.h>

int main() {

   int grades[5] = {50, 75, 100, 67, 90};
}

// case of partial initiallization: In this case, the remaining two elements will be set to 0.
#include <stdio.h>

int main() {

   int grades[5] = {50, 75, 100};
}

//Another way to initialize arrays is to omit the array's length inside the 
//square brackets and only assign the initial values, like so:
#include <stdio.h>

int main() {

   int grades[] = {50, 75, 100, 67, 90};
}
