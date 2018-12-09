//
// Created by Dick on 10-11-2018.
//

#include "Date.h"
#include <iostream>
#include <sstream>

namespace std {

    Date::Date()
    {
        Jaar = 2018;
        Maand = 1;
        Dag = 1;
    }
    Date::Date(int jaar, int maand, int dag)
    {
        Jaar = jaar;
        Maand = maand;
        Dag = dag;
    }
    std::string Date::getDate()
    {
        std::cout << Dag << "-" << Maand << "-" << Jaar;
        ostringstream convert;
        convert << Dag << "-" << Maand << "-" << Jaar;
        return convert.str();
    }
    void Date::addDays(int dagen)
    {
        if (dagen >= 0)
        {
            Dag += dagen;
            bool index = false;
            while (index == false)
            {
                switch (Maand)
                {
                    case 1: if (Dag > JanuariMax) {
                            Maand++;
                            Dag -= JanuariMax;
                        }
                        else
                            index = true;
                        break;
                    case 2: if (Dag > FebruariMax)
                        {
                            Maand++;
                        Dag -= FebruariMax;
                }
                else
                index = true;
                        break;
                    case 3: if (Dag > MaartMax)
                        {
                            Maand++;
                        Dag -= MaartMax;
                }
                else
                index = true;
                        break;
                    case 4: if (Dag > AprilMax)
                        {
                            Maand++;
                        Dag -= AprilMax;
                        }
                        else
                            index = true;
                        break;
                    case 5: if (Dag > MeiMax)
                        {
                            Maand++;
                        Dag -= MeiMax;
                }
                else
                index = true;
                        break;
                    case 6: if (Dag > JuniMax)
                        {
                            Maand++;
                        Dag -= JuniMax;
                }
                else
                index = true;
                        break;
                    case 7: if (Dag > JuliMax)
                        {
                            Maand++;
                        Dag -= JuliMax;
                        }
                        else
                            index = true;
                        break;
                    case 8: if (Dag > AugustusMax)
                        {
                            Maand++;
                        Dag -= AugustusMax;
                }
                else
                index = true;
                        break;
                    case 9: if (Dag > SeptemberMax)
                        {
                            Maand++;
                        Dag -= SeptemberMax;
                }
                else
                index = true;
                        break;
                    case 10: if (Dag > OktoberMax)
                        {
                        Maand++;
                        Dag -= OktoberMax;
                }
                else
                index = true;
                        break;
                    case 11: if (Dag > NovemeberMax)
                        {
                            Maand++;
                        Dag -= NovemeberMax;
                }
                else
                index = true;
                        break;
                    case 12: if (Dag > DecemberMax)
                        {
                            Maand = 1;
                            Jaar ++;
                        Dag -= DecemberMax;
                }
                else
                index = true;
                        break;
                    default:
                        index = true;
                        break;

                }
            }
        }

    }
    void Date::subtractDays(int dagen)
    {
        if (dagen >= 0)
        {
            Dag -= dagen;
            bool index = false;
            while (index == false)
            {
                switch (Maand)
                {
                    case 1: if (Dag < 1)
                        {
                            Maand = 12;
                        Dag += DecemberMax;
                        Jaar--;
                }
                else
                index = true;
                        break;
                    case 2: if (Dag < 1)
                        {
                            Maand--;
                        Dag += JanuariMax;
                }
                else
                index = true;
                        break;
                    case 3: if (Dag < 1)
                        {
                            Maand--;
                        Dag += FebruariMax;
                }
                else
                index = true;
                        break;
                    case 4: if (Dag < 1)
                        {
                            Maand--;
                        Dag += MaartMax;
                        }
                else
                index = true;
                        break;
                    case 5: if (Dag < 1)
                        {
                            Maand--;
                        Dag += AprilMax;
                }
                else
                index = true;
                        break;
                    case 6: if (Dag < 1)
                        {
                            Maand--;
                        Dag += MeiMax;
                }
                else
                index = true;
                        break;
                    case 7: if (Dag < 1)
                        {
                            Maand--;
                        Dag += JuniMax;
                }
                else
                index = true;
                        break;
                    case 8: if (Dag < 1)
                        {
                            Maand--;
                        Dag += JuliMax;
                }
                else
                index = true;
                        break;
                    case 9: if (Dag < 1)
                        {
                            Maand--;
                        Dag += AugustusMax;
                }
                else
                index = true;
                        break;
                    case 10: if (Dag < 1)
                        {
                            Maand--;
                        Dag += SeptemberMax;
                }
                else
                index = true;
                        break;
                    case 11: if (Dag < 1)
                        {
                            Maand--;
                        Dag += OktoberMax;
                }
                else
                index = true;
                        break;
                    case 12: if (Dag < 1)
                        {
                        Dag += NovemeberMax;
                        Maand--;
                }
                else
                index = true;
                        break;
                    default:
                        index = true;
                        break;

                }
            }
        }
    }

}