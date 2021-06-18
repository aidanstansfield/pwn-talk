FROM ubuntu:20.04

# insatll the goods
RUN apt update && apt install socat libc6-i386 -y

# add users
RUN useradd -m -s /bin/bash pwn6

# add challenges
COPY pwn6/pwn6 /home/pwn6/
COPY init.sh /root/init.sh

# perms
RUN chown -R root:pwn6 /home/pwn6 && \
  chmod -R 750 /home/pwn6

EXPOSE 9006

ENTRYPOINT ["/root/init.sh"]