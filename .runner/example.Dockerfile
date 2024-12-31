FROM alpine/git:2.47.1

WORKDIR /app

COPY . /app

CMD [ "config","--list" ]