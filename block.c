#include<stdio.h>
#include<string.h>
char a[5][5]={"ABCDE","FGHIJ","KLMNO","PQRST","UVWXY"};
void main()
{
char b,elem;
int i,j,qx,qy,p,q,px=-2,py=-2;
int mov=0;
scanf(" %c",&b);
scanf("%d %d",&px,&py);
scanf(" %c",&elem);
int flag=0;
for(i=0;i<5;i++){
  for(j=0;j<5;j++){
    if(a[i][j]==elem)
       {
         qx=i;
         qy=j;
       }
  }
}
 if(px==-2){
    return;
  }
  if(px>0 && py>0 && px<4 && py<4){
    mov=8;
  }else if((px+py)%4==0 && (px==0 || py==0 || px==4 || py==4)){
    mov=3;
  }else{
    mov=5;
  }
  if(((px-qx)==1||(qx-px)==1)&&((py-qy)==0||(py-qy)==1||(qy-py)==1)){
    mov=mov-1;
  }else if(((py-qy)==1||(qy-py)==1)&&((px-qx)==0||(px-qx)==1||(qx-px)==1)){
    mov=mov-1;
  }
//printf("%d,%d",p,q);

printf("%d ",mov);

}
