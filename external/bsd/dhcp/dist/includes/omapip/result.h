/*	$NetBSD: result.h,v 1.3 2016/01/10 20:10:45 christos Exp $	*/
/* result.h
 */

/*
 * Copyright (C) 2009,2014  Internet Systems Consortium, Inc. ("ISC")
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 *   Internet Systems Consortium, Inc.
 *   950 Charter Street
 *   Redwood City, CA 94063
 *   <info@isc.org>
 *   https://www.isc.org/
 */

#ifndef DHCP_RESULT_H
#define DHCP_RESULT_H 1

#include <isc/lang.h>
#include <isc/resultclass.h>
#include <isc/types.h>

#include <isc/result.h>

/*
 * DHCP result codes
 */

/*
 * In the previous code the results started at 36
 * rather than ISC_RESULTCLASS_DHCP + 0
 * ISC_R_NOTCONNECTED was + 4 (40), it has been superseded by the isc version
 */

#define DHCP_R_HOSTUNKNOWN	(ISC_RESULTCLASS_DHCP + 0)
#define DHCP_R_VERSIONMISMATCH	(ISC_RESULTCLASS_DHCP + 1)
#define DHCP_R_PROTOCOLERROR	(ISC_RESULTCLASS_DHCP + 2)
#define DHCP_R_INVALIDARG	(ISC_RESULTCLASS_DHCP + 3)
#define DHCP_R_NOTYET		(ISC_RESULTCLASS_DHCP + 4)
#define DHCP_R_UNCHANGED	(ISC_RESULTCLASS_DHCP + 5)
#define DHCP_R_MULTIPLE		(ISC_RESULTCLASS_DHCP + 6)
#define DHCP_R_KEYCONFLICT	(ISC_RESULTCLASS_DHCP + 7)
#define DHCP_R_BADPARSE		(ISC_RESULTCLASS_DHCP + 8)
#define DHCP_R_NOKEYS		(ISC_RESULTCLASS_DHCP + 9)
#define DHCP_R_KEY_UNKNOWN	(ISC_RESULTCLASS_DHCP + 10)
#define DHCP_R_INVALIDKEY	(ISC_RESULTCLASS_DHCP + 11)
#define DHCP_R_INCOMPLETE	(ISC_RESULTCLASS_DHCP + 12)
#define DHCP_R_FORMERR		(ISC_RESULTCLASS_DHCP + 13)
#define DHCP_R_SERVFAIL		(ISC_RESULTCLASS_DHCP + 14)
#define DHCP_R_NXDOMAIN		(ISC_RESULTCLASS_DHCP + 15)
#define DHCP_R_NOTIMPL		(ISC_RESULTCLASS_DHCP + 16)
#define DHCP_R_REFUSED		(ISC_RESULTCLASS_DHCP + 17)
#define DHCP_R_YXDOMAIN		(ISC_RESULTCLASS_DHCP + 18)
#define DHCP_R_YXRRSET		(ISC_RESULTCLASS_DHCP + 19)
#define DHCP_R_NXRRSET		(ISC_RESULTCLASS_DHCP + 20)
#define DHCP_R_NOTAUTH		(ISC_RESULTCLASS_DHCP + 21)
#define DHCP_R_NOTZONE		(ISC_RESULTCLASS_DHCP + 22)
#define DHCP_R_BADSIG		(ISC_RESULTCLASS_DHCP + 23)
#define DHCP_R_BADKEY		(ISC_RESULTCLASS_DHCP + 24)
#define DHCP_R_BADTIME		(ISC_RESULTCLASS_DHCP + 25)
#define DHCP_R_NOROOTZONE	(ISC_RESULTCLASS_DHCP + 26)
#define DHCP_R_DESTADDRREQ	(ISC_RESULTCLASS_DHCP + 27)
#define DHCP_R_CROSSZONE	(ISC_RESULTCLASS_DHCP + 28)
#define DHCP_R_NO_TSIG		(ISC_RESULTCLASS_DHCP + 29)
#define DHCP_R_NOT_EQUAL	(ISC_RESULTCLASS_DHCP + 30)
#define DHCP_R_CONNRESET	(ISC_RESULTCLASS_DHCP + 31)
#define DHCP_R_UNKNOWNATTRIBUTE	(ISC_RESULTCLASS_DHCP + 32)

#define DHCP_R_NRESULTS 	33	/*%< Number of results */

// Included for historical reasons, these should be removed as
// soon as reasonable
#ifdef INCLUDE_OLD_DHCP_ISC_ERROR_CODES
#define ISC_R_HOSTUNKNOWN	DHCP_R_HOSTUNKNOWN
#define ISC_R_VERSIONMISMATCH	DHCP_R_VERSIONMISMATCH
#define ISC_R_PROTOCOLERROR	DHCP_R_PROTOCOLERROR	
#define ISC_R_INVALIDARG	DHCP_R_INVALIDARG	
#define ISC_R_NOTYET		DHCP_R_NOTYET		
#define ISC_R_UNCHANGED		DHCP_R_UNCHANGED		
#define ISC_R_KEYCONFLICT	DHCP_R_KEYCONFLICT	
#define ISC_R_BADPARSE		DHCP_R_BADPARSE		
#define ISC_R_NOKEYS		DHCP_R_NOKEYS		
#define ISC_R_KEY_UNKNOWN	DHCP_R_KEY_UNKNOWN	
#define ISC_R_INVALIDKEY	DHCP_R_INVALIDKEY	
#define ISC_R_INCOMPLETE	DHCP_R_INCOMPLETE	
#define ISC_R_FORMERR		DHCP_R_FORMERR		
#define ISC_R_SERVFAIL		DHCP_R_SERVFAIL		
#define ISC_R_NXDOMAIN		DHCP_R_NXDOMAIN		
#define ISC_R_NOTIMPL		DHCP_R_NOTIMPL		
#define ISC_R_REFUSED		DHCP_R_REFUSED		
#define ISC_R_YXDOMAIN		DHCP_R_YXDOMAIN		
#define ISC_R_YXRRSET		DHCP_R_YXRRSET		
#define ISC_R_NXRRSET		DHCP_R_NXRRSET		
#define ISC_R_NOTAUTH		DHCP_R_NOTAUTH		
#define ISC_R_NOTZONE		DHCP_R_NOTZONE		
#define ISC_R_BADSIG		DHCP_R_BADSIG		
#define ISC_R_BADKEY		DHCP_R_BADKEY		
#define ISC_R_BADTIME		DHCP_R_BADTIME		
#define ISC_R_NOROOTZONE	DHCP_R_NOROOTZONE	
#define ISC_R_DESTADDRREQ	DHCP_R_DESTADDRREQ	
#define ISC_R_CROSSZONE		DHCP_R_CROSSZONE		
#define ISC_R_NO_TSIG		DHCP_R_NO_TSIG		
#define ISC_R_NOT_EQUAL		DHCP_R_NOT_EQUAL		
#define ISC_R_CONNRESET		DHCP_R_CONNRESET		
#define ISC_R_UNKNOWNATTRIBUTE	DHCP_R_UNKNOWNATTRIBUTE	
#endif

isc_result_t
dhcp_result_register(void);

#endif /* DHCP_RESULT_H */