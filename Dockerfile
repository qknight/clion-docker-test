FROM alpine:3.13

RUN apk add --update clang gdb cmake make ninja tar python3 && rm -Rf /tmp/* /var/cache/apk/*
