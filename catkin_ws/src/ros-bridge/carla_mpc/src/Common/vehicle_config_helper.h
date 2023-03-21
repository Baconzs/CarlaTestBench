#ifndef VEHICLE_CONFIG_HELPER_H_
#define VEHICLE_CONFIG_HELPER_H_

#include <string>
#include <fstream>

#include <fcntl.h>
#include <glob.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "ros/ros.h"
#include "google/protobuf/text_format.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "vehicle_config.pb.h"

bool GetProtoFromTXTFile(const std::string &file_name,
    google::protobuf::Message *message);

#endif