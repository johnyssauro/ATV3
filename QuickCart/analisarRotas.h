typedef struct rota
{

    double noInicial;
    double noFinal;
    double variaveis;
    double * r;

};

/* Criando função analisarRotas

    @param noInicial Corresponde ao nó de partida da entrega (em coordenadas)
    @param noFinal Corresponde ao nó final da entrega (em coordenadas)
    @param variaveis Corresponde às variáveis que definem a rota entre os dois nós
    @param r Ponteiro para o endereço de uma lista de nós que ligam noInicial e noFinal 
    @return Retorna r com sua lista de nós. Retorna NULL se noInicial == noFinal;
*/
float *analisarRotas(double noInicial, double noFinal, double variaveis, double r);
