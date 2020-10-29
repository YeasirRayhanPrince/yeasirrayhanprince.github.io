public class Point {
    private double x, y;

    Point(double x, double y){
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double distance(Point p){
        return Math.sqrt(Math.pow((this.x - p.x), 2) + Math.pow((this.y - p.y), 2));
    }

    public double slope(Point p){
        return (p.y - this.y)/(p.x - this.x);
    }

    public String toString(){
        return "x = " + this.x + " y = " + this.y;
    }
}
