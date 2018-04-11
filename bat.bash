#!/bin/bash
sed -i -r "s/\t/  /g" $(/bin/find . -name "*.c") $(/bin/find . -name "*.h") $(/bin/find . -name "*.p")
