FROM ubuntu:latest

RUN apt-get update && apt-get install -y g++ cmake

WORKDIR /app
COPY . .

RUN cmake .
RUN make

CMD ["./practice"]
