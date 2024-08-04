from setuptools import find_packages, setup

package_name = 'py_publisher_subscriber'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='silas469',
    maintainer_email='silasudofia469@gmail.com',
    description='Custom py_publisher_subscriber',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = py_publisher_subscriber.pub_member_function:main',
            'listener = py_publisher_subscriber.sub_member_function:main',
        ],
    },
)
