#!/bin/bash

TIME=$(date +%b-%d-%H)

zip -r /root/backup-$TIME /root/waznyFolder
