FROM ubuntu:latest

WORKDIR /app

COPY . /app

RUN apt update && apt install -y meson g++

CMD ["sh", "-c", "meson setup builddir && cd builddir && meson compile"]