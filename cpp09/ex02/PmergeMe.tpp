/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:45:53 by mcesar-d          #+#    #+#             */
/*   Updated: 2023/07/24 22:04:39 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PmergeMe.hpp"

template < typename Container >
void PmergeMe::sortPairs(Container& input){
	int tmp;
	typename Container::iterator it;

	for (it = input.begin(); it != input.end(); it++)
		if (it->second < it->first){
			tmp = it->second;
			it->second = it->first;
			it->first = tmp;
		}

	mergeSort(input);
	createSeq(input);
}

template < typename Container >
void PmergeMe::mergeSort(Container& input){
	if (input.size() <= 1)
		return;
	Container left, right;
	int mid = input.size() / 2;
	typename Container::iterator it = input.begin();
	for (int i = 0; i < mid; i++, ++it)
		left.push_back(*it);
	for (int i = mid; i < (int)input.size(); i++, ++it)
		right.push_back(*it);
	mergeSort(left);
	mergeSort(right);

	merge(input, left, right);
}

template < typename Container >
void PmergeMe::merge(Container& input, Container& left, Container& right){
	typename Container::iterator it(input.begin()), it_l(left.begin()), it_r(right.begin());

	while (it_l!= left.end() && it_r!= right.end()){
		if (it_l->second < it_r->second){
			*it = *it_l;
			++it;
			++it_l;
		} else {
			*it = *it_r;
			++it;
			++it_r;
		}
	}
	while (it_l != left.end()){
		*it = *it_l;
		++it;
		++it_l;
	}
	while (it_r!= right.end()){
		*it = *it_r;
		++it;
		++it_r;
	}
}

template < typename Container >
void PmergeMe::createSeq(Container& input){
	int	i = 0;
	std::vector<int> seq;
	std::vector<int> pend;

	typename Container::iterator it(input.begin());

	while (it!= input.end()){
		seq.insert(seq.begin() + i, it->second);
		pend.insert(pend.begin() + i, it->first);
		++it;
		++i;
	}
	seq.insert(seq.begin(), pend[0]);

	int iter = 0;
	int jacobindex = 3;
	std::vector<int> indexSeq;
	std::string last = "default";

	indexSeq.insert(indexSeq.begin(), 1);

	std::vector<int> jacobInsSeq = buildJacobInSeq(pend);

	while (iter <= (int)pend.size()){
		int item;
		if (jacobInsSeq.size() != 0 && last != "jacob"){
			indexSeq.push_back(jacobInsSeq[0]);
			item = pend.at(jacobInsSeq[0] - 1);
			jacobInsSeq.pop_back();
			last = "jacob";
		} else {
			if (valExists(indexSeq, iter))
				iter++;
			item = pend.at(iter + 1);
			indexSeq.push_back(iter);
			last = "not-jacob";
		}
		std::vector<int>::iterator it_s = std::lower_bound(seq.begin(), seq.end(), item);
		int insertIndex = std::distance(seq.begin(), it_s);
		
		std::cout << insertIndex << std::endl;

		iter++;
		jacobindex++;
	}

	//for (i = 0; i < (int)jacobInsSeq.size(); i++)
	//	std::cout << "jacob: " << jacobInsSeq[i] << std::endl;
	// for (i = 0; i < (int)seq.size(); i++)
	// 	std::cout << "seq: " << seq[i] << std::endl;
	// for (i = 0; i < (int)pend.size(); i++)
	// 	std::cout << "pend: " << pend[i] << std::endl;
}
