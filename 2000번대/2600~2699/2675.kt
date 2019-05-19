import java.util.*

fun main(args : Array<String>){
    val sc:Scanner = Scanner(System.`in`)
    val count = sc.nextInt()
    for (i in 1..count){
        var loop = sc.nextInt()
        var needChange = sc.next()
        for (k in 0..needChange.length-1){
            for (j in 0..loop-1){
                print(needChange[k])
            }
        }
        println();
    }
}
