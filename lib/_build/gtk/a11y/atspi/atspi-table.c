/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "atspi-table.h"

#include <string.h>

/* ------------------------------------------------------------------------ */
/* Definitions for org.a11y.atspi.Table */

const GDBusArgInfo atspi_table_interface__get_accessible_at_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_accessible_at_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_accessible_at_method_in_args[] =
{
  &atspi_table_interface__get_accessible_at_method_in_args__row_arg,
  &atspi_table_interface__get_accessible_at_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_accessible_at_method_out_args__unnamed_arg2_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg2",
  (gchar *) "(so)",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_accessible_at_method_out_args[] =
{
  &atspi_table_interface__get_accessible_at_method_out_args__unnamed_arg2_arg,
  NULL,
};

const GDBusAnnotationInfo atspi_table_interface__get_accessible_at_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName.Out0",
  (gchar *) "QSpiObjectReference",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__get_accessible_at_method_annotations[] =
{
  &atspi_table_interface__get_accessible_at_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_accessible_at_method =
{
  -1,  /* ref count */
  (gchar *) "GetAccessibleAt",
  (GDBusArgInfo **) atspi_table_interface__get_accessible_at_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_accessible_at_method_out_args,
  (GDBusAnnotationInfo **) atspi_table_interface__get_accessible_at_method_annotations,
};

const GDBusArgInfo atspi_table_interface__get_index_at_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_index_at_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_index_at_method_in_args[] =
{
  &atspi_table_interface__get_index_at_method_in_args__row_arg,
  &atspi_table_interface__get_index_at_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_index_at_method_out_args__unnamed_arg2_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg2",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_index_at_method_out_args[] =
{
  &atspi_table_interface__get_index_at_method_out_args__unnamed_arg2_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_index_at_method =
{
  -1,  /* ref count */
  (gchar *) "GetIndexAt",
  (GDBusArgInfo **) atspi_table_interface__get_index_at_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_index_at_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_at_index_method_in_args__index_arg =
{
  -1,  /* ref count */
  (gchar *) "index",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_at_index_method_in_args[] =
{
  &atspi_table_interface__get_row_at_index_method_in_args__index_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_row_at_index_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_at_index_method_out_args[] =
{
  &atspi_table_interface__get_row_at_index_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_row_at_index_method =
{
  -1,  /* ref count */
  (gchar *) "GetRowAtIndex",
  (GDBusArgInfo **) atspi_table_interface__get_row_at_index_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_row_at_index_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_column_at_index_method_in_args__index_arg =
{
  -1,  /* ref count */
  (gchar *) "index",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_at_index_method_in_args[] =
{
  &atspi_table_interface__get_column_at_index_method_in_args__index_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_column_at_index_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_at_index_method_out_args[] =
{
  &atspi_table_interface__get_column_at_index_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_column_at_index_method =
{
  -1,  /* ref count */
  (gchar *) "GetColumnAtIndex",
  (GDBusArgInfo **) atspi_table_interface__get_column_at_index_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_column_at_index_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_description_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_description_method_in_args[] =
{
  &atspi_table_interface__get_row_description_method_in_args__row_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_row_description_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "s",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_description_method_out_args[] =
{
  &atspi_table_interface__get_row_description_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_row_description_method =
{
  -1,  /* ref count */
  (gchar *) "GetRowDescription",
  (GDBusArgInfo **) atspi_table_interface__get_row_description_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_row_description_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_column_description_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_description_method_in_args[] =
{
  &atspi_table_interface__get_column_description_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_column_description_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "s",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_description_method_out_args[] =
{
  &atspi_table_interface__get_column_description_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_column_description_method =
{
  -1,  /* ref count */
  (gchar *) "GetColumnDescription",
  (GDBusArgInfo **) atspi_table_interface__get_column_description_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_column_description_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_extent_at_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_extent_at_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_extent_at_method_in_args[] =
{
  &atspi_table_interface__get_row_extent_at_method_in_args__row_arg,
  &atspi_table_interface__get_row_extent_at_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_row_extent_at_method_out_args__unnamed_arg2_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg2",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_extent_at_method_out_args[] =
{
  &atspi_table_interface__get_row_extent_at_method_out_args__unnamed_arg2_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_row_extent_at_method =
{
  -1,  /* ref count */
  (gchar *) "GetRowExtentAt",
  (GDBusArgInfo **) atspi_table_interface__get_row_extent_at_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_row_extent_at_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_column_extent_at_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_column_extent_at_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_extent_at_method_in_args[] =
{
  &atspi_table_interface__get_column_extent_at_method_in_args__row_arg,
  &atspi_table_interface__get_column_extent_at_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_column_extent_at_method_out_args__unnamed_arg2_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg2",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_extent_at_method_out_args[] =
{
  &atspi_table_interface__get_column_extent_at_method_out_args__unnamed_arg2_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_column_extent_at_method =
{
  -1,  /* ref count */
  (gchar *) "GetColumnExtentAt",
  (GDBusArgInfo **) atspi_table_interface__get_column_extent_at_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_column_extent_at_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_header_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_header_method_in_args[] =
{
  &atspi_table_interface__get_row_header_method_in_args__row_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_row_header_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "(so)",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_header_method_out_args[] =
{
  &atspi_table_interface__get_row_header_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusAnnotationInfo atspi_table_interface__get_row_header_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName.Out0",
  (gchar *) "QSpiObjectReference",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__get_row_header_method_annotations[] =
{
  &atspi_table_interface__get_row_header_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_row_header_method =
{
  -1,  /* ref count */
  (gchar *) "GetRowHeader",
  (GDBusArgInfo **) atspi_table_interface__get_row_header_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_row_header_method_out_args,
  (GDBusAnnotationInfo **) atspi_table_interface__get_row_header_method_annotations,
};

const GDBusArgInfo atspi_table_interface__get_column_header_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_header_method_in_args[] =
{
  &atspi_table_interface__get_column_header_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_column_header_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "(so)",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_column_header_method_out_args[] =
{
  &atspi_table_interface__get_column_header_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusAnnotationInfo atspi_table_interface__get_column_header_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName.Out0",
  (gchar *) "QSpiObjectReference",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__get_column_header_method_annotations[] =
{
  &atspi_table_interface__get_column_header_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_column_header_method =
{
  -1,  /* ref count */
  (gchar *) "GetColumnHeader",
  (GDBusArgInfo **) atspi_table_interface__get_column_header_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_column_header_method_out_args,
  (GDBusAnnotationInfo **) atspi_table_interface__get_column_header_method_annotations,
};

const GDBusArgInfo atspi_table_interface__get_selected_rows_method_out_args__unnamed_arg0_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg0",
  (gchar *) "ai",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_selected_rows_method_out_args[] =
{
  &atspi_table_interface__get_selected_rows_method_out_args__unnamed_arg0_arg,
  NULL,
};

const GDBusAnnotationInfo atspi_table_interface__get_selected_rows_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName.Out0",
  (gchar *) "QSpiIntList",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__get_selected_rows_method_annotations[] =
{
  &atspi_table_interface__get_selected_rows_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_selected_rows_method =
{
  -1,  /* ref count */
  (gchar *) "GetSelectedRows",
  NULL,  /* no in args */
  (GDBusArgInfo **) atspi_table_interface__get_selected_rows_method_out_args,
  (GDBusAnnotationInfo **) atspi_table_interface__get_selected_rows_method_annotations,
};

const GDBusArgInfo atspi_table_interface__get_selected_columns_method_out_args__unnamed_arg0_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg0",
  (gchar *) "ai",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_selected_columns_method_out_args[] =
{
  &atspi_table_interface__get_selected_columns_method_out_args__unnamed_arg0_arg,
  NULL,
};

const GDBusAnnotationInfo atspi_table_interface__get_selected_columns_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName.Out0",
  (gchar *) "QSpiIntList",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__get_selected_columns_method_annotations[] =
{
  &atspi_table_interface__get_selected_columns_method_annotations__org_qtproject__qt_dbus__qt_type_name__out0_annotation,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_selected_columns_method =
{
  -1,  /* ref count */
  (gchar *) "GetSelectedColumns",
  NULL,  /* no in args */
  (GDBusArgInfo **) atspi_table_interface__get_selected_columns_method_out_args,
  (GDBusAnnotationInfo **) atspi_table_interface__get_selected_columns_method_annotations,
};

const GDBusArgInfo atspi_table_interface__is_row_selected_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_row_selected_method_in_args[] =
{
  &atspi_table_interface__is_row_selected_method_in_args__row_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__is_row_selected_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_row_selected_method_out_args[] =
{
  &atspi_table_interface__is_row_selected_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__is_row_selected_method =
{
  -1,  /* ref count */
  (gchar *) "IsRowSelected",
  (GDBusArgInfo **) atspi_table_interface__is_row_selected_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__is_row_selected_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__is_column_selected_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_column_selected_method_in_args[] =
{
  &atspi_table_interface__is_column_selected_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__is_column_selected_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_column_selected_method_out_args[] =
{
  &atspi_table_interface__is_column_selected_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__is_column_selected_method =
{
  -1,  /* ref count */
  (gchar *) "IsColumnSelected",
  (GDBusArgInfo **) atspi_table_interface__is_column_selected_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__is_column_selected_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__is_selected_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__is_selected_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_selected_method_in_args[] =
{
  &atspi_table_interface__is_selected_method_in_args__row_arg,
  &atspi_table_interface__is_selected_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__is_selected_method_out_args__unnamed_arg2_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg2",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__is_selected_method_out_args[] =
{
  &atspi_table_interface__is_selected_method_out_args__unnamed_arg2_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__is_selected_method =
{
  -1,  /* ref count */
  (gchar *) "IsSelected",
  (GDBusArgInfo **) atspi_table_interface__is_selected_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__is_selected_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__add_row_selection_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__add_row_selection_method_in_args[] =
{
  &atspi_table_interface__add_row_selection_method_in_args__row_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__add_row_selection_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__add_row_selection_method_out_args[] =
{
  &atspi_table_interface__add_row_selection_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__add_row_selection_method =
{
  -1,  /* ref count */
  (gchar *) "AddRowSelection",
  (GDBusArgInfo **) atspi_table_interface__add_row_selection_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__add_row_selection_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__add_column_selection_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__add_column_selection_method_in_args[] =
{
  &atspi_table_interface__add_column_selection_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__add_column_selection_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__add_column_selection_method_out_args[] =
{
  &atspi_table_interface__add_column_selection_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__add_column_selection_method =
{
  -1,  /* ref count */
  (gchar *) "AddColumnSelection",
  (GDBusArgInfo **) atspi_table_interface__add_column_selection_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__add_column_selection_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__remove_row_selection_method_in_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__remove_row_selection_method_in_args[] =
{
  &atspi_table_interface__remove_row_selection_method_in_args__row_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__remove_row_selection_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__remove_row_selection_method_out_args[] =
{
  &atspi_table_interface__remove_row_selection_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__remove_row_selection_method =
{
  -1,  /* ref count */
  (gchar *) "RemoveRowSelection",
  (GDBusArgInfo **) atspi_table_interface__remove_row_selection_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__remove_row_selection_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__remove_column_selection_method_in_args__column_arg =
{
  -1,  /* ref count */
  (gchar *) "column",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__remove_column_selection_method_in_args[] =
{
  &atspi_table_interface__remove_column_selection_method_in_args__column_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__remove_column_selection_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__remove_column_selection_method_out_args[] =
{
  &atspi_table_interface__remove_column_selection_method_out_args__unnamed_arg1_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__remove_column_selection_method =
{
  -1,  /* ref count */
  (gchar *) "RemoveColumnSelection",
  (GDBusArgInfo **) atspi_table_interface__remove_column_selection_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__remove_column_selection_method_out_args,
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_in_args__index_arg =
{
  -1,  /* ref count */
  (gchar *) "index",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_column_extents_at_index_method_in_args[] =
{
  &atspi_table_interface__get_row_column_extents_at_index_method_in_args__index_arg,
  NULL,
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__unnamed_arg1_arg =
{
  -1,  /* ref count */
  (gchar *) "unnamed_arg1",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__row_arg =
{
  -1,  /* ref count */
  (gchar *) "row",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__col_arg =
{
  -1,  /* ref count */
  (gchar *) "col",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__row_extents_arg =
{
  -1,  /* ref count */
  (gchar *) "row_extents",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__col_extents_arg =
{
  -1,  /* ref count */
  (gchar *) "col_extents",
  (gchar *) "i",
  NULL,  /* no annotations */
};

const GDBusArgInfo atspi_table_interface__get_row_column_extents_at_index_method_out_args__is_selected_arg =
{
  -1,  /* ref count */
  (gchar *) "is_selected",
  (gchar *) "b",
  NULL,  /* no annotations */
};

const GDBusArgInfo * const atspi_table_interface__get_row_column_extents_at_index_method_out_args[] =
{
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__unnamed_arg1_arg,
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__row_arg,
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__col_arg,
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__row_extents_arg,
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__col_extents_arg,
  &atspi_table_interface__get_row_column_extents_at_index_method_out_args__is_selected_arg,
  NULL,
};

const GDBusMethodInfo atspi_table_interface__get_row_column_extents_at_index_method =
{
  -1,  /* ref count */
  (gchar *) "GetRowColumnExtentsAtIndex",
  (GDBusArgInfo **) atspi_table_interface__get_row_column_extents_at_index_method_in_args,
  (GDBusArgInfo **) atspi_table_interface__get_row_column_extents_at_index_method_out_args,
  NULL,  /* no annotations */
};

const GDBusMethodInfo * const atspi_table_interface_methods[] =
{
  &atspi_table_interface__get_accessible_at_method,
  &atspi_table_interface__get_index_at_method,
  &atspi_table_interface__get_row_at_index_method,
  &atspi_table_interface__get_column_at_index_method,
  &atspi_table_interface__get_row_description_method,
  &atspi_table_interface__get_column_description_method,
  &atspi_table_interface__get_row_extent_at_method,
  &atspi_table_interface__get_column_extent_at_method,
  &atspi_table_interface__get_row_header_method,
  &atspi_table_interface__get_column_header_method,
  &atspi_table_interface__get_selected_rows_method,
  &atspi_table_interface__get_selected_columns_method,
  &atspi_table_interface__is_row_selected_method,
  &atspi_table_interface__is_column_selected_method,
  &atspi_table_interface__is_selected_method,
  &atspi_table_interface__add_row_selection_method,
  &atspi_table_interface__add_column_selection_method,
  &atspi_table_interface__remove_row_selection_method,
  &atspi_table_interface__remove_column_selection_method,
  &atspi_table_interface__get_row_column_extents_at_index_method,
  NULL,
};

const GDBusPropertyInfo atspi_table_interface__nrows_property =
{
  -1,  /* ref count */
  (gchar *) "NRows",
  (gchar *) "i",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  NULL,  /* no annotations */
};

const GDBusPropertyInfo atspi_table_interface__ncolumns_property =
{
  -1,  /* ref count */
  (gchar *) "NColumns",
  (gchar *) "i",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo atspi_table_interface__caption_property_annotations__org_qtproject__qt_dbus__qt_type_name_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName",
  (gchar *) "QSpiObjectReference",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__caption_property_annotations[] =
{
  &atspi_table_interface__caption_property_annotations__org_qtproject__qt_dbus__qt_type_name_annotation,
  NULL,
};

const GDBusPropertyInfo atspi_table_interface__caption_property =
{
  -1,  /* ref count */
  (gchar *) "Caption",
  (gchar *) "(so)",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  (GDBusAnnotationInfo **) atspi_table_interface__caption_property_annotations,
};

const GDBusAnnotationInfo atspi_table_interface__summary_property_annotations__org_qtproject__qt_dbus__qt_type_name_annotation =
{
  -1,  /* ref count */
  (gchar *) "org.qtproject.QtDBus.QtTypeName",
  (gchar *) "QSpiObjectReference",
  NULL,  /* no annotations */
};

const GDBusAnnotationInfo * const atspi_table_interface__summary_property_annotations[] =
{
  &atspi_table_interface__summary_property_annotations__org_qtproject__qt_dbus__qt_type_name_annotation,
  NULL,
};

const GDBusPropertyInfo atspi_table_interface__summary_property =
{
  -1,  /* ref count */
  (gchar *) "Summary",
  (gchar *) "(so)",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  (GDBusAnnotationInfo **) atspi_table_interface__summary_property_annotations,
};

const GDBusPropertyInfo atspi_table_interface__nselected_rows_property =
{
  -1,  /* ref count */
  (gchar *) "NSelectedRows",
  (gchar *) "i",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  NULL,  /* no annotations */
};

const GDBusPropertyInfo atspi_table_interface__nselected_columns_property =
{
  -1,  /* ref count */
  (gchar *) "NSelectedColumns",
  (gchar *) "i",
  G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  NULL,  /* no annotations */
};

const GDBusPropertyInfo * const atspi_table_interface_properties[] =
{
  &atspi_table_interface__nrows_property,
  &atspi_table_interface__ncolumns_property,
  &atspi_table_interface__caption_property,
  &atspi_table_interface__summary_property,
  &atspi_table_interface__nselected_rows_property,
  &atspi_table_interface__nselected_columns_property,
  NULL,
};

const GDBusInterfaceInfo atspi_table_interface =
{
  -1,  /* ref count */
  (gchar *) "org.a11y.atspi.Table",
  (GDBusMethodInfo **) atspi_table_interface_methods,
  NULL,  /* no signals */
  (GDBusPropertyInfo **) atspi_table_interface_properties,
  NULL,  /* no annotations */
};
