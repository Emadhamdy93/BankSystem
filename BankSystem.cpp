#include <iostream>
#include<memory>
#include<vector>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"

using SharedPtr_Person=std::shared_ptr<Person> ;

int main()
{
    SharedPtr_Person p1 = std::make_shared<Client>("Emad Hamdy", 1, "12366664", 15860);
    SharedPtr_Person p2 = std::make_shared<Employee>("Hamdy Hamdan", 2, "12366664", 15685);
    SharedPtr_Person p3 = std::make_shared<Admin>("Ahmed Hamdan", 1, "12366664", 15860);

    std::vector<SharedPtr_Person> vec;
    vec.push_back(p1);
    vec.push_back(p2);
    vec.push_back(p3);
    std::cout << "Use count : " << p2.use_count() << std::endl;

    for (const auto& v : vec) {
        std::cout << v->getName() << std::endl;
    }
    ////////////////////////////////////////////////////////////
   // char selection{};
   // while (selection != 'q' && selection != 'Q')
   // {


   // }
   // Client client("John Doe", 123456, "password123", 2000.0);
   // Client client1("Emad Hamdy", 123456, "password123", 2000.0);
   // Client client2("Jane Smith", 789012, "password456", 3000.0);

   // client.display();

   //client.deposit(500.0);
   // client.withdraw(300.0);
   // client.transferTo(100.0, client1);
   // client.checkBalance();
   // client1.checkBalance();
   // Admin Ahmed("Ahmed Hossam", 123456, "password123", 2000.0);
   // Ahmed.display();

   //    client.setName("John");  // Invalid name. The name must be between 5 and 20 characters long.
   // client.setName("John Doe123");  // Invalid name. The name must contain only alphabetic characters.
   // client.setName("John Doe Smith");
   // client.display();

   // client.setPassword("123");  // Invalid password. The password must be between 8 and 20 characters long.
   // client.setPassword("newpassword123");
   // client.display();
}
