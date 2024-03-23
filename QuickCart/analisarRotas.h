typedef struct rota
{

    double noInicial;
    double noFinal;
    double variaveis;

};

/* Criando função analisarRotas

    @deslocamento O deslocamento entre um nó inicial e um nó final
    @param opcoes Ponteiro de uma matriz que guarda caminhos distintos.
    @return Retorna r com sua lista de nós. Retorna NULL se noInicial == noFinal;
*/
float *analisarRotas(rota deslocamento, rota * opcoes);
