#include <stdio.h>

int main(){
   
   printf("char                    size  is            %ld \n",sizeof(char));                     // 1  (char)
   
   printf("signed char             size  is            %ld \n",sizeof(signed char));              // 1  (signed char)
   
   printf("usnigned char           size  is            %ld \n",sizeof(unsigned char));            // 1  (unsigned char) 
      
   printf("short int               size  is            %ld \n",sizeof(short int));                // 2  (short int)

   printf("unsigned int            size  is            %ld \n",sizeof(unsigned int));             // 4  (unsigned int)
   
   printf("int                     size  is            %ld \n",sizeof(int));                      // 4  (int)
   
   printf("float                   size  is            %ld \n",sizeof(float));                    // 4  (float)
   
   printf("long int                size  is            %ld \n",sizeof(long int));                 // 8  (long int)
        
   printf("long long int           size  is            %ld \n",sizeof(long long int));            // 8  (long long int)
   
   printf("double                  size  is            %ld \n",sizeof(double));                   // 8  (double)
    
   printf("unsigned long int       size  is            %ld \n",sizeof(unsigned long int));        // 8  (usnigned long int)
   
   printf("unsigned long long int  size  is            %ld \n",sizeof(unsigned long long int));   // 8  (unsigned long long int)

   printf("long double             size  is            %ld \n",sizeof(long double));              // 16 (long double)
  
   
   return 0;
}

