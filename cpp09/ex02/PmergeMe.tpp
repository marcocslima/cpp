/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:15:50 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/18 16:14:19 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T, typename Container >
PmergeMe< T, Container >::PmergeMe(const PmergeMe &cpy) : m_container(cpy.m_container){};
