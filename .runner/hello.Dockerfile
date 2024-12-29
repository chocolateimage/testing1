FROM gcc:14.2.0

WORKDIR /app

COPY . /app

RUN apt-get update && apt-get install -y tmate

CMD ["sh", "-c", "tmate -F"]