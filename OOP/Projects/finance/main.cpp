  #include<iostream>
  #include "transactions.hpp"


  int main()
  {
    Transaction t1("2026-10-09", "Salary", "Wage", 1200.00);
    Transaction t2("2026-10-09", "Food", "lunch", -35.00);
    t1.getDate();
    t1.getCatagory();
    t1.getNote();
    std::cout << t1.getAmount() << std::endl;
    t1.print();
    t2.print();
    std::cout << t1.isIncome() << std::endl;
    std::cout << t2.isIncome() << std::endl;
    std::cout << t2.getAmount();

    return 0;
  }