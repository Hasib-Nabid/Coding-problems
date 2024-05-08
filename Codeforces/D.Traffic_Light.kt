import kotlin.math.*

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        var (n, l, mx, ans) = listOf(0, 0, 0, 0)
        val ch = readLine()!!.first()
        var s = readLine()!! // Change val to var
        if (ch == 'g') {
            println(0)
        } else {
            var flag = false
            var i = 0
            s += s
            while (i < s.length) {
                if (s[i] == ch && !flag) {
                    l = 0
                    flag = true
                }
                if (flag) {
                    l++
                }
                if (s[i] == 'g' && flag) {
                    l = 0
                    flag = false
                }
                mx = max(mx, l)
                i++
            }
            println(mx)
        }
    }
}
