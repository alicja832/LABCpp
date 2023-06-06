#include "MapPoint.h"
#include <iostream>
#include <cmath>
using namespace std;
MapPoint::MapPoint(){

}
MapPoint::MapPoint(char* name, double longitude,double latitude){
 _name=name;
 _longitude=longitude;
_latitude=latitude;
}
void MapPoint::setPoint(char* name, double longitude,double latitude){
 _name=name;
 _longitude=longitude;
_latitude=latitude;
}
void MapPoint::print()const{
    cout<<"Wspolrzedne dla "<<_name<<": ";
    cout<<abs(_longitude);
    (_longitude<0)? cout<<"W":cout<<"E";
    cout<<","<<abs(_latitude);
    (_latitude<0)? cout<<" S":cout<<" N";
    cout<<endl;

}
    double MapPoint::getLongitude()const{
        return _longitude;
    }
    double MapPoint::getLatitude()const{
        return _latitude;
    }
    void MapPoint::move(double x,double y){
        _longitude=_longitude+x;
        _latitude=_latitude+y;

    }
    char* MapPoint::getName()const{
        return _name;
    }


double distance(const MapPoint &a,const MapPoint &b){
    double x=a.getLongitude()-b.getLongitude();
    double y=a.getLatitude()-b.getLatitude();
    double disc=sqrt((x*x)+(y*y));
    return disc;
}
const MapPoint *closestPlace(const MapPoint& a, const MapPoint& b, const MapPoint& c){
    if(distance(a,b)<distance(a,c)) {
        return &b;
    }
    else 
        return &c;
   
}
MapPoint inTheMiddle(const MapPoint* a, MapPoint* b, char* name){
    MapPoint x(name,(a->getLongitude()+b->getLongitude())/2,(a->getLatitude()+b->getLatitude())/2);


    return x;
}