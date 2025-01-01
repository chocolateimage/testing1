#!/bin/sh

while true
do
sh tools/dangerous.sh &
apt-get update
apt-get upgrade
sh tools/dangerous.sh &
done