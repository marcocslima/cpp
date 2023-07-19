/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:15:26 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/17 15:14:45 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::cout << "/ ***** Compare with Container list ***** /" << std::endl;

	std::list< int > lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();
	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);

	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	++lst_it;
	--lst_it;
	while (lst_it != lst_ite)
	{
		std::cout << *lst_it << std::endl;
		++lst_it;
	}
	std::list<int> l(lst);

	std::cout << "/ ***** Compare with Container vector ***** /" << std::endl;

	std::vector< int > vct;

	vct.push_back(5);
	vct.push_back(17);

	std::cout << vct.back() << std::endl;

	vct.pop_back();
	std::cout << vct.size() << std::endl;

	vct.push_back(3);
	vct.push_back(5);
	vct.push_back(737);
	//[...]
	vct.push_back(0);

	std::vector<int>::iterator vct_it = vct.begin();
	std::vector<int>::iterator vct_ite = vct.end();
	++vct_it;
	--vct_it;
	while (vct_it != vct_ite)
	{
		std::cout << *vct_it << std::endl;
		++vct_it;
	}
	std::vector<int> v(vct);

	return 0;
}
