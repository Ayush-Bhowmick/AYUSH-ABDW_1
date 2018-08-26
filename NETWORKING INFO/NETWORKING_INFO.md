# NETWORKING INFO

- https://www.lantronix.com/resources/networking-tutorials/
- NTP
- NTP monlist command
- Ssl , ddos attacks , dns spoofing , lifi ,
- SSID,ESSID , radio ,dns server amplification attack , Mimikatz,
- Defcon, inSSider office , IMSI catcher , APN
- Nginx, TOR keys, bitchx , logic bomb femtocell, rubber ducky , openwrt
- Nodemongodb database
- shodan.io
- Repo://-->alternate to http like ftp://  part of application layer of ip suite
- Remote Administration Tool (RAT)
- Ip booters,


- Sometimes in a URL the "WWW" is followed by a number, such as "WWW1" or "WWW2." The number that follows the "WWW" indicates that the data being retrieved by the Web browser is gathering the information from a different Web server than the one that serves the typical "WWW" address.

----------

## IFCONFIG ( UNIX MAC)

### INTERFACES

- `lo0` - Loopback interface or localhost (127.0.0.0.1)
- `gif0` - Software Network Interface. . It's used to tunnel IPv4 traffic to an IPv6 network and back
  - http://www.gsp.com/cgi-bin/man.cgi?section=4&topic=gif
- `stf0` - 6to4 tunnel interface. IPv6 to IPv4 tunnel interface. It's a bridge connection that exists to help us transition from IPv4 to the IPv6 standard
  - http://en.wikipedia.org/wiki/6to4
- `XHC20` -
- en0 - ethernet interface (or physical interface)
  - `ifconfig en0` - shows only en0
  - `sudo ifconfig en0 down` - stops en0 interface, turns off wifi.
  - `sudo ifconfig en0 up` - stops en0 interface, turns on wifi.
- `p2p0`
- `awdl0`
- `en1`
- `en2`
- `bridge0`
- `utune0`
- `fw0` - Firewire interface
- `vmnet1` or vmnet8 - Virtual interface
-

----------------------------------

# NETWORKING TUTORIAL

- https://www.datapro.net/techinfo/wifi_term.html
- https://www.dummies.com/computers/computer-networking/networking-jargon-at-a-glance/
- `NETWORKING STANDARDS `https://coggle.it/diagram/WM5HzQQIbgABFE3m/t/7-2-networking-standards 
- `PRINCIPLES OF NETWORKING` https://coggle.it/diagram/WM5BmWK78QAB97Sn/t/7-1-principles-of-networking
- `NETWORKING` https://coggle.it/diagram/WhJgluojMQABS1D6/t/networking

- `OSI MODULE` https://www.wikiwand.com/en/OSI_model
  - The` Open Systems Interconnection model (OSI model)` is a conceptual model that characterizes and standardizes the communication functions of a telecommunication or computing system without regard to its underlying internal structure and technology

## Internet protocol suite (TCP/IP) https://www.wikiwand.com/en/Internet_protocol_suite

- The Internet protocol suite is the conceptual model and set of communications protocols used on the Internet and similar computer networks
  - commonly known as TCP/IP because the foundational protocols in the suite are the Transmission Control Protocol (TCP) and the Internet Protocol (IP).
  - http://www.differencebetween.net/technology/internet/difference-between-tcp-and-ip/

#### APPLICATION LAYER https://www.wikiwand.com/en/Application_layer

- An application layer is an abstraction layer that specifies the shared communications protocols and interface methods used by hosts in a communications network. The application layer abstraction is used in both of the standard models of computer networking: the `Internet Protocol Suite (TCP/IP)` and the `OSI model`. It is the `highest level` layer in both models.

  `APPLICATION LAYER PROTOCOLS` - Remote login to hosts: `Telnet` - File transfer: `File Transfer Protocol (FTP)`, `Trivial File Transfer Protocol (TFTP)` - Electronic mail transport: `Simple Mail Transfer Protocol (SMTP)` - Networking support: `Domain Name System (DNS)` - Host initialization: `BOOTP` - Remote host management: `Simple Network Management Protocol (SNMP)`, `Common Management Information Protocol over TCP (CMOT)` - OTHER - BGP DHCP DNS FTP HTTP IMAP LDAP MGCP MQTT NNTP NTP POP ONC/RPC RTP RTSP RIP SIP SMTP SNMP SSH Telnet TLS/SSL XMPP

- `DNS (Domain Name System)`
  - The Domain Name System is a hierarchical decentralized naming system for computers, services, or other resources connected to the Internet or a private network. `TCP Port 53`


#### TRANSPORT LAYER https://www.wikiwand.com/en/Transport_layer

- TCP UDP DCCP SCTP RSVP

- `TCP (Transmission Control Protocol) or TCP/IP`

  - The Transmission Control Protocol (TCP) is one of the main protocols of the Internet protocol suite. It originated in the initial network implementation in which it complemented the Internet Protocol (IP). Therefore, the entire suite is commonly referred to as TCP/IP.
  - https://www.wikiwand.com/en/Transmission_Control_Protocol

- `UDP (User Datagram Protocol)` - is one of the core members of the Internet protocol suite.

#### INTERNET LAYER https://www.wikiwand.com/en/Internet_layer

- IP IPv4 IPv6 ICMP ICMPv6 ECN IGMP IPsec

- An `Internet Protocol address (IP address)` is a numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication.An IP address serves two principal functions: host or network interface identification and location addressing.

  - `IPV4` - 32 bits. eg. - `192.168.0.255` or `192.168.0.0/24`
  - `IPV6` - 128 bits or 16 octets. eg. - `2001:db8:0:1234:0:567:8:1`

-  `IP SETTINGS`

  - `DHCP (Dynamic Host Configuration Protocol)` - It is a protocol used to provide quick, automatic, and central management for the distribution of IP addresses(DYNAMIC IP) within a network.

    - `STATIC IP` - A static Internet Protocol (IP) address (static IP address) is a permanent number assigned to a computer by an Internet service provider (ISP).  

     - `DYNAMIC IP` - A dynamic IP address is an IP address that's automatically assigned to each connection, or node, of a network, like smartphone, desktop PC, wireless tablet.


#### LINK LAYER https://www.wikiwand.com/en/Link_layer

- ARP NDP OSPF Tunnels L2TP PPP MAC Ethernet DSL ISDN FDDI
- `DSL (Digital subscriber line)` - It is a family of technologies that are used to transmit digital data over telephone lines. In telecommunications marketing, the term DSL is widely understood to mean `asymmetric digital subscriber line (ADSL`)

---------------------------------------

## WIRELESS SECURITY

- `WPA (Wi-Fi Protected Acces)` - Security Protocol for Wifi
    - `WPA/WPA2 PERSONAL` - 

    - `WPA/WPA2 ENTERPRISE` - https://security.stackexchange.com/questions/35780/why-is-wpa-enterprise-more-secure-than-wpa2

    - `WPA2 PSK` or `WPA` - It is a method of securing your network using WPA2 with the use of the optional `Pre-Shared Key (PSK) authentication`, which was designed for home users without an enterprise authentication server. 

    - `WPA2-AES`
    - `WPA2-TKIP`

- `WEP (Wired Equivalent Privacy)` - is a security algorithm for IEEE 802.11 wireless networks.
    - `DYNAMIC WEP` - 



---

## OTHER NETWORKING JARGONS

- `SSID` - SSID is simply the technical term for a network name

- `PORT` 
    -  a port is an endpoint of communication. Physical as well as wireless connections are terminated at ports of hardware devices. At the software level, within an operating system, a port is a logical construct that identifies a specific process or a type of network service. http://www.wikiwand.com/en/Port_(computer_networking)
    - The software port is always associated with an IP address of a host and the protocol type of the communication. It completes the destination or origination network address of a message. Ports are identified for each protocol and address combination by 16-bit unsigned numbers, commonly known as the port number.
    -  The most commonly used protocols that use ports are the T`ransmission Control Protocol (TCP)` and the `User Datagram Protocol (UDP)`.


-  `IEEE (Institute of Electrical and Electronics Engineers) standard`

  - `IEEE 802` is a family of IEEE standards dealing with local area networks and metropolitan area networks. eg. `802.11 ac/n/a/b/g/n`
  - https://www.wikiwand.com/en/IEEE_802

---------------------------

# ENCRYPTIONS AND CRYPTOGRAPHY 
- https://www.wikiwand.com/en/Encryption
- https://www.wikiwand.com/en/Cryptography

## CA Certification - https://www.wikiwand.com/en/Certificate_authority

- `CERTIFICATE AUTHORITY` - certificate authority or certification authority (CA) is an entity that issues digital certificates. A CA acts as a trusted third party—trusted both by the subject (owner) of the certificate and by the party relying upon the certificate. The format of these certificates is specified by the X.509 standard.

- `DIGITAL CERTIFICATE` - A digital certificate certifies the ownership of a public key by the named subject of the certificate. This allows others (relying parties) to rely upon signatures or on assertions made about the private key that corresponds to the certified public key

- `SIGNATURE` - A digital signature is a mathematical scheme for presenting the authenticity of digital messages or documents. https://www.wikiwand.com/en/Digital_signature

-----------

- `AES ENCRYPTION` - 

--------------

# CLOUD COMPUTING 
- `SaaS vs PaaS vs IaaS` - https://www.bmc.com/blogs/saas-vs-paas-vs-iaas-whats-the-difference-and-how-to-choose/
