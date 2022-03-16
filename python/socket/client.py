import socket

HOST='localhost'
PORT=3074

s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
s.connect((HOST,PORT))

while(True):
    msg=input("Message: ")
    if(msg=='quit'):
        break
    msg= name + ": " +msg
    s.send(msg.encode())
s.close()