#!/bin/bash

cd `dirname $0`
dir=`pwd`
echo $dir

contest_name=$1
contest_num=$2

mkdir $contest_name
cd $contest_name

echo "Create files."
# cpp file template
template=$(cat <<EOS
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int result { 0 };
    
    cout << result << endl;

    return 0;
}
EOS
)

filelist=("A" "B" "C" "D")
for file in ${filelist[@]}
do
  touch ${contest_num}_${file}.cpp
  echo "$template" > ${contest_num}_${file}.cpp
  echo "created file: ${contest_num}_${file}.cpp"
done

cd ..
echo "Add executable into CMakeLists.txt"
for file in ${filelist[@]}
do
    echo "add_executable(${contest_num}_${file} ${contest_name}/${contest_num}_${file}.cpp)" >> ./CMakeLists.txt
done
