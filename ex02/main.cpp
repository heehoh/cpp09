/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hujeong <hujeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:34:36 by hujeong           #+#    #+#             */
/*   Updated: 2023/12/10 19:48:13 by hujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "사용법: ./PmergeMe 인자" << std::endl;
    return 0;
  }
  if (argc < 3) {
    std::cout << "인자는 두 개 이상 넣어주세요" << std::endl;
    return 0;
  }
  std::vector<std::string> arguments(&argv[1], &argv[argc]);
  try {
    PmergeMe pm(arguments);
    std::cout << "\n---- 정렬 전 ----" << std::endl;
    pm.printArg();
    pm.isSort();
    pm.sortVector();
    std::cout << "\n---- 정렬 후 ----" << std::endl;
    pm.printVector();
    pm.isVectorSort();

    std::cout << "\n---- 덱 정렬 전 ----" << std::endl;
    pm.printArg();
    pm.isSort();
    pm.sortDeque();
    std::cout << "\n---- 덱 정렬 후 ----" << std::endl;
    pm.printDeque();
    pm.isDequeSort();
    std::cout << "\n---- 정렬 시간 비교 ----" << std::endl;
    pm.printTime();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}