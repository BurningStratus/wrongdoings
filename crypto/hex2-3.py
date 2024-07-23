import binascii
raw_string = "7A2F4B1C9E"

string = str()
for index in range(len(raw_string)):
    char = raw_string[index]
    hex_decoded = int(char, 16)
    #char = chr(hex_decoded)
    char = hex_decoded
    string += str(char)

print(raw_string) 
print("decoded hex 1: %s" % string)

string = raw_string.decode("hex")
neostring = str()
for i in string:
    char = ord(i)
    neostring += str(char)


print("decoded hex 2: %s" % neostring)

