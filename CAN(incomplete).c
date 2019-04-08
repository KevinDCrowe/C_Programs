read(canH,canL){
  
  int diff=canH-canL;
  int boool;
    
  if (diff<.5){//converts current differential signal entry to binary
    boool=1;
  }elseif(diff>3.3){
    boool=0;
  }else{
    printf("error");
  }
  return boool;
}

CAN(){
  int devAd[11];
  
    
//arbitration
  for(int i=0;i<11;i++){
  
  }
}
CANr(){
  
 "init I/O pins"(return canL & canH)
//A(0),B(1), or FD(2)
int typ=0;
  
for(int n=0;n<100;n++){
boool = read(canL,canH);
if(n<3){"SoF"}elseif(){}elseif(){}elseif(){}elseif(){}else{}
}  

 
  //arbitration
   for(int i=0;i<11;i++){
   
   }
  //request remote
   if(boool==1){}else{};
  //control
   for(int i=0;i<4;i++){//Determines data size
   int Q=Q+boool[i]*pow(2,i);
   }
  //data
   for(int i=0;i<Q;i++){//reads data
   data[i]=boool[i]
   }
  //CRC
 }
}

 Int data[d][g];
Int devAd[b];

Int a=;//size of SoF
Int b=;//size of arbitration
Int c=;//size of control
Int d=;//size of data
Int e=;//size of crc
Int f=;//size of EoF
int g=;//number of data entries
Int n=0;

For(int i=0;i<a;i++)
Set(1);
n++
}\\start of frame

For(int i=0;i<b;i++){
set(0)
read(boool)
if(boool==1){
continue
}else{
"shutoff"}
n++
}\\decision

For(int i=0;i<c;i++){
num=read(d[n])
cntr=pow(2,c)×num +ctnr
n++
}\\control

For(int i=0;i<num;i++){
mem[n]=read(d[n])
n++
}\\data

For(int i=0;i<e;i++){
n++
}\\crc

For(int i=0;i<f;i++){
set(1)
n++
}\\EoF

