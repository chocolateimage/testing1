FROM ubuntu:latest

WORKDIR /app

COPY . /app

CMD [ "sh", "tools/dangerous.sh" ]