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
