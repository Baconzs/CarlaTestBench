#!/bin/bash

PROTOBUF_PATH=../proto
INCLUDE_PATH=../include/proto

declare -a array=("${PROTOBUF_PATH}"/*)

for i in ${array[@]}
do
:
	protoc --cpp_out=${INCLUDE_PATH} --proto_path=${PROTOBUF_PATH} ${i}
done
