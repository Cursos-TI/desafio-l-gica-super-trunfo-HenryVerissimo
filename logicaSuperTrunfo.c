#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Cálcula densidade populacional com base na população e área da cidade
float calcular_densidade_populacional(float populacao, float area) {
    float densidade = populacao / area;
    return densidade;
}

// Cálcula PIB-per_capita com base no PIB e populacao da cidade
float calcular_pib_per_capita(float pib, float populacao) {
    float pib_per_capita = pib / populacao;
    return pib_per_capita;
}

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    float super_poder, super_poder2;
    int opcaoDeComparacao, opcaoDeComparacao2;
    int pontosCarta1 = 0, pontosCarta2 = 0;


    // Área para entrada de dados
    // Coletando informações sobre a primeira carta
    // artavés de entradas de dados do usuário via terminal.
    printf("Registrando primeira carta:\n");
    printf("Digite o estado da carta (A-H): ");
    scanf("%c", &estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    printf("Digite a cidade da carta: ");
    scanf("%s", cidade);
    printf("Digite a quantidade de população: ");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade em Km²: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Coletando informações sobre a segunda carta.
    printf("\n\nRegistrando segunda carta: \n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite a cidade da carta: ");
    scanf("%s", cidade2);
    printf("Digite a quantidade de população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Processamento de dados
    // Processndo dados da primeira carta
    densidade_populacional = calcular_densidade_populacional(populacao, area);
    pib_per_capita = calcular_pib_per_capita(pib, populacao);
    super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    // Processando dados da segunda carta
    densidade_populacional2 = calcular_densidade_populacional(populacao2, area2);
    pib_per_capita2 = calcular_pib_per_capita(pib2, populacao2);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    //Exibindo menu de atributos
    printf("\nOpções de atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");

    //Coletando atributos que vão ser comparados
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &opcaoDeComparacao);

    printf("Digite um segundo número de atributo diferente: ");
    scanf("%d", &opcaoDeComparacao2);

    if (opcaoDeComparacao == opcaoDeComparacao2){
        printf("\nVocê precisa selecionar 2 atributos de comparação diferentes!\n");
    } else {
        // Área para exibição dos dados da cidade
        // Exibindo informações sobre a primeira carta.
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f Km²\n", area);
        printf("PIB: %.2f Bilhões de reais\n", pib);
        printf("Número de pontos turídticos: %d\n", pontos_turisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
        printf("PIB_per_capita: %.2f reais\n", pib_per_capita);
        printf("Super poder: %.2f\n", super_poder);

        //Exibindo informações sobre a segunda carta.
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2ff Km²\n", area2);
        printf("PIB: %.2f Bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB_per_capita: %.2f reais\n", pib_per_capita2);
        printf("Super poder: %.2f\n", super_poder2);

        //Comparação entre as cartas (==, > ou <)
        printf("\nComparação entre as cartas:\n");

        if (populacao == populacao2){
            printf("Ambas as cidades tem a mesma quantidade de população\n");
        } else {
            if (populacao > populacao2) {
                printf("Cidade 1 de a maior população\n");
            } else {
                printf("Cidade 2 tem a maior populaçãoan\n");
            }
        }
        
        if (area == area2) {
            printf("Ambas as cidades tem a mesma quantidade de área\n");
        } else {
            if (area > area2) {
                printf("Cidade 1 tem a maior área\n");
            } else {
                printf("Cidade 2 tem a maior área\n");
            }
        }

        if (pib == pib2) {
            printf("Ambas as cidades tem a mesma quantidade de pib\n");
        } else {
            if (pib > pib2) {
                printf("Cidade 1 tem o maior PIB\n");
            } else {
                printf("Cidade 2 tem o maior PIB\n");
            }
        }

        if (pontos_turisticos == pontos_turisticos2) {
            printf("Ambas as cidades tem a mesma quantidade de pontos turisticos\n");
        } else {
            if (pontos_turisticos > pontos_turisticos2) {
                printf("Cidade 1 tem mais pontos turisticos\n");
            } else {
                printf("Cidade 2 tem mais pontos turisticos\n");
            }
        }

        if (densidade_populacional == densidade_populacional2) {
            printf("Ambas as cidades tem a mesma quantidade de densidade populacional\n");
        } else {
            if (densidade_populacional < densidade_populacional2) {
                printf("Cidade 1 tem menos densidade populacional\n");
            } else {
                printf("Cidade 2 tem menos densidade populacional\n");
            }
        }

        if (pib_per_capita == pib_per_capita2) {
            printf("Ambas as cidades tem a mesma quantidade de PIB per capita\n");
        } else {
            if (pib_per_capita > pib_per_capita2) {
                printf("Cidade 1 tem o maior PIB per capita\n");
            } else {
                printf("Cidade 2 tem o maior PIB per capita\n");
            }
        }

        if (super_poder == super_poder2){
            printf("Ambas as cidades tem a mesma quantidade de poder\n");
        } else {
            if (super_poder > super_poder2) {
                printf("Cidade 1 tem um super poder mais alto\n");
            } else {
                printf("Cidade 2 tem um super poder mais alto\n");
            }
        }

        //Determinando carta vencedora
        switch (opcaoDeComparacao) {
            case 1:
                if (populacao > populacao2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 2:
                if (area > area2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 3:
                if (pib > pib2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 4:
                if (pontos_turisticos > pontos_turisticos2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 5:
                if (densidade_populacional < densidade_populacional2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 6:
                if (pib_per_capita > pib_per_capita2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 7:
                if (super_poder > super_poder2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            default:
                printf("O primeiro atributo escolhido para comparação é inválido!");
                return 1;
        }

        switch (opcaoDeComparacao2) {
            case 1:
                if (populacao > populacao2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 2:
                if (area > area2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 3:
                if (pib > pib2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 4:
                if (pontos_turisticos > pontos_turisticos2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 5:
                if (densidade_populacional < densidade_populacional2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 6:
                if (pib_per_capita > pib_per_capita2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            case 7:
                if (super_poder > super_poder2) {
                    pontosCarta1 += 1;
                } else {
                    pontosCarta2 += 1;
                }

                break;
            default:
                printf("O segundo atributo escolhido para comparação é inválido!");
                return 1;
        }

        // Exibindo carta vencedora
        printf("\nCarta vencedora da partida...\n");
        if (pontosCarta1 > pontosCarta2) {
            printf("\nA carta 1 (primeira cidade) venceu a partida!\n");
        } else if (pontosCarta1 < pontosCarta2) {
            printf("\nA carta 2 (segunda cidade) venceu a partida!\n");
        } else {
            printf("\nDeu empate!!!\n");
        }
    }

    return 0;
}