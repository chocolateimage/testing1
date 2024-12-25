FROM node:23.5.0-alpine3.20
WORKDIR /app

COPY . /app

CMD [ "node", "utils/check.js" ]