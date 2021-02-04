/* tree.x */

typedef struct Nodo * PNodo;

struct Nodo{
	int valor;
	PNodo izq;
	PNodo der;
};

program TREE{
	version VTREE{
		void pone(int)=1;
		PNodo arbol()=2;
	}=1;
}=0x20000001;
