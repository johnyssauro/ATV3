typedef struct livro
{
    
    int id;
    char nome;
    char genero;
    int emprestado;
    int tempoEmprestado;

};

/* Criando função catalogarLivro

    @param exemplar Livro a ser catalogado.
    @param catalogo Catálogo onde estão os dados de cada livro.
    @return Retorna 0 se o livro não for catalogado. Retorna 1 se a operação for bem sucedida.
*/
int catalogarLivro(livro exemplar, livro *catalogo);

