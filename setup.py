from distutils.core import setup, Extension

setup(
		ext_modules = [
			Extension("ext1", sources=["ext1.c"]),
			],
		)
