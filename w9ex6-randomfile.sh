#!/usr/bin/env bash

echo "Hello $USER"
uptime >> "$(date "+%Y-%m-%d %H:%M:%S")".txt
echo "Your File is being saved to $(pwd)"
