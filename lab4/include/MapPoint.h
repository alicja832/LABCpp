#pragma once
/**
 * @brief 
 * klasa opisujaca obiekty na mapie
 */
class MapPoint{
    public:
    //konstruktory
    MapPoint();
    MapPoint(char*, double longitude,double latitude);
    /**
     * @brief Set the Point object
     * 
     * @param longitude 
     * @param latitude 
     */
    void setPoint(char*, double longitude,double latitude);
    //print
    void print()const;
    //dowiadujemy sie o danych prywatnych
    double getLongitude()const;
    double getLatitude()const;
    //przesuniecie
    void move(double,double);
    char *getName()const;
    private:
    double _longitude,_latitude;
    char *_name;

};
/**
 * @brief dystans pomiedzy dwoma punktami
 * 
 * @return double 
 */
double distance(const MapPoint&,const MapPoint&);
/**
 * @brief 
 * blizszy punkt
 * @return const MapPoint* 
 */
const MapPoint *closestPlace(const MapPoint&,const MapPoint&,const MapPoint&);
/**
 * @brief poniedzy dwoma miejscami
 * 
 * @return MapPoint 
 */
MapPoint inTheMiddle(const MapPoint*, MapPoint*, char*);