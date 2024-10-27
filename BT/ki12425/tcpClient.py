from socket import *
serverName = 'localhost'
serverPort = 12000
clientSocket = socket(AF_INET,SOCK_STREAM)
clientSocket.connect((serverName,serverPort))

a = input('Input number a: ')
b = input('Input number b: ')

clientSocket.send(str(a).encode())
clientSocket.send(str(b).encode())

results = clientSocket.recv(1024).decode().split('\n')

for result in results:
    if result:
        print("Result:", result)

clientSocket.close()

#sentence = input('Input lowercase sentence: ')
#clientSocket.send(sentence.encode())
#modifiedSentence = clientSocket.recv(1024)
#print(modifiedSentence.decode())
#clientSocket.close()