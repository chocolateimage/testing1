FROM alpine/git:2.47.1

CMD [ "sh", "-c", "git config --list" ]