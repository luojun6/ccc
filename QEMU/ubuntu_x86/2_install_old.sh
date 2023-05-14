#!/bin/bash

qemu-system-x86_64 \
  -accel hvf \
  -cpu qemu64 \
  -smp 2 \
  -m 4G \
  -usb \
  -device usb-tablet \
  -vga virtio \
  -display default,show-cursor=on \
  -device virtio-net,netdev=vmnic -netdev user,id=vmnic \
  -audiodev coreaudio,id=coreaudio \
  -device ich9-intel-hda -device hda-output,audiodev=coreaudio \
  -cdrom ubuntu-20.04.6-desktop-amd64.iso \
  -drive file=ubuntu2004.qcow2,if=virtio