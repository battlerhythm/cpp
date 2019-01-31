FROM ubuntu:18.04
MAINTAINER battlerhythm@gmail.com
RUN apt-get -y update
RUN apt-get install -y build-essential
COPY . /usr/src/cpp