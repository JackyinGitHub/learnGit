#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

int main(){
	int clnt_sock = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in serv_addr;
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serv_addr.sin_port = htons(1234);
	connect(clnt_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
	
	//read
	char buffer[40];
	read(clnt_sock, buffer, sizeof(buffer)-1);
	printf("Message from server: %s\n", buffer);

	close(clnt_sock);
	return 0;
}
