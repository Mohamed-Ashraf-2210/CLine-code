    #include<bits/stdc++.h>
    using namespace std;

    class customer
    {
        public:
            string name;
            string phone;
            string address;
            string nationalId;
            int h_m_days;
    };

    class room : public customer
    {
        public:
            int numRoom[100];
            char size;
            char singelORdouble;


        
        room()
        {   
            // creat number room
            for(int i=0 ; i<100 ; i++) numRoom[i] = i+1;
        }
     
        

        // function to Calculate the price of room
        float price()
        {
            float x=200.0;
            if(size == 'B' || size == 'b') x*2;
            if(singelORdouble == 'd' || singelORdouble == 'D') x*2;
            return x*h_m_days;

        }
    };
    
    class hotelSys : public room
    {
            
            public:
                hotelSys()
                {
                    cout<<"                   ***********************************************************************************\n"
                        <<"                   ***********************************************************************************\n"
                        <<"                   ***********************************************************************************\n"
                        <<"                   ****                                                                           ****\n"
                        <<"                   ****   db   d8b   db d88888b db       .o88b.  .d88b.  .88b  d88. d88888b       ****\n"
                        <<"                   ****   88   I8I   88 88'     88      d8P  Y8 .8P  Y8. 88'YbdP`88 88'           ****\n"
                        <<"                   ****   88   I8I   88 88ooooo 88      8P      88    88 88  88  88 88ooooo       ****\n"
                        <<"                   ****   Y8   I8I   88 88~~~~~ 88      8b      88    88 88  88  88 88~~~~~       ****\n"
                        <<"                   ****   `8b d8'8b d8' 88.     88booo. Y8b  d8 `8b  d8' 88  88  88 88.           ****\n"
                        <<"                   ****    `8b8' `8d8'  Y88888P Y88888P  `Y88P'  `Y88P'  YP  YP  YP Y88888P       ****\n"
                        <<"                   ****                                                                           ****\n"
                        <<"                   ***********************************************************************************\n"
                        <<"                   ***********************************************************************************\n"
                        <<"                   ***********************************************************************************\n";

                }

                ~hotelSys()
                {

                }

            void allData()
            {
                cout<<"Enter your name :\n";
                cin>>name;
                cout<<"Enter your phone :\n";
                cin>>phone;
                cout<<"national id :\n";
                cin>>nationalId;
                cout<<"address :\n";
                cin>>address;
                cout<<"Size of room Big or Small (B/S) :\n";
                cin>>size;
                cout<<"Singel OR Double (S/D) :\n";
                cin>>singelORdouble;
                cout<<"How much days you will stay?\n";
                cin>>h_m_days;
            }
            void displayData()
            {
                cout<<"********************************************************************\n"
                    <<"********************************************************************"
                    <<"\n--> Name : "<<name
                    <<"\n--> phone : "<<phone
                    <<"\n--> national id : "<<nationalId
                    <<"\n--> address : "<<address
                    <<"\n--> Size : "<<size
                    <<"\n--> Singel OR Double : "<<singelORdouble
                    <<"\n--> "<<h_m_days<<" days"
                    <<"\n--> The price is " <<price()<<" pound\n";
                
            }

                

    };

    int main()
    {
        char b;
        int n=0;

        do
        {   
            //when all room is completed
            if(n == 100)
            {
                cout<<"No rooms available";
                break;
            }

            hotelSys c;
            c.allData();
            c.displayData();
            cout<<"--> Your number room is "<<c.numRoom[n]<<"\n"
                <<"********************************************************************\n"
                <<"********************************************************************\n";
            n++;  
            
            cout<<"Do you want to return this system (y/n)\n";
            cin>>b;
        } while(b == 'y' || b == 'Y');
        
                    cout<<"    ,o888888o.    8 8888      88 8888888 8888888888 8 8888888888   8 888888888o   8 8888      88     ,o888888o.    8 8888        8 8888888 8888888888 \n"
                        <<"   8888     `88.  8 8888      88       8 8888       8 8888         8 8888    `88. 8 8888      88    8888     `88.  8 8888        8       8 8888       \n"
                        <<",8 8888       `8. 8 8888      88       8 8888       8 8888         8 8888     `88 8 8888      88 ,8 8888       `8. 8 8888        8       8 8888       \n"
                        <<"88 8888           8 8888      88       8 8888       8 8888         8 8888     ,88 8 8888      88 88 8888           8 8888        8       8 8888       \n"
                        <<"88 8888           8 8888      88       8 8888       8 888888888888 8 8888.   ,88' 8 8888      88 88 8888           8 8888        8       8 8888       \n"
                        <<"88 8888           8 8888      88       8 8888       8 8888         8 8888888888   8 8888      88 88 8888           8 8888        8       8 8888       \n"
                        <<"88 8888   8888888 8 8888      88       8 8888       8 8888         8 8888    `88. 8 8888      88 88 8888           8 8888888888888       8 8888       \n"
                        <<"`8 8888       .8' ` 8888     ,8P       8 8888       8 8888         8 8888      88 ` 8888     ,8P `8 8888       .8' 8 8888        8       8 8888       \n"
                        <<"   8888     ,88'    8888   ,d8P        8 8888       8 8888         8 8888    ,88'   8888   ,d8P     8888     ,88'  8 8888        8       8 8888       \n"
                        <<"    `8888888P'       `Y88888P'         8 8888       8 888888888888 8 888888888P      `Y88888P'       `8888888P'    8 8888        8       8 8888       \n";

        return 0;
    }