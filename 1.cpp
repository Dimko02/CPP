#include <iostream>  

int main()
{
	int count;
	std::cout << "������� �����: ";
	std::cin >> count;
	if(count<0)
		std::cout << count << " - asd";
	if(count>0)
	{
	        if(count<101)   
	        {
		        if(count == 1) 
			        std::cout << count << " ������";
		        if(count > 1 && count < 5)
			        std::cout << count << " ������";
		        if(count > 4 && count <21)
			        std::cout << count << " ��������";
	        }
            	else
            	{
                	if(count % 100 <5 || count %100 >19)
                    	{
                    		if(count % 10 == 1)
                        		std::cout << count <<" ������";
                    		if(count %10 <5 && count %10 >1)
                        		std::cout << count <<" ������";
                    	}
                	else
                    	std::cout << count << " ��������";
            	}
    	}
    	else
		std::cout << count <<" ��������";
}
