#!/bin/bash

qemu-system-x86_64 \
  -accel hvf \
  -cpu host \
  -smp 2 \
  -m 4G \
  -device usb-tablet \
  -usb \
  -nographic \
  -device virtio-net,netdev=vmnic \
  -netdev user,id=vmnic,hostfwd=tcp:127.0.0.1:9001-:22 \
  -drive file=ubuntu2004.qcow2,if=virtio