FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# Install build essentials, Clang, CMake, and other necessary tools
RUN apt-get update && apt-get install -y \
    clang \              
    build-essential \    
    cmake \              
    gdb \               
    && rm -rf /var/lib/apt/lists/*

# Set Clang as the default compiler
ENV CC=clang
ENV CXX=clang++

# Create a non-root user for safer development
RUN useradd -ms /bin/bash devuser
USER devuser
WORKDIR /home/devuser/app

# Copy the local source code to the Docker container
COPY . .

# Compile the C++ code using Clang when building the container (optional)
RUN clang++ -o app ./src/*.cpp -Iinclude

# Default command: open a bash shell
CMD ["./app"]
