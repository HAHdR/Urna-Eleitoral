#include	<stdio.h>
#include	<stdlib.h>

int main()
{
	int tam, vetA[1000], i=0, j, contB=0, contM=0, contT=0, contK=0, contNulo=0, MAIOR, MAIOR2, MAIOR3, MAIOR4, MAIOR5=0;
	int Vencedor, Vencedor2, Vencedor3, Vencedor4, Vencedores, TotalVotos, SegTurn1=0, SegTurn2=0, aux;

	while(1)
	{
		printf("CANDIDATOS: \n\n\tMULA - 22\n\tBOLSONABO - 13\n\tTAXXAD - 14\n\tKELMON - 18\n\tNULO - 0\n\n");
		printf("DIGITE O SEU VOTO (DIGITE 9 PARA TERMINAR A VOTACAO):\t");
		scanf("%d", &j);
		
		if(j==22)
		{
            vetA[i] = j;
			i++;
		}
        else if(j==13)
        {
            vetA[i] = j;
			i++;
        }
        else if(j==14)
        {
            vetA[i] = j;
			i++;
        }
        else if(j==18)
        {
            vetA[i] = j;
			i++;
        }
		else if(j==0)
		{
			vetA[i] = j;
			printf("\n\t\tVOTO NULO!\n\n");
			i++;
		}
		else if(j==9)
		{
			tam = i;	
			break;
		}
		else
			printf("\n\nERRO! ESTE NUMERO NAO PERTENCE A NENHUM CANDIDATO! FAVOR DIGITAR NOVAMENTE!\n\n");

		printf("\n\n");
	}

	for(i=0;i<tam;i++)
	{
		if(vetA[i]==22)
			contM++;

		if(vetA[i]==13)
			contB++;

	 	if(vetA[i]==14)
			contT++;

		if(vetA[i]==18)
			contK++;

		if(vetA[i]==0)
			contNulo++;
	}

	MAIOR = contM;
	MAIOR2 = contB;
	MAIOR3 = contT;
	MAIOR4 = contK;

	Vencedor = MAIOR;

	if(MAIOR2>=Vencedor)
	{
		if(MAIOR2==Vencedor)
		{
			aux = Vencedor;
			Vencedor = MAIOR2;
			SegTurn1 = aux;
			SegTurn2 = Vencedor;
		}
		Vencedor = MAIOR2;
	}

	if(MAIOR3>=Vencedor)
	{
		if(MAIOR3==Vencedor)
		{
			aux = Vencedor;
			Vencedor = MAIOR3;
			SegTurn1 = aux;
			SegTurn2 = Vencedor;
		}
		Vencedor = MAIOR3;
	}

	if(MAIOR4>=Vencedor)
	{
		if(MAIOR4==Vencedor)
		{
			aux = Vencedor;
			Vencedor = MAIOR4;
			SegTurn1 = aux;
			SegTurn2 = Vencedor;
		}
		Vencedor = MAIOR4;
	}
	
	if(MAIOR == MAIOR2 && MAIOR == MAIOR3)
	{
		Vencedor = 0;
	}
	
	if(MAIOR == MAIOR2 && MAIOR == MAIOR4)
	{
		Vencedor = 0;
	}
	
	if(MAIOR == MAIOR3 && MAIOR == MAIOR4)
	{
		Vencedor = 0;
	}
	
	if(MAIOR2 == MAIOR3 && MAIOR == MAIOR4)
	{
		Vencedor = 0;
	}
	
	if(MAIOR == MAIOR2 && MAIOR == MAIOR3 && MAIOR == MAIOR4)
	{
		Vencedor = 0;
	}

	TotalVotos = contM + contB + contT + contK;

	if(contNulo>=TotalVotos/2)
	{
		Vencedor = MAIOR;
		Vencedor2 = MAIOR2;
		Vencedor3 = MAIOR3;
		Vencedor4 = MAIOR4;
		Vencedores = Vencedor + Vencedor2 + Vencedor3 + Vencedor4;
		
		MAIOR = contNulo;
		
		if(TotalVotos<contNulo && contM>TotalVotos - contM)
		{
			MAIOR5 = contM;
		}

		if(TotalVotos<contNulo && contB>TotalVotos - contB)
		{
			MAIOR5 = contB;
		}

		if(TotalVotos<contNulo && contT>TotalVotos - contT)
		{
			MAIOR5 = contT;
		}

		if(TotalVotos<contNulo && contK>TotalVotos - contK)
		{
			MAIOR5 = contK;
		}

		if(contNulo - TotalVotos == contNulo)
		{
			MAIOR5 = contNulo;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor2)
		{
			SegTurn1 = Vencedor;
			SegTurn2 = Vencedor2;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor3)
		{
			SegTurn1 = Vencedor;
			SegTurn2 = Vencedor3;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor4)
		{
			SegTurn1 = Vencedor;
			SegTurn2 = Vencedor4;
		}
		
		if(TotalVotos<contNulo && Vencedor2 == Vencedores - Vencedor2 && Vencedor2 == Vencedor3)
		{
			SegTurn1 = Vencedor2;
			SegTurn2 = Vencedor3;
		}
		
		if(TotalVotos<contNulo && Vencedor2 == Vencedores - Vencedor2 && Vencedor2 == Vencedor4)
		{
			SegTurn1 = Vencedor2;
			SegTurn2 = Vencedor4;
		}
		
		if(TotalVotos<contNulo && Vencedor3 == Vencedores - Vencedor3 && Vencedor3 == Vencedor4)
		{
			SegTurn1 = Vencedor3;
			SegTurn2 = Vencedor4;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor2 && Vencedor == Vencedor3)
		{	
			MAIOR5 = 0;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor2 && Vencedor == Vencedor4)
		{	
			MAIOR5 = 0;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor3 && Vencedor == Vencedor4)
		{	
			MAIOR5 = 0;
		}
		
		if(TotalVotos<contNulo && Vencedor2 == Vencedores/3 && Vencedor2 == Vencedor3 && Vencedor2 == Vencedor4)
		{	
			MAIOR5 = 0;
		}
		
		if(TotalVotos<contNulo && Vencedor == Vencedores/4 && Vencedor == Vencedor2 && Vencedor == Vencedor3 && Vencedor == Vencedor4)
		{	
			MAIOR5 = 0;
		}
	}

	printf("\n\n\t\tGERANDO RESULTADO DA ELEICAO...\n\n\t\t");
	system("pause");

	if(contNulo>=TotalVotos/2)
	{
		printf("\n\nALERTA! PELO MENOS 50%% DOS VOTOS, %d, SAO NULOS!\n", MAIOR);
		
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor2)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO BOLSONABO (13), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor3)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO TAXXAD (14), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores - Vencedor && Vencedor == Vencedor4)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor2 == Vencedores - Vencedor2 && Vencedor2 == Vencedor3)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO BOLSONABO (13), %d VOTOS, E O CANDIDATO TAXXAD (14), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor2 == Vencedores - Vencedor2 && Vencedor2 == Vencedor4)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO BOLSONABO (13), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor3 == Vencedores - Vencedor3 && Vencedor3 == Vencedor4)
		{
			printf("DESCONSIDERANDO ELES, HAVERA SEGUNDO TURNO ENTRE O CANDIDATO TAXXAD (14), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor2 && Vencedor == Vencedor3 && MAIOR5 == 0)
		{
			printf("DESCONSIDERANDO ELES, NECESSITA-SE REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO BOLSONABO (13) E O CANDIDATO TAXXAD (14) OBTIVERAM %d VOTOS CADA!", Vencedor);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor2 && Vencedor == Vencedor4 && MAIOR5 == 0)
		{
			printf("DESCONSIDERANDO ELES, NECESSITA-SE REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO BOLSONABO (13) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores/3 && Vencedor == Vencedor3 && Vencedor == Vencedor4 && MAIOR5 == 0)
		{
			printf("DESCONSIDERANDO ELES, NECESSITA-SE REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO TAXXAD (14) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor2 == Vencedores/3 && Vencedor2 == Vencedor3 && Vencedor2 == Vencedor4 && MAIOR5 == 0)
		{
			printf("DESCONSIDERANDO ELES, NECESSITA-SE REFAZER A ELEICAO, JA QUE O CANDIDATO BOLSONABO (13), O CANDIDATO TAXXAD (14) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor2);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(TotalVotos<contNulo && Vencedor == Vencedores/4 && Vencedor == Vencedor2 && Vencedor == Vencedor3 && Vencedor == Vencedor4 && MAIOR5 == 0)
		{
			printf("DESCONSIDERANDO ELES, NECESSITA-SE REFAZER A ELEICAO, JA QUE TODOS OS CANDIDATOS OBTIVERAM %d VOTOS CADA!", Vencedor);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(MAIOR5 == contM)
		{
			printf("DESCONSIDERANDO ELES, O CANDIDATO MULA (22) FOI O MAIS VOTADO, RECEBENDO %d VOTOS!\n\n",MAIOR5);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(MAIOR5 == contB)
		{
			printf("DESCONSIDERANDO ELES, O CANDIDATO BOLSONABO (13) FOI O MAIS VOTADO, RECEBENDO %d VOTOS!\n\n",MAIOR5);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(MAIOR5 == contT)
		{
			printf("DESCONSIDERANDO ELES, O CANDIDATO TAXXAD (14) FOI O MAIS VOTADO, RECEBENDO %d VOTOS!\n\n",MAIOR5);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		if(MAIOR5 == contK)
		{
			printf("DESCONSIDERANDO ELES, O CANDIDATO KELMON (18) FOI O MAIS VOTADO, RECEBENDO %d VOTOS!\n\n",MAIOR5);
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
		
		if(MAIOR5 == contNulo)
		{
			printf("DESCONSIDERANDO ELES, NAO HOUVE CANDIDATO COM UM NUMERO MAIOR DE VOTOS\n\n");
			printf("\n\n\t\tFIM!\n\n");
			exit(0);
		}
	}

	if(aux == MAIOR && Vencedor == contB)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO BOLSONABO (13), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(aux == MAIOR && Vencedor == contT)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO TAXXAD (14), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(aux == MAIOR && Vencedor == contK)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO MULA (22), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(aux == MAIOR2 && Vencedor == contT)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO BOLSONABO (13), %d VOTOS, E O CANDIDATO TAXXAD (14), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(aux == MAIOR2 && Vencedor == contK)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO BOLSONABO (13), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(aux == MAIOR3 && Vencedor == contK)
	{
		printf("\n\nHAVERA SEGUNDO TURNO ENTRE O CANDIDATO TAXXAD (14), %d VOTOS, E O CANDIDATO KELMON (18), %d VOTOS!\n\n", SegTurn1, SegTurn2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(MAIOR == MAIOR2 && MAIOR == MAIOR3 && Vencedor == 0)
	{
		printf("\n\nSERA NECESSARIO REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO BOLSONABO (13) E O CANDIDATO TAXXAD (14) OBTIVERAM %d VOTOS CADA!", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(MAIOR == MAIOR2 && MAIOR == MAIOR4 && Vencedor == 0)
	{
		printf("\n\nSERA NECESSARIO REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO BOLSONABO (13) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(MAIOR == MAIOR3 && MAIOR == MAIOR4 && Vencedor == 0)
	{
		printf("\n\nSERA NECESSARIO REFAZER A ELEICAO, JA QUE O CANDIDATO MULA (22), O CANDIDATO TAXXAD (14) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(MAIOR2 == MAIOR3 && MAIOR2 == MAIOR4 && Vencedor == 0)
	{
		printf("\n\nSERA NECESSARIO REFAZER A ELEICAO, JA QUE O CANDIDATO BOLSONABO (13), O CANDIDATO TAXXAD (14) E O CANDIDATO KELMON (18) OBTIVERAM %d VOTOS CADA!", Vencedor2);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(MAIOR == MAIOR2 && MAIOR == MAIOR3 && MAIOR == MAIOR4 && Vencedor == 0)
	{
		printf("\n\nSERA NECESSARIO REFAZER A ELEICAO, JA QUE TODOS OS CANDIDATOS OBTIVERAM %d VOTOS CADA!", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(Vencedor == contB)
	{
		printf("\n\nO CANDIDATO BOLSONABO (13) FOI O VENCEDOR, RECEBENDO %d VOTOS!\n\n", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(Vencedor == contM)
	{
		printf("\n\nO CANDIDATO MULA (22) FOI O VENCEDOR, RECEBENDO %d VOTOS!\n\n", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(Vencedor == contT)
	{
		printf("\n\nO CANDIDATO TAXXAD (14) FOI O VENCEDOR, RECEBENDO %d VOTOS!\n\n", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
	if(Vencedor == contK)
	{
		printf("\n\nO CANDIDATO KELMON (18) FOI O VENCEDOR, RECEBENDO %d VOTOS!\n\n", Vencedor);
		printf("\n\n\t\tFIM!\n\n");
		exit(0);
	}
}