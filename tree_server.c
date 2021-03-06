/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "tree.h"

/*-----------------------------------*/
static PNodo raiz = NULL;

PNodo inserta( int arg, PNodo n)
{
	if( n == NULL )
	{
		n = (PNodo)malloc(sizeof( *n ));
		n->valor = arg;
		n->izq = n->der = NULL;
	}
	else if(arg < n->valor) n->izq = inserta(arg, n->izq);
	else if(arg > n->valor) n->der = inserta(arg, n->der);
	return n;
}
/*-----------------------------------*/

void *
pone_1_svc(int arg1,  struct svc_req *rqstp)
{
	static char * result;

	/*-----------------------------------*/
	raiz = inserta(arg1, raiz);
	/*-----------------------------------*/
	
	return (void *) &result;
}

PNodo *
arbol_1_svc(struct svc_req *rqstp)
{
	static PNodo  result;

	/*-----------------------------------*/
	result = raiz;
	/*-----------------------------------*/
	
	return &result;
}
