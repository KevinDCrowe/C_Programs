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

CANr(){
  
CANt(){
  
 "init I/O pins"(return canL & canH)
//A(0),B(1), or FD(2)
int typ=0;
  
for(int n=0;n<100;n++){
  
  boool = read(canL,canH);
  
  if(n<1){
    //"SoF"
    set(0)
  }elseif(n>=1 && n<12){
    //Arbitration
  }elseif(n>=13 && n<14){
    //request remote
   if(boool==1){}else{};
  }elseif(n>=14 && n<16){
    //ID ext and Reserved
    set(0)
  }elseif(n>=16 && n<20){
    //Data Length
    num=read(canH,canL)
    cntr = cntr + pow(2,c)×num
  }elseif(n>=20 && n<8*num+20){
    //"Data"
  }elseif(n>=8*num+20 && n<8*num+36){
    //"CRC"
  }elseif(n>=8*num+36 && n<8*num+38){
    //"Ack"
  }elseif(n>=8*num+38 && n<8*num+48){
    //"EoF"
    Set(1);  
  }else{n=0}
}  

 
  
  





