from setuptools import find_packages, setup

package_name = 'sigmaprogram'

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
    maintainer='mobyy17',
    maintainer_email='mobyy17@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': ['publisher = sigmaprogram.sigma_publisher:main', 'subscriber = sigmaprogram.sigma_subscriber:main',
        ],
    },
)
