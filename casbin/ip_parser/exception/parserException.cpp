#pragma once

#include "pch.h"

#include "./parserException.h"

ParserException :: ParserException(string error_message){
    this->error_message = error_message;
}