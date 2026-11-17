/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:57:11 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/17 14:39:02 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    public:
    Contact();
    ~Contact();

    void    setFirstName(const std::string &Value);
    void    setLastName(const std::string &Value);
    void    setNickname(const std::string &Value);
    void    setPhoneNumber(const std::string &Value);
    void    setDarkestSecret(const std::string &Value);

    std:: string getFirstName() const;
    std:: string getLastName() const;
    std:: string getNickname() const;
    std:: string getPhoneNumber() const;
    std:: string getDarkestSecret() const;

    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    
};

#endif