#!/usr/bin/env bash
chmod +x "$1"
git add .
git commit -m"$2"
git push
