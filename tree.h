/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TREE_H_RPCGEN
#define _TREE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef struct Nodo *PNodo;

struct Nodo {
	int valor;
	PNodo izq;
	PNodo der;
};
typedef struct Nodo Nodo;

#define TREE 0x20000001
#define VTREE 1

#if defined(__STDC__) || defined(__cplusplus)
#define pone 1
extern  void * pone_1(int , CLIENT *);
extern  void * pone_1_svc(int , struct svc_req *);
#define arbol 2
extern  PNodo * arbol_1(CLIENT *);
extern  PNodo * arbol_1_svc(struct svc_req *);
extern int tree_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define pone 1
extern  void * pone_1();
extern  void * pone_1_svc();
#define arbol 2
extern  PNodo * arbol_1();
extern  PNodo * arbol_1_svc();
extern int tree_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_PNodo (XDR *, PNodo*);
extern  bool_t xdr_Nodo (XDR *, Nodo*);

#else /* K&R C */
extern bool_t xdr_PNodo ();
extern bool_t xdr_Nodo ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TREE_H_RPCGEN */
