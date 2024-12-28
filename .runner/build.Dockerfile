FROM gcc:14.2.0

WORKDIR /app

COPY . /app

RUN apt-get update && apt-get install -y meson

CMD ["sh", "-c", "meson setup builddir && cd builddir && meson compile"]