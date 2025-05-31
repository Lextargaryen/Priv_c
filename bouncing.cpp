// bouncingBall
int bouncingBall(double h, double bounce, double window){
    if (h > 0 && (0 < bounce && bounce < 1) && window < h) {
        int i = 1 ;
        while (window < h*bounce) {
            h = h*bounce;
            i = i + 2;
        }
        return i ;
    }

    return -1 ;
}

