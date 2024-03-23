typedef struct Produto
{

    int ID;
    char nome;
    int comprado;
    int entregue;

};

/*  Criando a função criarProduto;

    @param ID O id do produto
    @param nome O nome do produto
    @return Retorna 1 caso o produto seja criado no sistema e 0 caso contrário. 

*/
Produto criarProduto(int ID, int nome);

/* Criando a função removerProduto

    @param ID O id do produto
    @param nome O nome do produto
    @return Retorna 1 caso o produto seja removido do sistema e 0 caso contrário.
*/
int removerProduto(Produto objeto);

