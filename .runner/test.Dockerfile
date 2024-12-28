FROM debian:12.8

WORKDIR /app

COPY /build /app

CMD [ "./testing1" ]