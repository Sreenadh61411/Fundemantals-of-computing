#!/bin/bash
function float() {
bc << EOF
num = $1;
base = num / 1;
if (((num - base) * 10) > 1 )
    base += 1;
print base;
EOF
echo ""
}

float 3.2
