FROM alpine/git:2.47.1 AS astage

WORKDIR /app

COPY . /app

ENTRYPOINT [ "sh" ]
CMD [ "tools/gittest.sh" ]