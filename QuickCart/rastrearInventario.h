typedef struct Produto
{

    int ID;
    char nome;
    int comprado;
    int entregue;

};

/* Criando função rastrearInventario 

    @param objeto Corresponde ao produto a ser rastreado.
    @return Retorna 0 se foi comprado == 0 ou entregue == 1. Retorna 1 Se comprado == 1 e entregue == 0.

*/
int rastrearInventario(Produto objeto);


