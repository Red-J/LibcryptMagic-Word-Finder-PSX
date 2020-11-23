#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
//0: noir//1: bleu foncé//2: vert//3: bleu-gris//4: marron
//5: pourpre//6: kaki//7: gris clair//8: gris//9: bleu//10: vert fluo
//11: turquoise//12: rouge//13: rose fluo//14: jaune fluo//15: blanc
}

void strtoupper(char *str)
{
    for ( ; *str ; str++)
        *str = toupper(*str);
}

int main(int argc, char *argv[])
{
char buffer[2000];
char buffer2[200];

    FILE*sectorsfound=fopen("sectorsfound.txt","w+");
    FILE*readsectors=fopen("sectorsfound.txt","r");


char sectors[16];

char*sector1;
char*sector2;
char*sector3;
char*sector4;
char*sector5;
char*sector6;
char*sector7;
char*sector8;
char*sector9;
char*sector10;
char*sector11;
char*sector12;
char*sector13;
char*sector14;
char*sector15;
char*sector16;
char*sector17;
char*sector18;
char*sector19;
char*sector20;
char*sector21;
char*sector22;
char*sector23;
char*sector24;
char*sector25;
char*sector26;
char*sector27;
char*sector28;
char*sector29;
char*sector30;
char*sector31;
char*sector32;

system("Title Libcrypt Magic Word Finder PSX By Red-J");

start:
system("mode con lines=14 cols=56");
color(14,0);



        printf("\n      ______________________________________________\n");
        printf("     /                                              \\\n");
        printf("     |          Libcrypt Magic Word Finder PSX       |\n");
        printf("     \\______________________________________________/\n\n");


  char ID[10];
  char ID2[10];
  char path[21];

printf("\t\t\tHow to use:\n\n ");
printf("\t\tEnter Game ID (ex:SLES02530):\n\n\t\t\t ");

FILE*fichier=NULL;


      fgets (ID, 10, stdin);
      strtoupper(ID);
      strcpy(ID2,ID);
      sprintf(path,"Sectors/%s.txt",ID);

      fichier=fopen(path,"rb");

      if (fichier!=NULL)
        {


    system("mode con lines=21 cols=56");//28 64

printf("________________________________________________________\n");
printf("\n\t\t Libcrypt Database search:  \n");
printf("________________________________________________________\n");
        color(10,0);


      }

      else
    {color(12,0);printf("\n \t\t  Not Found in database!\n\n\t\t    Press a key to exit");getchar();goto start;}

int i=0;


printf("\n\t   Libcrypt sectors found for %s:\n",ID);
color(14,0);
printf("________________________________________________________\n");

do
{
	fgets(buffer,6,fichier); // on remplis le buffer de 5 caracteres a chaque passage

    if (strcmp( buffer, "14105" ) == 0){printf( " 14105 " );fprintf(sectorsfound,"%s",buffer); }// \first part
    if (strcmp( buffer, "14110" ) == 0){printf( " 14110 " );fprintf(sectorsfound,"%s",buffer);}  // /second part

   if (strcmp( buffer, "14231" ) == 0){printf( " 14231 ");fprintf(sectorsfound,"%s",buffer);}
   if (strcmp( buffer, "14236" ) == 0){printf( " 14236 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "14485" ) == 0){printf( " 14485 " );fprintf(sectorsfound,"%s",buffer);}
   if (strcmp( buffer, "14490" ) == 0){printf( " 14490 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "14579" ) == 0){printf( " 14579 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "14584" ) == 0){printf( " 14584 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "14649" ) == 0){printf( " 14649 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "14654" ) == 0){printf( " 14654 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "14899" ) == 0){printf( " 14899 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "14904" ) == 0){printf( " 14904 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15056" ) == 0){printf( " 15056 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15061" ) == 0){printf( " 15061 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15130" ) == 0){printf( " 15130 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15135" ) == 0){printf( " 15135 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15242" ) == 0){printf( " 15242 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15247" ) == 0){printf( " 15247 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15312" ) == 0){printf( " 15312 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15317" ) == 0){printf( " 15317 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15378" ) == 0){printf( " 15378 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15383" ) == 0){printf( " 15383 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15628" ) == 0){printf( " 15628 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15633" ) == 0){printf( " 15633 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "15919" ) == 0){printf( " 15919 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "15924" ) == 0){printf( " 15924 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "16031" ) == 0){printf( " 16031 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "16036" ) == 0){printf( " 16036 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "16101" ) == 0){printf( " 16101 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "16106" ) == 0){printf( " 16106 " );fprintf(sectorsfound,"%s",buffer);}

   if (strcmp( buffer, "16167" ) == 0){printf( " 16167 " );fprintf(sectorsfound,"%s",buffer); }
   if (strcmp( buffer, "16172" ) == 0){printf( " 16172 " );fprintf(sectorsfound,"%s",buffer);}

	i++;
	}while(fgets(buffer,2000,fichier)!=NULL && i<18);

	fclose(sectorsfound);
	fclose(fichier);

fgets(buffer2, 100, readsectors);

sector1=strstr(buffer2,"14105");
sector2=strstr(buffer2,"14110");
sector3=strstr(buffer2,"14231");
sector4=strstr(buffer2,"14236");
sector5=strstr(buffer2,"14485");
sector6=strstr(buffer2,"14490");
sector7=strstr(buffer2,"14579");
sector8=strstr(buffer2,"14584");
sector9=strstr(buffer2,"14649");
sector10=strstr(buffer2,"14654");
sector11=strstr(buffer2,"14899");
sector12=strstr(buffer2,"14904");
sector13=strstr(buffer2,"15056");
sector14=strstr(buffer2,"15061");
sector15=strstr(buffer2,"15130");
sector16=strstr(buffer2,"15135");
sector17=strstr(buffer2,"15242");
sector18=strstr(buffer2,"15247");
sector19=strstr(buffer2,"15312");
sector20=strstr(buffer2,"15317");
sector21=strstr(buffer2,"15378");
sector22=strstr(buffer2,"15383");
sector23=strstr(buffer2,"15628");
sector24=strstr(buffer2,"15633");
sector25=strstr(buffer2,"15919");
sector26=strstr(buffer2,"15924");
sector27=strstr(buffer2,"16031");
sector28=strstr(buffer2,"16036");
sector29=strstr(buffer2,"16101");
sector30=strstr(buffer2,"16106");
sector31=strstr(buffer2,"16167");
sector32=strstr(buffer2,"16172");

if(sector1!=NULL||sector2!=NULL)
{sectors[0]='1';}
else
{sectors[0]='0';}

if(sector3||sector4!=NULL)
{sectors[1]='1';}
else
{sectors[1]='0';}

if(sector5||sector6!=NULL)
{sectors[2]='1';}
else
{sectors[2]='0';}

if(sector7||sector8!=NULL)
{sectors[3]='1';}
else
{sectors[3]='0';}

if(sector9||sector10!=NULL)
{sectors[4]='1';}
else
{sectors[4]='0';}

if(sector11||sector12!=NULL)
{sectors[5]='1';}
else
{sectors[5]='0';}

if(sector13||sector14!=NULL)
{sectors[6]='1';}
else
{sectors[6]='0';}

if(sector15||sector16!=NULL)
{sectors[7]='1';}
else
{sectors[7]='0';}

if(sector17||sector18!=NULL)
{sectors[8]='1';}
else
{sectors[8]='0';}

if(sector19||sector20!=NULL)
{sectors[9]='1';}
else
{sectors[9]='0';}

if(sector21||sector22!=NULL)
{sectors[10]='1';}
else
{sectors[10]='0';}

if(sector23||sector24!=NULL)
{sectors[11]='1';}
else
{sectors[11]='0';}

if(sector25||sector26!=NULL)
{sectors[12]='1';}
else
{sectors[12]='0';}

if(sector27||sector28!=NULL)
{sectors[13]='1';}
else
{sectors[13]='0';}

if(sector29||sector30!=NULL)
{sectors[14]='1';}
else
{sectors[14]='0';}

if((sector31||sector32!=NULL))
{sectors[15]='1';}
else
{sectors[15]='0';}



char result[17];
snprintf(result,17,sectors);
printf("________________________________________________________\n\n");
color(10,0);
printf("\n\tMagic Word(Binary): ");

color(12,0);
printf("%s \n\n",result);
color(10,0);

  long n   = strtol(result, 0, 2);


char hexa[4];

sprintf(hexa,"%1x",n);
strtoupper(hexa);
color(10,0);
printf("\t\t Original Magic Word:");
//
color(12,0);
printf("%s\n\n",hexa);
color(10,0);

char hexar1block[2];
char hexar2block[2];

long int num=0;
long int num2=0;


sscanf( hexa, "%c%c%c%c", &hexar1block[0], &hexar1block[1], &hexar2block[0], &hexar2block[1] );
printf("\t\t Magic word for patch:");
color(12,0);
printf("%c%c%c%c\n",hexar2block[0],hexar2block[1],hexar1block[0],hexar1block[1]);
color(10,0);

strtoupper(hexar1block);
strtoupper(hexar2block);

char path2[13];

sprintf(path2,"%s.txt",ID);


FILE* MW=fopen(path2,"w");
sscanf( hexa, "%c%c%c%c", &hexar1block[0], &hexar1block[1], &hexar2block[0], &hexar2block[1] );

fprintf(MW,"\n\t\t\t-= Libcrypt Magic Word Finder PSX =-\n\n");
fprintf(MW,"=======================================================================\n");
fprintf(MW,"Game ID:....................%s\n",ID);
fprintf(MW,"Magic word: ................%c%c%c%c\n",hexar1block[0],hexar1block[1],hexar2block[0],hexar2block[1]);
fprintf(MW,"Magic word for patch: ......%c%c%c%c\n",hexar2block[0],hexar2block[1],hexar1block[0],hexar1block[1]);
fprintf(MW,"=======================================================================\n");

printf("\n\t       File saved as:%s.txt\n\n",ID);

   fclose(readsectors);
   remove("sectorsfound.txt");

system("pause");

    return 0;
}
