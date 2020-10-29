public class TestQuadrilateral {
    public static void main(String[] args) {
        Quadrilateral q1, q2, q3, q4, q5, q6, q7;
        q1 = new Quadrilateral(10, 20, 40, 20, 40, 40, 10, 40);
        q2 = new Quadrilateral(20, 30, 40, 30, 40, 50, 20, 50);
        Point p1 = new Point(50, 30);
        Point p2 = new Point(150, 30);
        Point p3 = new Point(100, 60);
        Point p4 = new Point(60, 70);
        q3 = new Quadrilateral(p1, p2, p3, p4);
        q4 = new Quadrilateral(6, 7, 36, 7, 48, 26, 18, 26);
        q5 = new Quadrilateral(2, -4, 9, -3, 4, 2, -3, 1);
        q6 = new Quadrilateral(1, -2, 4, 1, 1, 4, -2, 1);
        q7 = new Quadrilateral(39, 2, 47, 16, 16, 34, 8, 20);

        System.out.println(q1.isSquare());
        System.out.println(q1.isRectangle());
        System.out.println(q1.isRhombus());
        System.out.println(q1.isParallelogram());
        System.out.println(q1.isOrdinary());
        System.out.println();

        System.out.println(q2.isSquare());
        System.out.println(q2.isRectangle());
        System.out.println(q2.isRhombus());
        System.out.println(q2.isParallelogram());
        System.out.println(q2.isOrdinary());
        System.out.println();

        System.out.println(q3.isSquare());
        System.out.println(q3.isRectangle());
        System.out.println(q3.isRhombus());
        System.out.println(q3.isParallelogram());
        System.out.println(q3.isOrdinary());
        System.out.println();

        System.out.println(q4.isSquare());
        System.out.println(q4.isRectangle());
        System.out.println(q4.isRhombus());
        System.out.println(q4.isParallelogram());
        System.out.println(q4.isOrdinary());
        System.out.println();

        System.out.println(q5.isSquare());
        System.out.println(q5.isRectangle());
        System.out.println(q5.isRhombus());
        System.out.println(q5.isParallelogram());
        System.out.println(q5.isOrdinary());
        System.out.println();

        System.out.println(q6.isSquare());
        System.out.println(q6.isRectangle());
        System.out.println(q6.isRhombus());
        System.out.println(q6.isParallelogram());
        System.out.println(q6.isOrdinary());
        System.out.println();

        System.out.println(q7.isSquare());
        System.out.println(q7.isRectangle());
        System.out.println(q7.isRhombus());
        System.out.println(q7.isParallelogram());
        System.out.println(q7.isOrdinary());
    }
}
