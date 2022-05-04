#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int bufferSize = 1024;
FILE *source;
FILE *dest;

int n = 1,i,k;
int counter;
unsigned char nibble[2];
unsigned char Buffer1[5120];
unsigned char Buffer[1024];
unsigned int uiSize , uiRead, uiLoop, uiRetcode;
unsigned char *gptrString = NULL;

int main()
 {
   
    source = fopen("mir.bin", "rb"); //open file for reading
    
    fseek(source,0,SEEK_END);
    uiSize = ftell(source);
    fseek(source,0,SEEK_SET);  //Determine the size of file
    printf("%d\n",uiSize);
    
    gptrString = malloc(uiSize);
    
    uiRead = (unsigned int)fread(gptrString,1,uiSize,source);
    fclose(source);
    
    dest = fopen("sunny","wb");
    fprintf(dest, "//No. Of Bytes in File = %d //",uiSize);
    fprintf(dest, "\r\n \r\n");
    fprintf(dest, "unsigned char Arr[] = {  ");
    for(uiLoop =0; uiLoop < uiSize; uiLoop++)
    {
        if(uiLoop == uiSize -1)
        {
        uiRetcode = fprintf(dest, "0x%02x }; ", (unsigned char)gptrString[uiLoop]);
        break;
        }
        
        uiRetcode = fprintf(dest, "0x%02x,  ", (unsigned char)gptrString[uiLoop]);
        
        if((uiLoop%10) == 0) 
        { 
         uiRetcode =   fprintf(dest, "\r\n   ");
        }
    }   
  //   fprintf(dest, "} ");       
    
    fclose(dest);
    getch();
    return 0;
    
}
