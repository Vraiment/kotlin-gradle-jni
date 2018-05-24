@file:JvmName("Main")

fun main(args: Array<String>) {
    println("Hello world")
    
    val library = System.getProperty("nativelib.path")

    println("Loading $library")

    System.load(library)

    sayHello()
}
