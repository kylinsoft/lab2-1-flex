/*This program calculates the area of a circle with a given radius.
  But the value of PI and radius are both misspelled.
     -by Yang Maolin.
*/
int main(){
    //3.14 is misspelled
    float pi = 3l14;
    //2.0 is misspelled
    float r = 2f;
    float area = pi * r * r;
    putfloat(area);
}
