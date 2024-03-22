typedef struct livro
{

    int id;
    char nome;
    char genero;
    int emprestado;

};

livro * catalogo;

/* Criando função buscarLivro

    Função imprime informações acerca de todos cada exemplar existente na
    biblioteca.

    @param livro Livro procurado pelo usuario
    @param catalogo Ponteiro do catálogo do livro
    @return Retorna 0 se não há exemplares. Retorna 1 se há exemplares.
*/
int buscarLivro(livro exemplar, livro *catalogo);
