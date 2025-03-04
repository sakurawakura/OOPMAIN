#!/bin/bash

# Add all changes
git add .

# Commit with a message passed as argument
git commit -m "$1"

# Push changes to the remote repository
git push

