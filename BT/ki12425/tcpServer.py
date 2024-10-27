from socket import *
serverPort = 12000
serverSocket = socket(AF_INET,SOCK_STREAM)
serverSocket.bind(('',serverPort))
serverSocket.listen(1)
print("The server is ready to receive")
while 1:
    connectionSocket, addr = serverSocket.accept()

    n1 = connectionSocket.recv(1024)
    n2 = connectionSocket.recv(1024)

    a = int(n1.decode())
    b = int(n2.decode())

    an1 = a+b
    an2 = a-b
    an3 = a*b
    an4 = a/b

    response = f"{an1}\n{an2}\n{an3}\n{an4}\n"

    connectionSocket.send(response.encode())

    #sentence = connectionSocket.recv(1024)
    #capitalizedSentence = sentence.upper()
    #connectionSocket.send(capitalizedSentence)
    #connectionSocket.close()