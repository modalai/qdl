#include <stdarg.h>
#include <stdio.h>

void modal_log(const char* format, ...) {
	va_list args;
	va_start(args, format);
	printf("[MODALAI] ");
	vprintf(format, args);
	printf("\n");
	va_end(args);
}
