#! /bin/bash

/usr/local/bin/asciidoctor assts/*.adoc *.adoc
git add .
git commit -m "tweaks"
