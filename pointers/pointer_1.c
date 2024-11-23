/*=================
int *const ptr;
===================*/
int main()
{
    
    int a = 6, b = 10;
    int *const ptr = &a;
        
    printf("%d\n", *ptr);    
    ptr = &b;    
    printf("%d\n", *ptr);
    
    return 0;
}
/*
Error o/p: - 
error: assignment of read-only variable ‘ptr’      
*/

/*=================
int const *ptr;
====================*/
int main()
{
    
    int a = 6;
    int const *ptr = &a; 
	
    *ptr = 25;    
    printf("a = %d\n", a);    
  
    return 0;
}

/*
Error o/p: -
error: assignment of read-only location ‘*ptr’
*/
