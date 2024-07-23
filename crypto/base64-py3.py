#! /bin/python3

import base64
import sys


def base64_enc(string):
    out = base64.b64encode(bytes(string))
    return out.decode()

def base64_dec(string):
    # out = base64.b64decode(string)
    return base64.b64decode(string).decode()

def strip_str(inpt):
    return out

# encoded = input("b64-encoded msg: ")
enc = sys.argv[1]

print("got args: ", enc)
print()

try:
    encoded = str(enc)
    print(f"msg: >{encoded}<")
except:
    print("\nno msg found!\n")
    exit(1)

rev = False
while not rev:
    op = input("'ENTER' to decode and 'e' to encode\n :> ")
    if op.lower() == "e":
        encoded = base64_enc(encoded)
        print("msg encoded.")
    else:
        encoded = base64_dec(encoded)
        print("msg decoded.")
    
    print() 
    print(encoded)
    print()
    
    rev = input("ENTER for next iteration")

print("\n", encoded)
    
