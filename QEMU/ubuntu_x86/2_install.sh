qemu-system-x86_64 \
    -machine type=q35,accel=hvf \
    -smp 6 \
    -cpu host\
    -hda ubuntu2004.qcow2\
    -m 16G \
    -vga virtio \
    -usb \
    -device usb-tablet \
    -display default,show-cursor=on \
    -cdrom ./ubuntu-20.04.6-desktop-amd64.iso


