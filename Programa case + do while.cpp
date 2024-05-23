#include <iostream>

int main()
{
int num;

    do{
        std::cout << "ingrese numero no mayor a 10 cifras" << std::endl;
        std::cin >> num;
        
        switch (num){
            case 45:
            
    
             std::cout<< "ganaste" <<std::endl; 
           
            break;
            
            case 95:
            
				std::cout<< "ganaste" <<std::endl;
	
			break;	
			
			default:
				std::cout<< "numero no gana ni pierde" <<std::endl;
        }
        
    }while (num < 99);
    
  
    
    
    
    


    return 0;
}

