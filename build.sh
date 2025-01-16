#! /bin/bash

if [ $# -ne 1 ]; then 
  echo "usage: ./build.sh <message>"
fi

/usr/local/bin/asciidoctor assts/*.adoc *.adoc
git add .
git commit -m "$1" 
