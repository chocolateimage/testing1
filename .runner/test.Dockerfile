FROM debian:12.8-slim

WORKDIR /app

COPY /build /app

CMD [ "testing1" ]