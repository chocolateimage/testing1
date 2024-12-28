FROM python:3-alpine

WORKDIR /app

COPY . /app

CMD [ "python3", "tools/check.py" ]