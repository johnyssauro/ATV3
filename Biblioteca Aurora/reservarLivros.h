typedef struct livro
{

    int id;
    char nome;
    char genero;
    int emprestado;
    int tempoEmprestado;

};

/* Criando função reservarLivros

    @param exemplar Livro selecionado pelo usuario.
    @return Retorna 0 se a reserva fracassou (caso o livro já esteja emprestado). Retorna 1 se a reserva foi bem sucedida.
*/
int reservarLivros(livro exemplar);