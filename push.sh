#!/bin/bash

git add .
echo "Enter commit meassage:\n"
read X

git commit -m "$X"

git push
