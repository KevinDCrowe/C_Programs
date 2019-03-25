
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
spi(){}
usb(){}
i2c(){}

spir(){}
usbr(){}
i2cr(){}


main() {
	




}