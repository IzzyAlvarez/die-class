/*
*/
int​ ​main​(){
}
​return​ ​0​;
 * Author: IzzyAlvarez
 * Date: 8-27-20
 * Description: This class simulates rolling a 6 sided die
 #​include​ ​<iostream>
 #​include​ ​<iomanip>
 #​include​ ​<cstdlib>
 #​include​ ​"die.h"
 using​ ​namespace​ ​std​;
 //function prototypes
 Die d;
 cout << ​"Face value: "​<< d << endl;
 Die d12(​12​);
 cout << ​"Face value: "​<< d12 << endl;
 d12.​setNumSides​(​24​);
 ​for​ (​size_t​ i = ​0​; i < ​6​; i++) {
 cout << ​"Roll: "​ << d12.​roll​() << endl;
}

