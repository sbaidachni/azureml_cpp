import ctypes
import pathlib

if __name__ == "__main__":
    libname = pathlib.Path().absolute() / "hello_world.so"
    c_lib = ctypes.CDLL(libname)
    c_lib.say_hello()