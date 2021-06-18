FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive 
# insatll the goods
RUN apt update && apt install gcc gcc-multilib socat python3 python3-pip gdb vim curl wget patchelf elfutils netcat libc6-i386 -y
RUN pip3 install pwntools
RUN wget 'https://github.com/io12/pwninit/releases/download/3.0.0/pwninit' -O /usr/local/bin/pwninit && chmod +x /usr/local/bin/pwninit
