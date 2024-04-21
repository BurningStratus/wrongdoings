# from math import absolute

'''
Simple Caesar's encryption algorithm. 
The alphabet is moved by some amount of symbols, 
so A == B if the movement was by symbol.

Prog encrypts a string of text by shifting alpha.
'''

alpha  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#alpha  = alpha[::-1]

raw_in = input("msg: ")
raw_in = raw_in.upper()
shift_ = input("shift: ")
shift_ = abs(int(shift_))
op = input("op(press enter to encrypt): ")

n = len(raw_in)
output = ""

if op:
  shift_ = len(alpha) - shift_
  print("decrypting ...")
  
for i in range(n):
	symbol   = raw_in[i]
	location = alpha.find(symbol)
	 
	new_loc  = (location + shift_) % 26 
	output  += alpha[new_loc]
	
	# print(f" {symbol} {location} || {alpha[new_loc]} {new_loc}")

print("\nout:", output)


