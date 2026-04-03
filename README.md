# Pico Router
The first open-source offline GPS router for Raspberry Pi Pico 2

## Development
### Dev container setup
From project root run the following cmd to build the image:
```bash
docker buildx build \
  --platform linux/amd64 \
  --load \
  -t pico-router-dev:latest \
  -f .devcontainer/Dockerfile \
  .
```

Then simply start the dev container by pressing <kbd>⌘</kbd>/<kbd>ctrl</kbd> + <kbd>shift</kbd> + <kbd>P</kbd> and selecting the option `Dev Containers: Rebuild Container`