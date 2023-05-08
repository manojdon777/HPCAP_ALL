FROM openjdk:12-alpine

COPY . /usr/src/myjavaapp

WORKDIR /usr/src/myjavaapp

RUN javac EvenOrOdd.java

CMD ["java", "EvenOrOdd"]
