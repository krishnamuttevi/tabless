#include<stdio.h>
#include<string.h>
int decimaltobinary(int n);
int decimaltooctal(int n);
void decimaltohexadecimal(int n);
int binarytodecimal(int n);
int binarytooctal(int n);
void binarytohexadecimal(int n);
int octaltodecimal(int n);
int octaltobinary(int n);
void octaltohexadecimal(int n);
int hexadecimaltodecimal(char n[]);
int hexadecimaltooctal(char n[]);
int hexadecimaltobinary(char n[]);
int main()
{
int z;
menu();
printf("\n");
printf("\t\xB10\xB10 enter program number which u to want to run:");
scanf("%d",&z);
if(z==1)
{
int n;
printf("\t\xB10\xB10 enter decimal number:");
scanf("%d",&n);
int x=decimaltobinary(n);
printf("\t\xB10\xB10 equivalent binary number is:%d",x);
}
else if(z==2)
{
int n;
printf("\t\xB10\xB10 enter decimal number:");
scanf("%d",&n);
int x=decimaltooctal(n);
printf("\t\xB10\xB10 equivalent octal number is:%d",x);
}

else if(z==3)
{

int n;
printf("\t\xB10\xB10 enter decimal number:");
scanf("%d",&n);
decimaltohexadecimal(n);
}
else if(z==4)
{
int n;
printf("\t\xB10\xB10 enter binary number:");
scanf("%d",&n);
int x=binarytodecimal(n);
printf("\t\xB10\xB10 equivalent decimal number is:%d",x);
}
else if(z==5)
{
int n;
printf("\t\xB10\xB10 enter binary number:");
scanf("%d",&n);
int x=binarytooctal(n);
printf("\t\xB10\xB10 equivalent octal number:%d",x);
}
else if(z==6)
{
int n;
printf("\t\xB10\xB10 enter binary number:");
scanf("%d",&n);
binarytohexadecimal(n);
}
else if(z==7)
{
int n;
printf("\t\xB10\xB10 enter octal number:");
scanf("%d",&n);
int x=octaltodecimal(n);
printf("\t\xB10\xB10 equivalent decimal number is:%d",x);
}
else if(z==8)
{
int n;
printf("\t\xB10\xB10 enter octal number:");
scanf("%d",&n);
int x=octaltobinary(n);

printf("\t\xB10\xB10 equivalent binary number is:%d",x);
}
else if(z==9)
{
int n;
printf("\t\xB10\xB10 enter octal number:");
scanf("%d",&n);
octaltohexadecimal(n);
}
else if(z==10)
{
char n[100];
printf("\t\xB10\xB10 enter hexadecimal number:");
scanf("%s",n);
int x=hexadecimaltodecimal(n);
printf("\t\xB10\xB10 equivalent decimal number is:%d",x);
}
else if(z==11)
{
char n[100];
printf("\t\xB10\xB10 enter hexadecimal number:");
scanf("%s",n);
int x=hexadecimaltobinary(n);
printf("\t\xB10\xB10 equivalent binary number is:%d",x);
}
else if(z==12)
{
char n[100];
printf("\t\xB10\xB10 enter hexadecimal number:");
scanf("%s",n);
int x=hexadecimaltooctal(n);
printf("\t\xB10\xB10 equivalent octal number is:%d",x);
}
else if(z==13)
{
printf("\t\xB10\xB10 thank you for using me");
}
else
{
printf("\t\xB10\xB10 please enter correct choise.");
}

file= fopen(“C:\Users\X\Desktop\conversion.txt”,”w”);
file.fprintf(x);
return 0;
}void menu() {
    printf("\t\t--------------------------------------------------------\n");
    printf("\t\t--------------------------------------------------------\n");
    printf("\t\t\tCONVERSIONS\n");
    printf("\t\t1=convert decimal to binary\n");
    printf("\t\t2=convert decimal to octal\n");
    printf("\t\t3=convert decimal to hexadecimal\n");
    printf("\t\t4=convert binary to decimal\n");
    printf("\t\t5=convert binary to octal\n");
    printf("\t\t6=convert binary to hexadecimal\n");
    printf("\t\t7=convert octal to decimal\n");
    printf("\t\t8=convert octal to binary\n");
    printf("\t\t9=convert octal to hexadecimal\n");
    printf("\t\t10=convert hexadecimal to decimal\n");
    printf("\t\t11=convert hexadecimal to binary\n");
    printf("\t\t12=convert hexadecimal to octal\n");
    printf("\t\t13=exit the program\n");
    printf("\t\t--------------------------------------------------------\n");
    printf("\t\t--------------------------------------------------------\n");
}

int binarytodecimal(int n)
{

int r,x=0,y=1;
while(n>0){
r=n%10;
x=x+r*y;
y=y*2;
n/=10;
}
return x;
}
int octaltodecimal(int n)
{
int r,x=0,y=1;
while(n>0){
r=n%10;
x=x+r*y;
y=y*8;
n/=10;
}
return x;
}

int binarytooctal(int n)
{
int x=binarytodecimal(n);
int y=decimaltooctal(x);
return y;
}
int hexadecimaltodecimal(char n[])
{
int x=0,y=1;
int s=strlen(n);
for(int i=s-1;i>=0;i--){
if(n[i]>='0'&&n[i]<='9'){
x+=(n[i]-48)*y;
}
else if(n[i]>='A'&&n[i]<='F'){
x+=(n[i]-55)*y;
}
else if(n[i]>='a'&&n[i]<='f'){
x+=(n[i]-87)*y;
}

y*=16;
}
return x;
}
int hexadecimaltooctal(char n[])
{
int x=hexadecimaltodecimal(n);
int y=decimaltooctal(x);
return y;
}
int octaltobinary(int n)
{
int x=octaltodecimal(n);
int y=decimaltobinary(x);
return y;
}
int decimaltobinary(int n)
{
int x=1,s=0;
while(x<=n)
x*=2;
x/=2;
while(x>0){
int q=n/x;
n-=q*x;
x/=2;
s=s*10+q;
}
return s;
}
int hexadecimaltobinary(char n[])
{
int x=hexadecimaltodecimal(n);
int y=decimaltobinary(x);
return y;
}
void binarytohexadecimal(int n)
{
int x=binarytodecimal(n);

decimaltohexadecimal(x);
}
int decimaltooctal(int n){
int x=1,s=0;
while(x<=n)
x*=8;
x/=8;
while(x>0){
int q=n/x;
n-=q*x;
x/=8;
s=s*10+q;
}
return s;
}
void octaltohexadecimal(int n)
{
int x=octaltodecimal(n);
decimaltohexadecimal(x);
}
void decimaltohexadecimal(int n)
{
int q,r;
int i,j=0;
char ans[100];
q=n;
while(q!=0){
r=q%16;
if(r<10)
ans[j++]=48+r;
else
ans[j++]=55+r;
q=q/16;
}
printf("\t\xB10\xB10 equivalent hexadecimal number is:");
for (i=j-1;i>=0;i--)
printf("%c",ans[i]);
}
