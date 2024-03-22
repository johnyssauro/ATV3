typedef struct livro
{
    
    int id;
    char nome;
    char genero;
    int emprestado;

};

/* Criando função catalogarLivro

    @param id ID do exemplar
    @param nome Nome do livro
    @param catalogo Catálogo onde estão os dados de cada livro
    @return Retorna 0 se o livro não for catalogado. Retorna 1 se a operação for bem sucedida.
*/
int catalogarLivro(int id, char nome, livro *catalogo);

