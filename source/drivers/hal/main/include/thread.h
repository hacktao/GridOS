/**
*   See the readme.txt at the root directory of this project for the idea and originality of this operating system.
*   See the license.txt at the root directory of this project for the copyright information about this file and project.
*
*   Wuxin
*   �߳�����
*/

#ifndef KT_THREAD_H
#define KT_THREAD_H

#include "object.h"

/* Thread privilege level */
#define KT_CPL0						0
#define KT_USER						3

struct arch_thread
{

};
struct kt_thread
{
	struct arch_thread arch;
	struct cl_object object;

};

#endif
