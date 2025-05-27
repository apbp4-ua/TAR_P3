from setuptools import find_packages
from setuptools import setup

setup(
    name='srv_service_temp',
    version='0.0.0',
    packages=find_packages(
        include=('srv_service_temp', 'srv_service_temp.*')),
)
