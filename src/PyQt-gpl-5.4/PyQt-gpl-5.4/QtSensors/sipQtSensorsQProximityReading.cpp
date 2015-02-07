/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:22 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtSensors.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtSensors/qproximitysensor.sip"
#include <qproximitysensor.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQProximityReading.cpp"


PyDoc_STRVAR(doc_QProximityReading_close, "QProximityReading.close() -> bool");

extern "C" {static PyObject *meth_QProximityReading_close(PyObject *, PyObject *);}
static PyObject *meth_QProximityReading_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QProximityReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProximityReading, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->close();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProximityReading, sipName_close, doc_QProximityReading_close);

    return NULL;
}


PyDoc_STRVAR(doc_QProximityReading_setClose, "QProximityReading.setClose(bool)");

extern "C" {static PyObject *meth_QProximityReading_setClose(PyObject *, PyObject *);}
static PyObject *meth_QProximityReading_setClose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QProximityReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QProximityReading, &sipCpp, &a0))
        {
            sipCpp->setClose(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProximityReading, sipName_setClose, doc_QProximityReading_setClose);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QProximityReading(void *, const sipTypeDef *);}
static void *cast_QProximityReading(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QProximityReading)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorReading)->ctd_cast((QSensorReading *)(QProximityReading *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QProximityReading(void *, int);}
static void release_QProximityReading(void *sipCppV,int)
{
    QProximityReading *sipCpp = reinterpret_cast<QProximityReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QProximityReading(sipSimpleWrapper *);}
static void dealloc_QProximityReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QProximityReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QProximityReading[] = {{54, 255, 1}};


static PyMethodDef methods_QProximityReading[] = {
    {SIP_MLNAME_CAST(sipName_close), meth_QProximityReading_close, METH_VARARGS, SIP_MLDOC_CAST(doc_QProximityReading_close)},
    {SIP_MLNAME_CAST(sipName_setClose), meth_QProximityReading_setClose, METH_VARARGS, SIP_MLDOC_CAST(doc_QProximityReading_setClose)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QProximityReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QProximityReading,
        {0}
    },
    {
        sipNameNr_QProximityReading,
        {0, 0, 1},
        2, methods_QProximityReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QProximityReading,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QProximityReading,
    0,
    0,
    0,
    release_QProximityReading,
    cast_QProximityReading,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QProximityReading::staticMetaObject,
    0,
    0,
    0
};
