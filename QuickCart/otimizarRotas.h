typedef struct rota
{

    double noInicial;
    double noFinal;
    double variaveis;

};

/* Criando função calcularVariaveis

    @param variaveis Os valores que influem na criação da rota. Calculado pela função
    @return Retorna o valor de variaveis 
*/
double calcularVariaveis(double variaveis);


/* Criando função otimizarRotas

    @param deslocamento O deslocamento entre um nó inicial e um nó final.
    @param opcoes As rotas possíveis para realizar o mesmo deslocamento.
    @return Retorna r com sua lista de nós. Retorna NULL se noInicial == noFinal;
*/
rota *otimizarRotas(rota deslocamento, rota * opcoes, int tempo);
