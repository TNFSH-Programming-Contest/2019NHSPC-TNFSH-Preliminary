#!/usr/bin/env bash

# Usage: ./compile_pdf.sh [problem-id]

contestName="2019臺南一中上學期校內初選"

cd "$1"
pandoc -M contestName="$contestName" -T "" problem.md -o problem.pdf --template ../template.tex -f markdown -t latex -s --pdf-engine=xelatex
