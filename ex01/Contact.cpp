/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:44:36 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/17 15:25:48 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(const std::string &Value)
{
    _firstName = Value; 
}

std::string Contact::getFirstName() const
{
    return (_firstName);
}

void Contact::setLastName(const std::string &Value)
{
    _lastName = Value;
}

std::string Contact::getLastName() const
{
    return (_lastName);
}

void Contact::setNickname(const std::string &Value)
{
    _nickname = Value;
}

std::string Contact::getNickname() const
{
    return (_nickname);
}

void Contact::setPhoneNumber(const std::string &Value)
{
    _phoneNumber = Value;
}

std::string Contact::getPhoneNumber() const
{
    return (_phoneNumber);
}

void Contact::setDarkestSecret(const std::string &Value)
{
    _darkestSecret = Value;
}

std::string Contact::getDarkestSecret() const
{
    return (_darkestSecret);
}