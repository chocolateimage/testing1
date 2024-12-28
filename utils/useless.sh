#!/bin/sh

i=0
while [ "$i" -le 5 ]
do
i=$((i+1))
echo "outputting numbers... $i"
sleep 0.3
done