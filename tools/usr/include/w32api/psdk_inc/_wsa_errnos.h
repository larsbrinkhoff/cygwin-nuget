/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef WSABASEERR

#define WSABASEERR		10000

#define WSAEINTR		(WSABASEERR + 4   )
#define WSAEBADF		(WSABASEERR + 9   )
#define WSAEACCES		(WSABASEERR + 13  )
#define WSAEFAULT		(WSABASEERR + 14  )
#define WSAEINVAL		(WSABASEERR + 22  )
#define WSAEMFILE		(WSABASEERR + 24  )

#define WSAEWOULDBLOCK		(WSABASEERR + 35  )
#define WSAEINPROGRESS		(WSABASEERR + 36  )
#define WSAEALREADY		(WSABASEERR + 37  )
#define WSAENOTSOCK		(WSABASEERR + 38  )
#define WSAEDESTADDRREQ		(WSABASEERR + 39  )
#define WSAEMSGSIZE		(WSABASEERR + 40  )
#define WSAEPROTOTYPE		(WSABASEERR + 41  )
#define WSAENOPROTOOPT		(WSABASEERR + 42  )
#define WSAEPROTONOSUPPORT	(WSABASEERR + 43  )
#define WSAESOCKTNOSUPPORT	(WSABASEERR + 44  )
#define WSAEOPNOTSUPP		(WSABASEERR + 45  )
#define WSAEPFNOSUPPORT		(WSABASEERR + 46  )
#define WSAEAFNOSUPPORT		(WSABASEERR + 47  )
#define WSAEADDRINUSE		(WSABASEERR + 48  )
#define WSAEADDRNOTAVAIL	(WSABASEERR + 49  )
#define WSAENETDOWN		(WSABASEERR + 50  )
#define WSAENETUNREACH		(WSABASEERR + 51  )
#define WSAENETRESET		(WSABASEERR + 52  )
#define WSAECONNABORTED		(WSABASEERR + 53  )
#define WSAECONNRESET		(WSABASEERR + 54  )
#define WSAENOBUFS		(WSABASEERR + 55  )
#define WSAEISCONN		(WSABASEERR + 56  )
#define WSAENOTCONN		(WSABASEERR + 57  )
#define WSAESHUTDOWN		(WSABASEERR + 58  )
#define WSAETOOMANYREFS		(WSABASEERR + 59  )
#define WSAETIMEDOUT		(WSABASEERR + 60  )
#define WSAECONNREFUSED		(WSABASEERR + 61  )
#define WSAELOOP		(WSABASEERR + 62  )
#define WSAENAMETOOLONG		(WSABASEERR + 63  )
#define WSAEHOSTDOWN		(WSABASEERR + 64  )
#define WSAEHOSTUNREACH		(WSABASEERR + 65  )
#define WSAENOTEMPTY		(WSABASEERR + 66  )
#define WSAEPROCLIM		(WSABASEERR + 67  )
#define WSAEUSERS		(WSABASEERR + 68  )
#define WSAEDQUOT		(WSABASEERR + 69  )
#define WSAESTALE		(WSABASEERR + 70  )
#define WSAEREMOTE		(WSABASEERR + 71  )

#define WSASYSNOTREADY		(WSABASEERR + 91  )
#define WSAVERNOTSUPPORTED	(WSABASEERR + 92  )
#define WSANOTINITIALISED	(WSABASEERR + 93  )

#define WSAEDISCON		(WSABASEERR + 101 )

#ifndef WSAHOST_NOT_FOUND
#define WSAHOST_NOT_FOUND	(WSABASEERR + 1001)
#endif
#ifndef WSATRY_AGAIN
#define WSATRY_AGAIN		(WSABASEERR + 1002)
#endif
#ifndef WSANO_RECOVERY
#define WSANO_RECOVERY		(WSABASEERR + 1003)
#endif
#ifndef WSANO_DATA
#define WSANO_DATA		(WSABASEERR + 1004)
#endif

#endif	/* WSABASEERR */

#ifdef _WINSOCK2API_

#ifndef WSAENOMORE
#define WSAENOMORE		(WSABASEERR + 102)
#endif
#ifndef WSAECANCELLED
#define WSAECANCELLED		(WSABASEERR + 103)
#endif
#ifndef WSAEINVALIDPROCTABLE
#define WSAEINVALIDPROCTABLE	(WSABASEERR + 104)
#endif
#ifndef WSAEINVALIDPROVIDER
#define WSAEINVALIDPROVIDER	(WSABASEERR + 105)
#endif
#ifndef WSAEPROVIDERFAILEDINIT
#define WSAEPROVIDERFAILEDINIT	(WSABASEERR + 106)
#endif
#ifndef WSASYSCALLFAILURE
#define WSASYSCALLFAILURE	(WSABASEERR + 107)
#endif
#ifndef WSASERVICE_NOT_FOUND
#define WSASERVICE_NOT_FOUND	(WSABASEERR + 108)
#endif
#ifndef WSATYPE_NOT_FOUND
#define WSATYPE_NOT_FOUND	(WSABASEERR + 109)
#endif
#ifndef WSA_E_NO_MORE
#define WSA_E_NO_MORE		(WSABASEERR + 110)
#endif
#ifndef WSA_E_CANCELLED
#define WSA_E_CANCELLED		(WSABASEERR + 111)
#endif
#ifndef WSAEREFUSED
#define WSAEREFUSED		(WSABASEERR + 112)
#endif
#ifndef WSA_QOS_RECEIVERS
#define WSA_QOS_RECEIVERS	(WSABASEERR + 1005)
#endif
#ifndef WSA_QOS_SENDERS
#define WSA_QOS_SENDERS		(WSABASEERR + 1006)
#endif
#ifndef WSA_QOS_NO_SENDERS
#define WSA_QOS_NO_SENDERS	(WSABASEERR + 1007)
#define WSA_QOS_NO_RECEIVERS	(WSABASEERR + 1008)
#define WSA_QOS_REQUEST_CONFIRMED (WSABASEERR + 1009)
#define WSA_QOS_ADMISSION_FAILURE (WSABASEERR + 1010)
#define WSA_QOS_POLICY_FAILURE	(WSABASEERR + 1011)
#define WSA_QOS_BAD_STYLE	(WSABASEERR + 1012)
#define WSA_QOS_BAD_OBJECT	(WSABASEERR + 1013)
#define WSA_QOS_TRAFFIC_CTRL_ERROR (WSABASEERR + 1014)
#define WSA_QOS_GENERIC_ERROR	(WSABASEERR + 1015)
#define WSA_QOS_ESERVICETYPE	(WSABASEERR + 1016)
#define WSA_QOS_EFLOWSPEC	(WSABASEERR + 1017)
#define WSA_QOS_EPROVSPECBUF	(WSABASEERR + 1018)
#endif
#ifndef WSA_QOS_EFILTERSTYLE
#define WSA_QOS_EFILTERSTYLE	(WSABASEERR + 1019)
#endif
#ifndef WSA_QOS_EFILTERTYPE
#define WSA_QOS_EFILTERTYPE	(WSABASEERR + 1020)
#endif
#ifndef WSA_QOS_EFILTERCOUNT
#define WSA_QOS_EFILTERCOUNT	(WSABASEERR + 1021)
#endif
#ifndef WSA_QOS_EOBJLENGTH
#define WSA_QOS_EOBJLENGTH	(WSABASEERR + 1022)
#endif
#ifndef WSA_QOS_EFLOWCOUNT
#define WSA_QOS_EFLOWCOUNT	(WSABASEERR + 1023)
#endif
#ifndef WSA_QOS_EUNKNOWNPSOBJ
#define WSA_QOS_EUNKNOWNPSOBJ	(WSABASEERR + 1024)
#endif
#ifndef WSA_QOS_EPOLICYOBJ
#define WSA_QOS_EPOLICYOBJ	(WSABASEERR + 1025)
#endif
#ifndef WSA_QOS_EFLOWDESC
#define WSA_QOS_EFLOWDESC	(WSABASEERR + 1026)
#endif
#ifndef WSA_QOS_EPSFLOWSPEC
#define WSA_QOS_EPSFLOWSPEC	(WSABASEERR + 1027)
#endif
#ifndef WSA_QOS_EPSFILTERSPEC
#define WSA_QOS_EPSFILTERSPEC	(WSABASEERR + 1028)
#endif
#ifndef WSA_QOS_ESDMODEOBJ
#define WSA_QOS_ESDMODEOBJ	(WSABASEERR + 1029)
#endif
#ifndef WSA_QOS_ESHAPERATEOBJ
#define WSA_QOS_ESHAPERATEOBJ	(WSABASEERR + 1030)
#endif
#ifndef WSA_QOS_RESERVED_PETYPE
#define WSA_QOS_RESERVED_PETYPE	(WSABASEERR + 1031)
#endif

#endif	/* _WINSOCK2API_ */

#ifndef __WSA_ERR_MACROS_DEFINED
#define __WSA_ERR_MACROS_DEFINED
#define h_errno		WSAGetLastError()
#define HOST_NOT_FOUND	WSAHOST_NOT_FOUND
#define TRY_AGAIN	WSATRY_AGAIN
#define NO_RECOVERY	WSANO_RECOVERY
#define NO_DATA		WSANO_DATA

#define WSANO_ADDRESS	WSANO_DATA
#define NO_ADDRESS	WSANO_ADDRESS
#endif	/* __WSA_ERR_MACROS_DEFINED */

#if 0
#define EWOULDBLOCK	WSAEWOULDBLOCK
#define EINPROGRESS	WSAEINPROGRESS
#define EALREADY	WSAEALREADY
#define ENOTSOCK	WSAENOTSOCK
#define EDESTADDRREQ	WSAEDESTADDRREQ
#define EMSGSIZE	WSAEMSGSIZE
#define EPROTOTYPE	WSAEPROTOTYPE
#define ENOPROTOOPT	WSAENOPROTOOPT
#define EPROTONOSUPPORT	WSAEPROTONOSUPPORT
#define ESOCKTNOSUPPORT	WSAESOCKTNOSUPPORT
#define EOPNOTSUPP	WSAEOPNOTSUPP
#define EPFNOSUPPORT	WSAEPFNOSUPPORT
#define EAFNOSUPPORT	WSAEAFNOSUPPORT
#define EADDRINUSE	WSAEADDRINUSE
#define EADDRNOTAVAIL	WSAEADDRNOTAVAIL
#define ENETDOWN	WSAENETDOWN
#define ENETUNREACH	WSAENETUNREACH
#define ENETRESET	WSAENETRESET
#define ECONNABORTED	WSAECONNABORTED
#define ECONNRESET	WSAECONNRESET
#define ENOBUFS		WSAENOBUFS
#define EISCONN		WSAEISCONN
#define ENOTCONN	WSAENOTCONN
#define ESHUTDOWN	WSAESHUTDOWN
#define ETOOMANYREFS	WSAETOOMANYREFS
#define ETIMEDOUT	WSAETIMEDOUT
#define ECONNREFUSED	WSAECONNREFUSED
#define ELOOP		WSAELOOP
#define ENAMETOOLONG	WSAENAMETOOLONG
#define EHOSTDOWN	WSAEHOSTDOWN
#define EHOSTUNREACH	WSAEHOSTUNREACH
#define ENOTEMPTY	WSAENOTEMPTY
#define EPROCLIM	WSAEPROCLIM
#define EUSERS		WSAEUSERS
#define EDQUOT		WSAEDQUOT
#define ESTALE		WSAESTALE
#define EREMOTE		WSAEREMOTE
#endif	/* #if 0 */

