#!/bin/python3

import sys
import time
from scapy.all import sniff

res = sniff(10, filter="arp")

for i in res:
	print("NEXT _____________________")  
	i.show()

print("EOF")
