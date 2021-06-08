/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(fmcomms5_source.h)                                         */
/* BINDTOOL_HEADER_FILE_HASH(c665df9240c9c1460e51d3678c16deb5)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/iio/fmcomms5_source.h>
// pydoc.h is automatically generated in the build directory
#include <fmcomms5_source_f32c_pydoc.h>

void bind_fmcomms5_source_f32c(py::module& m)
{

    using fmcomms5_source_f32c = gr::iio::fmcomms5_source_f32c;


    py::class_<fmcomms5_source_f32c,
               gr::hier_block2,
               gr::basic_block,
               std::shared_ptr<fmcomms5_source_f32c>>(
        m, "fmcomms5_source_f32c", D(fmcomms5_source_f32c))

        .def(py::init(&fmcomms5_source_f32c::make),
             py::arg("uri"),
             py::arg("longfrequency1"),
             py::arg("longfrequency2"),
             py::arg("samplerate"),
             py::arg("bandwidth"),
             py::arg("tx1_en"),
             py::arg("tx2_en"),
             py::arg("tx3_en"),
             py::arg("tx4_en"),
             py::arg("buffer_size"),
             py::arg("quadrature"),
             py::arg("rfdc"),
             py::arg("bbdc"),
             py::arg("gain1"),
             py::arg("gain1_value"),
             py::arg("gain2"),
             py::arg("gain2_value"),
             py::arg("gain3"),
             py::arg("gain3_value"),
             py::arg("gain4"),
             py::arg("gain4_value"),
             py::arg("rf_port_select"),
             py::arg("filter_source") = "",
             py::arg("filter_filename") = "",
             py::arg("Fpass") = 0.0,
             py::arg("Fstop") = 0.0,
             D(fmcomms5_source_f32c, make))

        .def("set_params",
             &fmcomms5_source_f32c::set_params,
             py::arg("longfrequency1"),
             py::arg("longfrequency2"),
             py::arg("samplerate"),
             py::arg("bandwidth"),
             py::arg("quadrature"),
             py::arg("rfdc"),
             py::arg("bbdc"),
             py::arg("gain1"),
             py::arg("gain1_value"),
             py::arg("gain2"),
             py::arg("gain2_value"),
             py::arg("gain3"),
             py::arg("gain3_value"),
             py::arg("gain4"),
             py::arg("gain4_value"),
             py::arg("rf_port_select"),
             py::arg("filter_source") = "",
             py::arg("filter_filename") = "",
             py::arg("Fpass") = 0.0,
             py::arg("Fstop") = 0.0,
             D(fmcomms5_source_f32c, set_params))

        ;
}