FROM gcc:14.2.0

WORKDIR /app

COPY /build /app

CMD [ "./testing1" ]