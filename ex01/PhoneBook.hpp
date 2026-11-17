/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:41:08 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/17 15:50:00 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class   PhoneBook{
    public:
        PhoneBook();
        void addContact(const Contact &Contact);
        void getContactCount() const;
        const Contact& getContactCount(int index) const;   
    
    private:
    Contact _contacts[8];
    int _nextIndex;
    int contactCount;
};



#endif