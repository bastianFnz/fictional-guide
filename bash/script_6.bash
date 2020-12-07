#! /bin/bash

count=10

if (( $count < 10 ))
then
  echo "first condition is true"
elif (( $count > 9 ))
then
  echo "second condition is true"
else
  echo "this condition is false"
fi
