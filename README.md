# Pico Router
[![License: AGPL v3](https://img.shields.io/badge/License-AGPL_v3-blue.svg)](https://www.gnu.org/licenses/agpl-3.0)

**The first low-power open-source offline GPS router for Raspberry Pi Pico 2 intended for disaster relief**

*Reframe:* An embedded, open-source routing engine derived from Valhalla for microcontroller-class devices

[Humanitarian OpenStreetMap Community](https://www.hotosm.org/en/)

<details>

<summary><i>Basic specs</i></summary>

* Runs on Raspberry Pi
* Uses Dual Arm Cortex-M33 cores in the RP2350 microcontroller
* Routes through internal graph traversal using a tiny version of [Valhalla Routing engine](https://github.com/valhalla/valhalla)
* Uses modified version of `Mjolnir` to build simplified graph from OSM data to later load onto a microSD
* Core peripherals:
  * MicroSD Breakout
  * GPS
  * OLED display
  * IMU (Bosch BNO055)
* Other peripherals:
  * Buttons
  * LoRa Radio
  * Fuel Gauge (i.e. "12 minutes of battery left")
  * Low Power Sleep Battery Solution

</details>

## To Do
- [x] Setup basic reproducable dev environment
- [ ] Implement preliminary A* algorithm
- [ ] Setup Renode environment
- [ ] Create initial CI checks
- [ ] Finalize contribution rules
#### Milestone 1
- [ ] Open-source repo

## Development
### Dev container setup
From project root run the following to build the image:
```bash
docker buildx build \
  --platform linux/amd64 \
  --load \
  -t pico-router-dev:latest \
  -f .devcontainer/Dockerfile \
  .
```

## Building C++ binary from source
```bash
cmake -B build && cmake --build build
```

Then simply start the dev container in VS code by pressing <kbd>⌘</kbd>/<kbd>ctrl</kbd> + <kbd>shift</kbd> + <kbd>P</kbd> and selecting the option `Dev Containers: Reopen in Container`