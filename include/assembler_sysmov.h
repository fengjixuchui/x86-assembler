/* x86 assembler
 * the-scientist@rootstorm.com
 * spl0its-r-us security
 */

#ifndef ASSEMBLER_SYSMOV_H
#define ASSSEMBLER_SYSMOV_H

#include <stdlib.h>             // int 8 

 /* usage example for sysmov instruction
  * sysmov sys_exit      ; mov eax, 0x1
  * mov ebx, 0           ;
  * int 0x80             ; exit(0);
  */

int8_t get_sysmov_eax_value(const char* syscall);

#endif // ASSSEMBLER_SYSMOV_H