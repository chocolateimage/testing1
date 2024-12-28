FROM alpine:3.21.0

WORKDIR /app

COPY . /app

CMD [ "sh", "utils/useless.sh" ]