from setuptools import find_packages
from setuptools import setup

setup(
    name='px4_interface',
    version='0.0.0',
    packages=find_packages(
        include=('px4_interface', 'px4_interface.*')),
)
