require conf/machine/include/oem-sh4.inc
require conf/machine/include/smallflash.inc
require conf/machine/include/modutils-sh4.inc

MACHINE_BRAND = "atemio"
PREFERRED_PROVIDER_virtual/kernel = "linux-sh4-${MACHINE_BRAND}"

ROOTFS_FILE = "root.img"
KERNEL_FILE = "uImage"

IMAGE_FSTYPES += "tar.gz"

AUDIOELF = "audio_7111.elf"
VIDEOELF = "video_7111.elf"

SOC_FAMILY = "sti7111"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    stlinux24-sh4-stx7111-fdma-firmware \
    stlinux24-sh4-stmfb-firmware-stx7111 \
    evremote2 \
"

MACHINE_FEATURES += "hdmicec ci"