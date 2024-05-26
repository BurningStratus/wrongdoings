import codecs, sys

try:
    raw_string = sys.argv[1]
    hex_       = sys.argv[2]
except:
    print("no args! usg: <string> <hex_=True/False>")
    exit(1)
    
print(f"got arg:\n {raw_string} hex: {hex_} \n")


if hex_:   
    print("dehexing ...")
    string = str()
    for index in range(len(raw_string)):
        char = codecs.decode("0" + raw_string[index], "hex")
        char = char[2:]
        hex_decoded = int(char, 16)
        char = chr(hex_decoded)
        string += str(char)
        print(char)
        
    print("decoded hex: %s" % string)
else:
    string = raw_string

''' Stash:
if hex_:   
    print("dehexing ...")
    string = str()
    for index in range(len(raw_string)):
        char = codecs.decode("0" + raw_string[index], "hex")
        char = char[2:]
        hex_decoded = int(char, 16)
        char = chr(hex_decoded)
        string += str(char)
        print(char)
        
    print("decoded hex: %s" % string)
else:
    string = raw_string
'''

# string = raw_string.decode("hex")

strlen = len(string)

for ascii_0 in range(127):
    for ascii_1 in range(127):
 
        key = str(ascii_0) + str(ascii_1)
        #key = chr(ascii_0) + chr(ascii_1)
        #print("b4 chabge: %s" % key)
        #key = chr(int(key))
        #print("after chg: %s" % key)
        
        comb = str()
        
        for index in range(strlen):
            curr_char = string[index]
            #print(" >>> ", key[0], key[1], index)
            #print(key[index % 2]) 
            
            key_index = key[index % 2]
         
            byte = ord(curr_char) ^ ord(key_index)
            comb += chr(byte)

        print(key, comb)
