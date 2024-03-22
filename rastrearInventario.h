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

*/
int rastrearInventario(int ID, Produto produto);


