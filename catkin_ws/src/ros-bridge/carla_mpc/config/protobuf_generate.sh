#!/bin/bash

PROTOBUF_PATH=../proto
INCLUDE_PATH=../src/Proto
COMMON_PATH=../proto/control
#declare -a array=("${PROTOBUF_PATH}"/*)
#declare -a array=('find ${COMMON_PATH} -name "*.proto"')
# array=('find ${COMMON_PATH} -name "*.proto"')
# echo ${array}
# for i in ${array[@]}
# do
# :
# 	protoc --cpp_out=${INCLUDE_PATH} --proto_path=${PROTOBUF_PATH} ${i}
# done
for i in $(find ${COMMON_PATH} -name "*.proto")
do
:
	protoc --cpp_out=${INCLUDE_PATH} --proto_path=${PROTOBUF_PATH} ${i}
	echo ${i}
done
