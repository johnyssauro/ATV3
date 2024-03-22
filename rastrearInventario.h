typedef struct Produto
{

    int ID;
    char nome;
    int comprado;
    int entregue;

};

/* Criando função rastrearInventario 

    @param ID O id do produto rastreado
    @param produto O produto com seus dados
    return Retorna 0 se foi comprado == 0 ou entregue == 1. Retorna 1 Se comprado == 1 e entregue == 0

*/
int rastrearInventario(int ID, int comprado, int entregue);


