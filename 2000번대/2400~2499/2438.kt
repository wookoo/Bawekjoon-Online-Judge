import java.util.*

fun main(args : Array<String>){
    val sc:Scanner = Scanner(System.`in`)
    var a = sc.nextInt()
    for (i in 1..a){
        for (j in 1..i){
            print("*")
        }
        println()
    }
}
