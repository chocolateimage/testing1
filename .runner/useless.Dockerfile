FROM alpine:3.21.0

WORKDIR /app

COPY . /app

CMD [ "testingtesting", "utils/useless.sh" ]