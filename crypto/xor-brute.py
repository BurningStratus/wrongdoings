import binascii

string = input("message(hex) : ")
digits = int(input("key length   : "))

#string = bytes(string, "ascii")
print(string)
print()

n = len(string)

"""
ITERATE 01, 02, 03 ... 1A, 2F WITH HEX RULES !!!
"""


for iii in range(digits):
    for ii in range(16):
        ii = hex(ii)[2:]
        
        cipher = "" 
        for i in range(n):
            s = string[i]
        
            byte  = ord(s) ^ ord(ii)
            cipher += chr(byte)
        
        
        print(ii, cipher, binascii.hexlify(bytes(cipher, 'ascii')))
        
        ''' 
        if len(cipher) % 2 != 0:
            cipher = "0" + cipher
        
        print(cipher)  
        
        print(ii, bytes.fromhex(cipher).decode('ASCII'))
        '''
        
# print(string, cipher)

