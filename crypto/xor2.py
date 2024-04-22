import binascii

string = input("msg: ")
key    = input("key: ")
print()
n = len(string)


cipher = str()
for i in range(n):
    s = string[i]
    k = key[i % len(key)]
    byte  = ord(s) ^ ord(k)
    cipher += chr(byte)

# print(string, key, binascii.hexlify(bytes(cipher, "ascii")))

print(string, key, cipher)

