#_printf
This is  our creation and case implementation of the `_printf` function (A function similar to the popular **printf** function in the C programming language)
## Description
The function prints out all arguments passed to it to the standard output.
Its prototype is as follows: `int _printf(const char *format, ...)`.
It takes a character string and a variable number of arguments and return the length of the characters printed out to standard output.
Format specifiers that can be received and interpreted by the function include:
* `%s` Prints out a string
* `%c` Prints out a character
* `%d` Prints out a decimal
* `%i` Prints out an integer
* `%%` Prints out the % sign
## Case implementation
An example of how the `_printf` function can be implemented is as follows:
Input:
`_printf("This is %d %s",1,"string");`
Expected output:
`This is 1 string`
## Contributions
Contributions are certainly what makes the open source community great. To contribute to our project so as to improve/add to its functionality:
1. Fork the project
2. Create your feature branch (`git checkout -b feature/MoreFunctionality`)
3. Commit changes (`git commit -m "Add MoreFunctionality"`) 
4. Push your changes (`git push origin feature/MoreFunctionality`)
5. Open a pull request.
## Authors
* Bruno Obonyo  (nyikal1999@gmail.com)
* Glory Ademola (ademolaglory2003@gmail.com)
