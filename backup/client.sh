#!/bin/bash

TIME=$(date +%b-%d-%H)

scp root@95.211.233.183:/root/backup-$TIME.zip /home/sjal/
