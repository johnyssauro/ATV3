typedef struct Produto
{

    int ID;
    char nome;
    int comprado;
    int entregue;

};

/* Criando a função fazerPedido (Fazer pedido == Comprar produto)

    @param ID O id do produto
    @return A função retornará o status do produto atualizado se o produto não foi comprado (comprado == 0) e retornará 0 caso contrário

*/
int fazerPedido(int ID);

/* Criando a função atualizar status

    @param ID O id do produto
    @param comprado Informa se o produto foi comprado (1) ou não (0)
    @param entregue Informa se o produto foi entregue (1) ou não (0)
    @return A função retornará o produto com seus status de compra e entrega atualizados
*/
Produto atualizarStatusPedido(Produto ID, Produto comprado, Produto entregue);


