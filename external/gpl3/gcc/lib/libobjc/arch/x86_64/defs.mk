# This file is automatically generated.  DO NOT EDIT!
# Generated from: NetBSD: mknative-gcc,v 1.70 2013/05/05 07:11:34 skrll Exp 
# Generated from: NetBSD: mknative.common,v 1.8 2006/05/26 19:17:21 mrg Exp 
#
G_ALL_OPT_FILES=${GNUHOSTDIST}/gcc/lto/lang.opt ${GNUHOSTDIST}/gcc/c-family/c.opt ${GNUHOSTDIST}/gcc/common.opt ${GNUHOSTDIST}/gcc/config/fused-madd.opt ${GNUHOSTDIST}/gcc/config/i386/i386.opt ${GNUHOSTDIST}/gcc/config/netbsd.opt ${GNUHOSTDIST}/gcc/config/netbsd-elf.opt
G_ALL_CFLAGS=-I. -I${GNUHOSTDIST}/libobjc   -g -O2  -W -Wall -Wwrite-strings -Wstrict-prototypes -DIN_GCC -DIN_TARGET_LIBS -fno-strict-aliasing -fexceptions
G_INCLUDES=-I${GNUHOSTDIST}/libobjc/../gcc -I${GNUHOSTDIST}/libobjc/../gcc/config -I../.././gcc -I${GNUHOSTDIST}/libobjc/../libgcc -I../libgcc -I${GNUHOSTDIST}/libobjc/../include 
G_OBJC_SOURCE_FILES=NXConstStr.m Object.m Protocol.m accessors.m linking.m
G_C_SOURCE_FILES=class.c encoding.c error.c gc.c hash.c init.c ivars.c memory.c methods.c nil_method.c objc-foreach.c objc-sync.c objects.c protocols.c sarray.c selector.c sendmsg.c thr.c exception.c
G_OBJC_H=objc.h objc-exception.h objc-sync.h NXConstStr.h Object.h Protocol.h message.h objc-decls.h runtime.h thr.h
G_CONFIGLINKS=${GNUHOSTDIST}/libgcc/enable-execute-stack-mprotect.c  enable-execute-stack.c ${GNUHOSTDIST}/libgcc/unwind-generic.h  unwind.h ${GNUHOSTDIST}/libgcc/config/no-unwind.h  md-unwind-support.h ${GNUHOSTDIST}/libgcc/config/i386/sfp-machine.h  sfp-machine.h ${GNUHOSTDIST}/libgcc/gthr-posix.h  gthr-default.h 