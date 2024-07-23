#!/bin/python2

import socket

HOST = 'localhost'
PORT = 1337

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))

s.send('hi there, would you please sign my petition?')
data = s.recv(1024)

s.close()
print 'received: ', repr(data)

