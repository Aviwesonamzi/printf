#include"main.h"
/**
 * _printf - produces output according to a format
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i; count = 0;
	
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
