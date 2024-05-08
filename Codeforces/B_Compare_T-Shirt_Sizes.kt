import kotlin.math.*

typealias vi = MutableList<Int>

fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun lcm(a: Int, b: Int): Int = a * (b / gcd(a, b))

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (a, b) = readLine()!!.split(" ")
        if (a == b) println("=")
        else if (a.last() == 'L' && b.last() == 'M') println(">")
        else if (a.last() == 'M' && b.last() == 'L') println("<")
        else if (a.last() == 'S' && b.last() == 'L') println("<")
        else if (a.last() == 'L' && b.last() == 'S') println(">")
        else if (a.last() == 'M' && b.last() == 'S') println(">")
        else if (a.last() == 'S' && b.last() == 'M') println("<")
        else if (a.last() == b.last()) {
            when (a.last()) {
                'S' -> {
                    if (a.length > b.length) println("<")
                    else println(">")
                }
                'L' -> {
                    if (a.length > b.length) println(">")
                    else println("<")
                }
            }
        }
    }
}