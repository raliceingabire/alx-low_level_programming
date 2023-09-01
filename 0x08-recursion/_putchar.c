#include <unistd.h>
/** my putchar
 */
int _putchar(char c )
{
return write(STDOUT_FILENO, &C, 1);
}
