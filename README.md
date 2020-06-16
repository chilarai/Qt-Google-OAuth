# Qt-Google-OAuth

Sample application to showcase how to use Qt to authenticate Google apps. I have refered part of the code from [Stackoverflow Question](https://stackoverflow.com/questions/48453550/how-to-create-a-login-page-using-qt-oauth) answered by [Xplatforms](https://stackoverflow.com/users/1047746/xplatforms). I will keep the repo updated as Qt and Google introduces more changes.

Feel free to improve the code and post your issues

## General files

#### GoogleOAuth.pro

Remember to add `networkauth` in the list of Qt modeule dependencies

#### googleauth.h & googleauth.cpp

Please read the comments in the files. I have tried to explain all the details of the code

#### main.cpp

Initialized the googleauth object

#### main.qml

Contains the button which calls the `grant()` method of Qt and prompts Google auth on the browser

#### Others

-   [Sample Google JSON File](client_secret_452291785459-1ldhc2q2ahqfl7sv0mh1veuov740bj5f.apps.googleusercontent.com.json)

-   [Google console screenshot](GoogleConsole.png): Remember to put http://127.0.0.1:your_port instead of http://localhost:your_port else this will result in `redirect_uri mismatch error`
