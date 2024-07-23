#!/bin/bash

echo -n "booba: "
read boob

case $boob in
    "yah" | "yeah")
        echo "( . )( . )"
        ;;
    "nuh" | "no")
        echo ">:("
        ;;
    *)
        echo "the fuck?"
        ;;
esac
