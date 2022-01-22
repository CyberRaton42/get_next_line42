
# ***Get Next Line***

## *Reading a line from a fd is way too tedious*

### Get Next Line is 42cursus project, which goal is to create a function that can read a file, outputing one line at a time.

>Sub goal : understanding static variables.  

>Subject available in files.  

## **Implementation**
--------------------------------------------------------------------------------------------------------------------------------

Feel free to use my work in your own projects, please credit me if you do.  
To use my get_next_line fuction, simply include `get_next_line.h in` your own header file, and use the `get_next_line` function by giving it the file descriptor of the file you wanna read. The bonus files can be used to read multiple files simultaneously (up to 1024).  
*Note : the memory of the string outputted has been allocated using the `malloc` function (found in stdlib.h), and thus must freed using the `free` function, later in your program.*