FROM matimoreyra/opencv

RUN apt-get -y update
RUN apt-get -y install git

WORKDIR /urs/src/project

COPY . .