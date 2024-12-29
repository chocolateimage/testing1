FROM alpine/curl

CMD [ "curl", "http://host.docker.internal:8080" ]