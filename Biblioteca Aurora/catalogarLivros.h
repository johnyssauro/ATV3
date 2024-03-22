typedef struct livro
{
    
    int id;
    char nome;
    int emprestado;
    int tempoEmprestado;
    int idUsuarioEmprestado;

};


typedef struct catalogo
{

    int * c;

};

/* Criando função catalogarLivro

    @param id ID do exemplar
    @param nome Nome do livro
    @param catalogo Catálogo onde estão os dados de cada livro
    @return Retorna 0 se o livro 
*/
int catalogarLivro();
