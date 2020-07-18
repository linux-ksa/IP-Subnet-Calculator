
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




unsigned char  IP1, IP2, IP3, IP4, CIDR;
char result1[12][10]={};
unsigned char mask1[8]={0,0,0,0,0,0,0,0};

struct subnet
{
     char mask[16];
    unsigned char blocksize;
    unsigned char cidr1;
};
void header()
{
    system("clear");
    printf("\033[10;36m|IP Subnet Calculator|\033[0m\n");
    printf("\033[10;36m|This program is open source|\033[0m\n");
    printf("\033[10;36mCode was written by : \033[0m\033[6;96mFAHAD ALMUTAIRI\033[0m\n");
}

char *convertstr( char *num,int xx){

int  c, k;

for (c = 7; c >= 0; c--)
  {
    k = xx >> c;

    if (k & 1)
      num[c]+='1';
    else
     num[c]+='0';

  }

 return num;

}



//==============================//
char *binaryrev(char *binary)
{
      char *bin1, *bin2;

      if (! binary || ! *binary)
            return binary;
      for (bin1 = binary, bin2 = binary + strlen(binary) - 1; bin2 > bin1; ++bin1, --bin2)
      {
            *bin1 ^= *bin2;
            *bin2 ^= *bin1;
            *bin1 ^= *bin2;
      }
      return binary;
}
void lasscidr3(void){
printf("\n\033[10;33mNetwork Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s", mask1[0], mask1[1], mask1[2], mask1[3],"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[4],mask1[0])),binaryrev(convertstr(result1[5],mask1[1])),binaryrev(convertstr(result1[6],mask1[2])),binaryrev(convertstr(result1[7],mask1[3])));
printf("\n\033[10;33mBroadcast Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s ", mask1[4], mask1[5], mask1[6], mask1[3]-1,"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[8],mask1[4])),binaryrev(convertstr(result1[9],mask1[5])),binaryrev(convertstr(result1[10],mask1[6])),binaryrev(convertstr(result1[11],(mask1[3]-1))));
printf("\n\033[10;33mHost IP Range:\033[0m %hhu.%hhu.%hhu.%hhu - %hhu.%hhu.%hhu.%hhu",mask1[0], mask1[1], mask1[2], mask1[3]+1 , mask1[4], mask1[5], mask1[6], mask1[3] -2);


}

void lasscidr2(void){
printf("\n\033[10;33mNetwork Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s", mask1[0], mask1[1], mask1[2], mask1[3],"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[4],mask1[0])),binaryrev(convertstr(result1[5],mask1[1])),binaryrev(convertstr(result1[6],mask1[2])),binaryrev(convertstr(result1[7],mask1[3])));
printf("\n\033[10;33mBroadcast Address:\033[0m %4hhu.%hhu.%hhu.%hhu   %13s%9s.%s.%s.%s ", mask1[0], mask1[4], mask1[5], mask1[3]-1,"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[8],mask1[0])),binaryrev(convertstr(result1[9],mask1[4])),binaryrev(convertstr(result1[10],mask1[5])),binaryrev(convertstr(result1[11],(mask1[3]-1))));
printf("\n\033[10;33mHost IP Range:\033[0m %hhu.%hhu.%hhu.%hhu - %hhu.%hhu.%hhu.%hhu",mask1[0], mask1[1], mask1[2], mask1[3]+1 , mask1[0], mask1[4], mask1[5], mask1[3] -2);


}

void lasscidr1(void){
printf("\n\033[10;33mNetwork Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s", mask1[0], mask1[1], mask1[2], mask1[3],"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[4],mask1[0])),binaryrev(convertstr(result1[5],mask1[1])),binaryrev(convertstr(result1[6],mask1[2])),binaryrev(convertstr(result1[7],mask1[3])));
printf("\n\033[10;33mBroadcast Address:\033[0m %4hhu.%hhu.%hhu.%hhu %13s%9s.%s.%s.%s ", mask1[0], mask1[1], mask1[4], mask1[3]-1,"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[8],mask1[0])),binaryrev(convertstr(result1[9],mask1[1])),binaryrev(convertstr(result1[10],mask1[4])),binaryrev(convertstr(result1[11],(mask1[3]-1))));
printf("\n\033[10;33mHost IP Range:\033[0m %hhu.%hhu.%hhu.%hhu - %hhu.%hhu.%hhu.%hhu",mask1[0], mask1[1], mask1[2], mask1[3]+1 , mask1[0], mask1[1], mask1[4], mask1[3] -2);


}
void lasscidr(void){
printf("\n\033[10;33mNetwork Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s", mask1[0], mask1[1], mask1[2], mask1[3],"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[4],mask1[0])),binaryrev(convertstr(result1[5],mask1[1])),binaryrev(convertstr(result1[6],mask1[2])),binaryrev(convertstr(result1[7],mask1[3])));
printf("\n\033[10;33mBroadcast Address:\033[0m %4hhu.%hhu.%hhu.%hhu  %13s%9s.%s.%s.%s ", mask1[0], mask1[1], mask1[2], mask1[4],"\033[06;32mBinary:\033[0m",binaryrev(convertstr(result1[8],mask1[0])),binaryrev(convertstr(result1[9],mask1[1])),binaryrev(convertstr(result1[10],mask1[2])),binaryrev(convertstr(result1[11],mask1[4])));
printf("\n\033[10;33mHost IP Range:\033[0m %hhu.%hhu.%hhu.%hhu - %hhu.%hhu.%hhu.%hhu", mask1[0], mask1[1], mask1[2], mask1[3]+1 , mask1[0], mask1[1], mask1[2], mask1[4]-1);


}

int main(int argc, char *argv[])
{

    char result[4][10]={};
    unsigned char IPeingabe = 0;
    double Hosts;


    while (IPeingabe == 0)
    {
           header();
        printf("\nADD YOUR IP ADDRESS EXAMPLE \033[10;31m\"\033[0m10.50.200.10\033[10;31m\" \033[0m: ");
        scanf("%hhu.%hhu.%hhu.%hhu", &IP1, &IP2, &IP3, &IP4);

        if (IP1 > 255|| IP2 > 255 || IP3 > 255 || IP4 > 255 || IP1 == 127 || IP1 == 255 || IP1 < 1 || IP2 < 0 || IP3 < 0 || IP4 < 0)
        {


            printf("\nDo not use : 255 - 127 and 0 in the first part ");

        }
        else
            IPeingabe = 1;

    }

    printf("\033[10;31m---------------------------------------------\033[0m\n");
    printf("| Enter CIDR in the format of decimal CIDR: |\n");
    printf("\033[10;31m---------------------------------------------\033[0m\n");
    scanf("%hhu", &CIDR);
    do {

        if (CIDR >= 32 || CIDR == 0) {
            printf("\033[10;31m--------------------------------------------\033[0m\n");
            printf("| Invalid CIDR, please enter a valid CIDR RANG 1-31: |\n");
            printf("\033[10;31m--------------------------------------------\033[0m\n\n");
            scanf("%hhu", &CIDR);
        }
    } while (CIDR >= 32);


//===================================//
struct subnet subnetmask[32]={
{ "0.0.0.0\0" ,0,0,},
{ "128.0.0.0\0" ,128,1,},
{ "192.0.0.0\0" ,64,2,},
{ "224.0.0.0\0" ,32,3,},
{ "240.0.0.0\0" ,16,4,},
{ "248.0.0.0\0" ,8,5,},
{ "252.0.0.0\0" ,4,6,},
{ "254.0.0.0\0" ,2,7,},
{ "255.0.0.0\0" ,0,8,},
{ "255.128.0.0\0" ,128,9,},
{ "255.192.0.0\0" ,64,10,},
{ "255.224.0.0\0" ,32,11,},
{ "255.240.0.0\0" ,16,12,},
{ "255.248.0.0\0" ,8,13,},
{ "255.252.0.0\0" ,4,14,},
{ "255.254.0.0\0" ,2,15,},
{ "255.255.0.0\0" ,0,16,},
{ "255.255.128.0\0" ,128,17,},
{ "255.255.192.0\0" ,64,18,},
{ "255.255.224.0\0" ,32,19,},
{ "255.255.240.0\0" ,16,20,},
{ "255.255.248.0\0" ,8,21,},
{ "255.255.252.0\0" ,4,22,},
{ "255.255.254.0\0" ,2,23,},
{ "255.255.255.0\0" ,0,24,},
{ "255.255.255.128\0" ,128,25,},
{ "255.255.255.192\0" ,64,26,},
{ "255.255.255.224\0" ,32,27,},
{ "255.255.255.240\0" ,16,28,},
{ "255.255.255.248\0" ,8,29,},
{ "255.255.255.252\0" ,4,30,},
{ "255.255.255.254\0" ,2,31,},
};
//=============================//
unsigned char i = 32 - CIDR;
          Hosts = pow(2, i) - 2;
//==================================//


//===========copy Array to Array bb====//
 char bb[17];

for(i=0; i<subnetmask[CIDR].mask[i]; i++){
        bb[i] = subnetmask[CIDR].mask[i];
}


//===========split string and convert string to integer==============//
 char *tok;
 char *intger_subnet[4];
char delme[]=".";
int d =0;
for (tok = strtok(bb,delme); tok ; tok=strtok(NULL,delme)){
     intger_subnet[d]=tok;
     d++;
}
int m =0;
for (int i=0; i < 4;i++ ){

convertstr(result[m],atoi(intger_subnet[m]));
      m++;

}
//===================================//
header();
printf("\n\033[10;33mIP Address:\033[0m %4hhu.%hhu.%hhu.%hhu (\\%0hhu)  %13s%9s.%s.%s.%s", IP1, IP2, IP3, IP4,subnetmask[CIDR].cidr1, "\033[06;32mBinary:\033[0m", binaryrev(convertstr(result1[0],IP1)),binaryrev(convertstr(result1[1],IP2)),binaryrev(convertstr(result1[2],IP3)),binaryrev(convertstr(result1[3],IP4)));

if (subnetmask[CIDR].cidr1 >=1 && subnetmask[CIDR].cidr1 <=8){
          if(subnetmask[CIDR].cidr1 ==8){
             mask1[4]=((IP1&atoi(intger_subnet[0])) + subnetmask[CIDR].blocksize);
             goto nextpart8;
          }
            mask1[4]=((IP1&atoi(intger_subnet[0])) + subnetmask[CIDR].blocksize)-1;
    nextpart8:
            mask1[0]=(IP1&atoi(intger_subnet[0]));
            mask1[1]=(IP2&atoi(intger_subnet[1]));
            mask1[2]=(IP3&atoi(intger_subnet[2]));
            mask1[3]=(IP4&atoi(intger_subnet[3]));
            mask1[5]=(IP2&atoi(intger_subnet[1]))+255;
            mask1[6]=(IP3&atoi(intger_subnet[2]))+255;
            lasscidr3();

}else if(subnetmask[CIDR].cidr1 >=9 && subnetmask[CIDR].cidr1 <=16){
              if(subnetmask[CIDR].cidr1 ==16){
             mask1[4]=((IP2&atoi(intger_subnet[1])) + subnetmask[CIDR].blocksize);
             goto nextpart16;
          }
            mask1[4]=((IP2&atoi(intger_subnet[1])) + subnetmask[CIDR].blocksize)-1;
    nextpart16:
            mask1[0]=(IP1&atoi(intger_subnet[0]));
            mask1[1]=(IP2&atoi(intger_subnet[1]));
            mask1[2]=(IP3&atoi(intger_subnet[2]));
            mask1[3]=(IP4&atoi(intger_subnet[3]));
            mask1[5]=(IP3&atoi(intger_subnet[2]))+255;
            lasscidr2();
}else if(subnetmask[CIDR].cidr1 >=17 && subnetmask[CIDR].cidr1 <=24){
             if(subnetmask[CIDR].cidr1 ==24){
             mask1[4]=((IP3&atoi(intger_subnet[2])) + subnetmask[CIDR].blocksize);
             goto nextpart24;
          }
            mask1[4]=((IP3&atoi(intger_subnet[2])) + subnetmask[CIDR].blocksize)-1;
 nextpart24:
            mask1[0]=(IP1&atoi(intger_subnet[0]));
            mask1[1]=(IP2&atoi(intger_subnet[1]));
            mask1[2]=(IP3&atoi(intger_subnet[2]));
            mask1[3]=(IP4&atoi(intger_subnet[3]));

            lasscidr1();

}else if(subnetmask[CIDR].cidr1 >=25 && subnetmask[CIDR].cidr1 <=31){
            mask1[0]=IP1;
            mask1[1]=IP2;
            mask1[2]=IP3;
            mask1[3]= (IP4&atoi(intger_subnet[3]));
            mask1[4]= ((IP4&atoi(intger_subnet[3])) + subnetmask[CIDR].blocksize)-1;
            lasscidr();
}




printf("\n\033[10;33mSubnet Mask:\033[0m %-15s (\\%0hhu) %13s%9s.%s.%s.%s ",subnetmask[CIDR].mask,subnetmask[CIDR].cidr1,"\033[06;32mBinary:\033[0m",binaryrev(result[0]) ,binaryrev(result[1]),binaryrev(result[2]) ,binaryrev(result[3]));

     printf("\n\033[10;33mTotal Number of Hosts:\033[0m %0.f", Hosts+2);
     printf("\n\033[10;33mNumber of Usable Hosts:\033[0m %0.f", Hosts);
     printf("\n\033[10;33mBlock size:\033[0m %hhu",subnetmask[CIDR].blocksize);
     printf("\n\n\n\n\n");
    return 0;
}
