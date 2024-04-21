#!/bin/bash

# Fetch the latest release version from GitHub API
VERSION=$(curl -s "https://api.github.com/repos/cli/cli/releases/latest" | grep '"tag_name"' | cut -d'"' -f4)

# Check if the version is retrieved successfully
if [ -z "$VERSION" ]; then
    echo "Failed to fetch the latest version. Exiting."
    exit 1
fi

# Create a downloads directory if it doesn't exist
DOWNLOADS_DIR=~/Downloads
mkdir -p "$DOWNLOADS_DIR"
cd "$DOWNLOADS_DIR" || exit

# Download and extract the binary
wget "https://github.com/cli/cli/releases/download/$VERSION/gh_${VERSION}_linux_amd64.tar.gz"
tar xvf "gh_${VERSION}_linux_amd64.tar.gz"

# Copy the binary to /usr/local/bin
sudo cp "gh_${VERSION}_linux_amd64/bin/gh" /usr/local/bin/

# Clean up downloaded files
rm "gh_${VERSION}_linux_amd64.tar.gz"
rm -rf "gh_${VERSION}_linux_amd64"

echo "GitHub CLI version $VERSION has been installed successfully."