typedef struct livro
{

    int id;
    char nome;
    char genero;
    int emprestado;
    int tempoEmprestado;

};

// Nessa simulação, não existe uma quantidade máxima para se renovar os empréstimos

/* Criar função renovarEmprestimos

    @param livro
    @return Retorna 0 se o prazo do empréstimo do livro estrapolou (não houve renovação). Retorna 1 se o prazo não estrapolou (houve renovação).
*/
int renovarEmprestimo(livro emprestimo);
