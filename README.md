# QIFResourcesEditor app

The QIF Resources Editor is a C#-based application which provides the capability to create and edit an inventory of measurement resources in the [ISO QIF](https://www.iso.org/standard/77461.html) format. The application is currently focused on the specification of CMMs and Probes (Sensors). 

For more information about QIF: 

* [QIF Standard Website](https://www.qifstandards.org)
* [QIF Community homepage](https://qualityinformationframework.github.io/)

## User Guide

**[The user guide for the QIF Resources Editor app can be found here.](doc/)**

## Supported File Formats

|   | Read  | Write  |
|:-:|:-:|:-:|
| MRD  | X  |  X |
| QIF 1.9.1  | X  |   |
| QIF 3.0.0  | X  | X  |

The MRD format is a legacy format proprietary to the [Pundit CMM application](https://www.capvidia.com/products/pundit).  It is supported mainly to allow users of the application to convert old files to QIF format.

QIF version 1.9.1 was a pre-release version of QIF 2.0. It is extremely close to the official QIF 2.0 release, and could be easily updated to 2.0 if required. 

## How to Build

1. **Install vcpkg** - Download and install `vcpkg`. [Detailed instructions on how to do this can be found here](https://github.com/microsoft/vcpkg). 

2. **Integrate vcpkg with Visual Studio** - Your Visual Studio installation needs to be configured to use the headers and libraries loaded with vcpkg. To do this, run the following command in the `vcpkg` directory:
```
vcpkg integrate install
```

3. **Install icu** - Install the `icu` package. This can be done by running the following command inside of the `vcpkg` directory: 
```
./vcpkg install icu:x64-windows
```
_Note: there can be a long delay when installing the icu package when executing line:_ `Building package icu[core]:x64-windows...`

4. **Install xerces-c** - Install the `xerces-c` package. This can be done by running the following command inside of the `vcpkg` directory: 
```
./vcpkg install xerces-c[icu,xmlch-wchar]:x64-windows
```
_Note: there can be a long delay when installing the icu package when executing line:_ `Building package xerces-c[core,icu,xmlch-wchar]:x64-windows`

5. **Open Visual Studio** - Open the solution `QIFResourcesEditor.sln` using Visual Studio 2019 or later. 

6. **Build** - Set the Startup project to `MeasurementResourceEditor` and build the solution

## Copyright

Copyright 2018-2020, Capvidia, Metrosage, and project contributors

https://www.capvidia.com/

## License

See [License](LICENSE.md)

## Other Libraries

* [ICU](http://site.icu-project.org/home)
* [xerces-c](https://xerces.apache.org/xerces-c/)