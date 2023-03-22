#!/bin/bash
find . -type f -name "*.c" -exec sed -i 's/holberton/main/g' {} +
