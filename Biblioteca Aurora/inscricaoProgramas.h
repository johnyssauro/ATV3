typedef struct inscrito
{
    char nome;
    int telefone;
    int dataNascimento;
    int cpf;
};

typedef struct programa
{
    char nome;
    int dataEvento;
};


/* Criando função inscricaoProgramas

    @param pessoa Os dados do indivíduo inscrito.
    @param programa Ponteiro da lista de programas.
    @return Retorna 0 se houve falha na inscrição (ou se não há eventos). Retorna 1 se houve sucesso na inscrição.
*/
int inscricaoProgramas(inscrito pessoa, programa * programas);