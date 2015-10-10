# C-Programming-Lab-3

C programming lab 3 for COMP 2510

3 functions to implement using the following loop:

int c;
while((c = getchar()) != EOF)
{
    putchar(c);
}

----------------------------------------------------------------------------------------
Function 1: 
            void uppercase_first(void);
            
    Echoes back what it reads but with the first character of each word printed in 
    uppercase (if it is an alphabet) and the rest of the characters in the word
    unchanged. Except for the very first character in the input, we regard a character
    (that is not whitespace) as the first character of a word if it immediatley follows a 
    whitespace. If the input begins with an alphabet, that alphabet is displayed in 
    uppercase aswell.
    
    For example if the input is
    
        HeLlo beauTiful world
        
    then the output would be 
        
        HeLlo BeauTiful World
        
----------------------------------------------------------------------------------------
Function 2: 
            void uppercase_last(void);

    similiar to uppercase_first function except that the last character of the work is
    echoed back in uppercase, the rest unchanged. For the sake of simplicity we will    
    regard a character as the last character if it is followed by whitespace.
  
----------------------------------------------------------------------------------------
Function 3: 
            void squeeze_spaces(void);
                
    A consecutive sequence of characters in the input will result in a single instance
    of the space character in the output. All other characters are echoed back unchanged.
    