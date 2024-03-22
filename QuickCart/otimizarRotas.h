typedef struct rota
{

    double noInicial;
    double noFinal;
    double variaveis;
    double * r;

};

/* Criando função calcularVariaveis

    @param variaveis Calculado pela função
    @return Retorna o valor de variaveis 
*/
double calcularVariaveis(double variaveis);


/* Criando função otimizarRotas

    @param noInicial Corresponde ao nó de partida da entrega (em coordenadas)
    @param noFinal Corresponde ao nó final da entrega (em coordenadas)
    @param variaveis Corresponde às variáveis que definem a rota entre os dois nós
    @param r Ponteiro para o endereço de uma lista de nós que ligam noInicial e noFinal 
    @param tempo Rotas podem atualizar após um determinado intervalo de tempo, definido a partir dessa variavel    
    @return Retorna r com sua lista de nós. Retorna NULL se noInicial == noFinal;
*/
float *otimizarRotas(double noInicial, double noFinal, double variaveis, double r, int tempo);
