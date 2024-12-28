FROM alpine:3.21.0

WORKDIR /app

COPY . /app

RUN apk add meson g++

CMD ["sh", "-c", "meson setup builddir && cd builddir && meson compile"]