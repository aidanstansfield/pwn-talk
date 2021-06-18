#!/bin/bash

# add flags
echo "flag{}" > /home/pwn1/flag
echo "flag{}" > /home/pwn2/flag
# echo "flag{}" > /home/pwn3/flag
# echo "flag{}" > /home/pwn4/flag

for i in {6..6}; do
  chmod 440 /home/pwn$i/flag && chown root:pwn$i /home/pwn$i/flag 
  # Start the process
  cd /home/pwn$i && /usr/bin/socat -dd TCP4-LISTEN:900$i,fork,reuseaddr,su=pwn$i EXEC:/home/pwn$i/pwn$i,pty,echo=0,raw,iexten=0 &
  status=$?
  if [ $status -ne 0 ]; then
    echo "Failed to start pwn$i: $status"
    exit $status
  fi
done

sleep infinity