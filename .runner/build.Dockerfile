FROM ubuntu:latest

WORKDIR /app

COPY . /app

RUN apt-get update && apt-get install -y meson g++

CMD ["sh", "-c", "meson setup builddir && cd builddir && meson compile"]