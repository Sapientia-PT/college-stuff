#!/bin/sh

sort "$1" > "$1"
sort "$2" > "$2"

if cmp --silent -- "$1" "$2"; then
	echo "same"
else
	echo "different"
fi
