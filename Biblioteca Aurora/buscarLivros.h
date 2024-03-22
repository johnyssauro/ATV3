typedef struct livro
{

    int id;
    char nome;
    char genero;
    int emprestado;
    int tempoEmprestado;
    int idUsuarioEmprestado;

};

/* Criando função buscarLivro

    Função imprime informações acerca de todos cada exemplar existente na
    biblioteca.

    @param nome Nome do livro
    @return Retorna 0 se não há exemplares. Retorna 1 se há exemplares.
*/
int buscarLivro(char nome);