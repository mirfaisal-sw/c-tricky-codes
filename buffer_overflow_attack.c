/***************************************************************************************
 *It gets worse when an attacker comes to know about a buffer over flow in your program
 *and he/she exploits it. Consider this example :
 ***************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;
    
    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}

/*********************************************************************************************
 * Let’s the run the program with correct password ie ‘thegeekstuff’ :
 * $ ./buffer_ovrflow_attack
 *
 *  Enter the password :
 *  thegeekstuff
 *
 *   Correct Password 
 *
 *    Root privileges given to the user
 *********************************************************************************************/

/*********************************************************************************************
 * But there is a possibility of buffer overflow in this program. The gets() 
 * function does not check the array bounds and can even write string of length greater than the 
 * size of the buffer to which the string is written.
 * Now, can you even imagine what can an attacker do with this kind of a loophole?
 *
 * Here is an example :
 *
 * $./buffer_overflow_attack 
 * Enter the password :
 * hhhhhhhhhhhhhhhhhhhh
 *
 * Wrong Password 
 *
 * Root privileges given to the user
 *
 *
 * In the above example, even after entering a wrong password, the program worked as if you gave 
 * the correct password.
 *
 * There is a logic behind the output above. What attacker did was, he/she supplied an input of 
 * length greater than what buffer can hold and at a particular length of input the buffer overflow
 * so took place that it overwrote the memory of integer ‘pass’. So despite of a wrong password, the
 * value of ‘pass’ became non zero and hence root privileges were granted to an attacker.
 *
 * To avoid buffer overflow attacks, the general advice that is given to programmers is to follow 
 * good programming practices. For example:
 *
 *       a. Make sure that the memory auditing is done properly in the program using utilities 
 *          like valgrind memcheck
 *       b. Use fgets() instead of gets().
 *       c. Use strncmp() instead of strcmp(), strncpy() instead of strcpy() and so on.
 *
 *************************************************************************************************/
