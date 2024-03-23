typedef struct Produto
{

    int ID;
    char nome;
    int comprado;
    int entregue;

};

/* Criando a função fazerPedido (Fazer pedido == Comprar produto)

    A função atualiza o status de compra do produto de 0 para 1.

    @param objeto Corresponde ao produto que terá seus status atualizado.
    @return A função retornará 1 se o produto não havia sido comprado antes. Retornará 0 se o produto já foi comprado.
*/
int fazerPedido(Produto objeto);

/* Criando a função atualizarStatusEntrega

    A função atualiza o status de entrega do produto de 0 para 1.

    @param objeto Corresponde ao produto que terá seus status atualizado
    @return A função retornará o produto com seus status de entrega atualizados.
*/
Produto atualizarStatusEntrega(Produto objeto);


