typedef struct livro
{

    int id;
    char nome;
    char genero;
    int emprestado;

};

typedef struct emprestimo
{

    int idUsuario;
    int idLivro;
    int tempoEmprestimo;

};

/* Criando função reservarLivros

    @param id ID do livro
    @param idUsuarioEmprestado ID do usuário que solicita empréstimo
    @param tempoEmprestado
*/