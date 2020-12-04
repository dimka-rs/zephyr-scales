cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(zephyr-scales)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE src/ble.c)
target_sources(app PRIVATE src/led.c)
