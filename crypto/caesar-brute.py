
'''
Caesar's algrithm decryptor.
'''

alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"


enc_msg = input("encrypted msg: ")
enc_msg = enc_msg.upper()

# shift_ = abs(int(input("shift: ")))

n = len(enc_msg)

print("cracking ...\n")

for ii in range(len(alpha)):
    out = str()
    
    for i in range(n):
        symbol   = enc_msg[i]
        loc = alpha.find(symbol)
        
        new_loc = abs(loc + ii) % 26
        out += alpha[new_loc]
    
    print(out, ii)
