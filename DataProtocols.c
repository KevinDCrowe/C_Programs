
#include <stdbool.h>
#define M 1024 //

uart(int data[M], int baudrate, bool parity,int stopbits) {
	int Rx = 1;// Reciever Pin
	for (int a = 0; a < M / 8; a++) {
		set(Tx) = 0;
		sleep(1 / baudrate);
		for (int i = 0; i < 8; i++) {
			set(Tx) = data[i];
			sleep(1 / baudrate);
		}
		set(Tx) = 1;
		sleep(stopbits / baudrate);
	}
}

uartr(int buffer[M],int baudrate,bool parity, int stopbits) {
	int Rx=1;// Reciever Pin
	for (int a = 0; a < M / 8; a++) {
		while (Rx == 1) { continue; }
		sleep(1.2 / baudrate);
		for (int i = 0; i < 8; i++) {
			buffer[i] = read(Rx);
			sleep(1 / baudrate);
		}
		sleep(stopbits / baudrate);
	}
}
spi(){//master
int clk;
int freqc;
int mI;
int mO;
int ss_1;
//...
int ss_n;
int instruction[][];//list containing all possible device adresses
int rw;
int address[][];//list containing all possible byte adresses
int data_0[W][];
//...
int data_n[W][];
int buffer;
int mode
//generate clock signal (seperate processor ideally)
while(1){
set(clk)=1;
sleep(.5/freqc);
set(clk)=0;
sleep(.5/freqc);
}
//read or write
//load instruction
int *instuctionb = (int *) malloc(sizeof(int)*W)
//load address 
int *addressb = (int *) malloc(sizeof(int)*W);
//load data for recieve/transmit
int *datab = (int *) malloc(sizeof(int)*W);
//set cs_n to 0
//send instruction
//send adress
//send/recieve data
//set cs to 1


for (int j=0;j<200;j++) //send data
for (int i=0;i<W;i++){
if (data[i][j]==1){
set(mO)=1;
}else{
set(mO)=0;
}
}

}
usb(){}
i2c(){}

spir(){}
usbr(){}
i2cr(){}


main() {
	




}
