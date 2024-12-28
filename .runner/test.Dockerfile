FROM gcc:14.2.0

WORKDIR /app

COPY . /app

CMD [ "/bin/sh", "test.sh" ]