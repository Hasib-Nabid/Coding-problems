import kotlin.io.*
import kotlin.text.*

fun main(args: Array<String>) {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
        val freq = IntArray(102) { 0 }

        for (i in 0 until n) {
            freq[a[i]]++
        }

        var x = 0
        for (i in 0 until 102) {
            if (freq[i] == 1) {
                x = i
                break
            }
        }

        for (i in 0 until n) {
            if (a[i] == x) {
                println(i + 1)
                break
            }
        }
    }
}