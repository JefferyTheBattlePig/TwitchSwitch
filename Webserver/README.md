# TwitchSwitch (Webserver)

### Introduction:
I'm using a webserver hosted for free on glitch.com. If you remix this webserver and change the .env file you should be good to go.




# Table of Contents
1. [Setup](#setup)  
    1. [Make Twitch Application](#make-twitch-application)
    2. [Make the Webserver](#make-the-webserver)
    3. [Get your user ID](#get-your-user-id)
    4. [Fill out the .env File](#fill-out-the-env-file)
2. [Usage](#usage)


## Setup
webhook callback server and twitch app creation

### Make Twitch Application: 
go here https://dev.twitch.tv/console/apps
create a app and make sure you copy the client ID and client secret


### Make the Webserver
Remix the webserver code. You get 1000 hours a month for free (there are 740 hours in a month)
https://glitch.com/edit/#!/yummy-fire-ketch

### Get your user ID
get a program like postman and first get a Oauth token
https://dev.twitch.tv/docs/authentication/getting-tokens-oauth/#client-credentials-grant-flow

then use that token and get your user id
https://dev.twitch.tv/docs/api/reference/#get-users

### Fill out the env File
![image](https://github.com/JefferyTheBattlePig/TwitchSwitch/assets/35508608/1d275282-019a-4e9a-9bda-2b9014f71062)

## Usage
Should be ready to rip as soon as you get the .env file setup right, and the port forwarding setup on your router
