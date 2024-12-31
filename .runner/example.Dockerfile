FROM alpine/git:2.47.1

WORKDIR /app

COPY . /app

ENTRYPOINT [ "sh" ]
CMD___ [ "tools/gittest.sh" ]