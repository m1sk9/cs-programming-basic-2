#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <number_of_files>"
    exit 1
fi

num_files=$1
dir_name=$(basename "$PWD")

counter=1

echo "Creating template $num_files files in $dir_name...."

for ((i = 0; i < num_files; i++)); do
    while [ -e "subject${dir_name}-${counter}.c" ]; do
        counter=$((counter + 1))
    done

    # 新しいファイルを作成
    filename="subject${dir_name}-${counter}.c"
    cat <<EOL > $filename
#include <stdio.h>

int main(void) {
    printf("Hello world \\n");
    return 0;
}
EOL
    echo "Created file: $filename"
    counter=$((counter + 1))
done

echo "Done."
