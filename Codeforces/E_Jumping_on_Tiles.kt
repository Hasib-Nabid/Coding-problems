import kotlin.math.*
import java.util.*

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val s = readLine()!!
        val mn = min(s.first(), s.last())
        val mx = max(s.first(), s.last())
        
        val v = mutableListOf<Pair<Char, Int>>()
        for ((index, value) in s.withIndex()) {
            if (value >= mn && value <= mx) {
                v.add(value to index + 1)
            }
        }
        
        val cost = mx - mn
        if (s.first() == mn) {
            v.subList(1, v.size - 1).sortBy { it.second }
        } else {
            v.subList(1, v.size - 1).sortByDescending { it.second }
        }
        
        println("$cost ${v.size}")
        println(v.joinToString(" ") { it.second.toString() })
        println()
    }
}
