FROM alpine:3.21.0

CMD [ "sh", "-c", "mkdir -p /app/builddir && echo Test > /app/builddir/testing1 && echo second > /app/builddir/testing2" ]