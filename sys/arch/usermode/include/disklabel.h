/* $NetBSD: disklabel.h,v 1.13 2013/11/10 19:52:01 jmcneill Exp $ */

/*
 * Automatically generated by genheaders.sh on Sun Nov 10 15:47:57 AST 2013
 * Do not modify directly!
 */
#ifndef _USERMODE_DISKLABEL_H
#define _USERMODE_DISKLABEL_H

#if defined(__i386__)
#include "../../i386/include/disklabel.h"
#elif defined(__x86_64__)
#include "../../amd64/include/disklabel.h"
#elif defined(__arm__)
#include "../../arm/include/disklabel.h"
#else
#error port me
#endif
#include <machine/types.h>
#ifndef __HAVE_OLD_DISKLABEL
#undef DISKUNIT
#undef DISKPART
#undef DISKMINOR
#endif

#endif