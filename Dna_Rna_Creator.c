/*------------------------------------------------------*/
/*-Generating Pseudo DNA or RNA Helixes-----------------*/
/*-Date : 13/05/2019 -----------------------------------*/
/*-This program was writen by Gora Citizens-------------*/
/*------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DNA_SAMPLE_FILE "DNA_Samples.txt"  /* The Name of file which will be written DNA samples */
#define RNA_SAMPLE_FILE "RNA_Samples.txt"  /* The Name of file which will be written RNA samples from DNA helix */

/* DNA Bases definition */
#define ADENINE 0
#define GUANINE 1
#define CYTOSINE 2
#define THYMINE 3
#define URASIL 3

FILE * fp;	/* Global File Pointer */
int SIZE=0;

void menu();	/* User Menu Function */
void helix_Dna(int* dna_arr,char name_base[][9]); /* DNA Helix */
void helix_Rna(int* dna_arr,char name_base[][9]); /* RNA Helix */

int main()
{	
	/* Removes sample files because of opening append mode */
	remove(DNA_SAMPLE_FILE);
	remove(RNA_SAMPLE_FILE);
	srand(time(NULL));
	while(SIZE<=0)
	{
		printf("Enter the Size of Helix Length : ");
		scanf(" %d",&SIZE);
		if(SIZE<=0)
			printf("Invalid Lenght ! \n");
	}
	menu();
	return 0;
}
void menu()
{
	int choice=-1,exit=1,i=0,base_choice=-1;
	char name_base[5][9]={{"Adenine"},{"Guanine"},{"Cytosine"},{"Thymine"},{"Uracil"}};
	int dna_arr[SIZE];
	
	while(exit==1)
	{
		/* User Menu */
		fprintf(stdout, "\t\t*** Welcome to the DNA Helix Creator ***\n");
		fprintf(stdout, "\tSeleck Your Operation to Generate a Helix\n");
		fprintf(stdout, "\tEnter (1) To Generate a DNA as a Peer(Manually)\n");
		fprintf(stdout, "\tEnter (2) To Generate a DNA as a Peer(Random)\n");
		fprintf(stdout, "\tEnter (3) To Generate a RNA as a Peer\n");
		fprintf(stdout, "\tEnter (0) To Exit ! \n");

		fprintf(stdout, "\tChoice : ");
		/*---------------End---------------------------------*/
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				for(i=0 ; i<SIZE ; ++i)
				{
					printf("\n");
					printf("-> For Adenine 		Base Press 		0 (Zero)\n");
					printf("-> For Guanine  	Base Press 		1 (One)\n");
					printf("-> For Cytosine  	Base Press 		2 (Two)\n");
					printf("-> For Thymine 		Base Press		3 (Three)\n");
					while(base_choice<0||base_choice>3)
					{
						printf("Base Choice : ");	
						scanf(" %d",&base_choice);
						if(base_choice<0||base_choice>3)
							printf("Wrong Choice !\n");
					}
					dna_arr[i]=base_choice;
					base_choice=-1;
				}
				helix_Dna(dna_arr,name_base);
			break;

			case 2:
				for(i=0 ; i<SIZE ; ++i)
				{
					dna_arr[i]=rand() % 4;
				}
				helix_Rna(dna_arr,name_base);
			break;

			case 3:
				helix_Dna(dna_arr,name_base);
			break;

			case 4:
				for(i=0 ; i<SIZE ; ++i)
				{
					dna_arr[i]=rand() % 4;
				}
				helix_Rna(dna_arr,name_base);
			break;

			case 0:
				exit=0; /* Menu Exit Control */
			break;

			default:
			break;
		}
	}
}
void helix_Dna(int* dna_arr,char name_base[][9])
{
	int i = 0,j = 0;
	fp = fopen(DNA_SAMPLE_FILE, "a+");	/* Create file to write DNA/RNA samples */

	fprintf(stdout, "\n\n\n");
	fprintf(fp, "\n\n\n");
	fprintf(stdout, "\tHelix DNA 				Helix DNA\n\n");
	fprintf(fp, "\tHelix DNA 				Helix DNA\n\n");
	for(i = 0 ; i < SIZE ; ++i)
	{
		for(j = 0 ; j < 2 ; ++j)
		{
			fprintf(stdout, "\t|					|\n");
			fprintf(fp, "\t|					|\n");
		}
		if(dna_arr[i] == ADENINE)
		{
		 	fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Thymine");
		 	fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Thymine");
					
		}
		else if(dna_arr[i] == THYMINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Adenine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Adenine");
		}
		else if(dna_arr[i] == GUANINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Cytosine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Cytosine");
		}
		else if(dna_arr[i] == CYTOSINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Guanine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Guanine");
		}
		for(j = 0 ; j < 2 ; ++j)
		{
			fprintf(stdout, "\t|					|\n");
			fprintf(fp, "\t|					|\n");
		}
	}
	fprintf(stdout, "\n\n");
	fprintf(fp, "\n\n");
	fclose(fp);	/* File pointer close */
}
void helix_Rna(int* dna_arr,char name_base[][9])
{
	int i=0,j=0;
	fp = fopen(RNA_SAMPLE_FILE, "a+");	/* Create file to write DNA/RNA samples */

	fprintf(stdout, "\n\n\n");
	fprintf(fp, "\n\n\n");
	fprintf(stdout, "\tHelix DNA 				Helix RNA\n\n");
	fprintf(fp, "\tHelix DNA 				Helix RNA\n\n");
	for(i = 0 ; i < SIZE ; ++i)
	{
	if(dna_arr[i] == ADENINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Uracil");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Uracil");
					
		}
		else if(dna_arr[i] == THYMINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Adenine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Adenine");
		}
		else if(dna_arr[i] == GUANINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Cytosine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Cytosine");
		}
		else if(dna_arr[i] == CYTOSINE)
		{
			fprintf(stdout, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Guanine");
			fprintf(fp, "\t-- %s				--%s\n",name_base[dna_arr[i]],"Guanine");
		}
		for(j = 0 ; j < 2 ; ++j)
		{
			fprintf(stdout, "\t|					|\n");
			fprintf(fp, "\t|					|\n");
		}
	}
	fprintf(stdout, "\n\n");
	fprintf(fp, "\n\n");
	fclose(fp);	/* File pointer close */
}
