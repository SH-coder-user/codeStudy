#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 631

/*
넷켓과 유사한 네트워크 프로그래밍 라이브러리로는 C언어에서 가장 보편적으로 사용되는 BSD 소켓 (BSD Socket)이 있습니다. BSD 소켓은 유닉스와 리눅스 시스템에서 네트워크 프로그래밍을 위해 사용됩니다.

아래는 C언어로 BSD 소켓을 이용하여 전문을 보내는 예제입니다. 이 코드는 서버에 TCP/IP 소켓을 연결하고, 서버로 전문을 보내고, 서버로부터 응답을 받아 출력하는 기능을 수행합니다.

아래 코드에서 SERVER_IP와 SERVER_PORT 상수를 설정하여 접속하고자 하는 서버의 IP 주소와 포트 번호를 입력할 수 있습니다. 이 예제에서는 127.0.0.1 주소와 8080 포트를 사용합니다.

이 코드는 컴파일 후 실행하면 서버와의 연결, 전문 송신, 수신 등의 과정이 실행되며, 실행 결과로 "Hello message sent"와 서버로부터의 응답 메시지가 출력됩니다.

 */

int main()
{
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "Hello from client";
    char buffer[1024] = {0};

    // 소켓 생성
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    // 서버 주소 구조체 초기화
    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERVER_PORT);

    // IP 주소 문자열을 이진 형태로 변환
    if (inet_pton(AF_INET, SERVER_IP, &serv_addr.sin_addr) <= 0)
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    // 서버에 연결
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }

    // 전문 보내기
    send(sock, hello, strlen(hello), 0);
    printf("Hello message sent\n");

    // 서버로부터 응답 받기
    valread = read(sock, buffer, 1024);
    printf("%s\n", buffer);
    return 0;
}
