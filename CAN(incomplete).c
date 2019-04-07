CAN(){
  int devAd[11];
  
    
//arbitration
  for(int i=0;i<11;i++){
  
  }
}
CANr(){
//A(0),B(1), or FD(2)
int typ=0;
  int cHigh;
  int cLow;
  int diff=cHigh-cLow;
  int boool=1;
  
 while(1){ 
   
 if (diff<.1){//converts current differential signal entry to binary
 boool=1;
 }elseif(diff>3.5){
boool=0;
 }else{
   printf("error");
 
 
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
"checkif0"
"if not stop"
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
