#! /bin/bash

/usr/local/bin/asciidoctor assts/*.adoc *.adoc
if [ $# -ne 1 ]; then 
  echo "Run with argument to check in: ./build.sh <message>"
  exit 0
fi

git add .
git commit -m "$1" 
