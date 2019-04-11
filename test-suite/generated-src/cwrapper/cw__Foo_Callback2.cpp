// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_duplicate_file_creation.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "Foo_Callback2.hpp"

#include "cw__Foo_Callback2.hpp"
#include "dh__Foo_Record.hpp"
#include "dh__list_record_Foo_Record.hpp"

static void(*s_py_callback_Foo_Callback2_methodA)(DjinniObjectHandle * , DjinniObjectHandle *);
static void(*s_py_callback_Foo_Callback2_methodB)(DjinniObjectHandle * , DjinniObjectHandle *);
static void(*s_py_callback_Foo_Callback2___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::FooCallback2> DjinniWrapperFooCallback2::get(djinni::WrapperRef<DjinniWrapperFooCallback2> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void Foo_Callback2___delete(DjinniObjectHandle * dh) {
    s_py_callback_Foo_Callback2___delete(dh);
}
void Foo_Callback2___wrapper_add_ref(DjinniWrapperFooCallback2 * dh) {
    dh->ref_count.fetch_add(1);
}
void Foo_Callback2___wrapper_dec_ref(DjinniWrapperFooCallback2 * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperFooCallback2> DjinniWrapperFooCallback2::wrap(std::shared_ptr<::testsuite::FooCallback2> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperFooCallback2>(new DjinniWrapperFooCallback2{ std::move(obj) }, Foo_Callback2___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperFooCallback2 *  make_proxy_object_from_handle_cw__Foo_Callback2(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperFooCallback2{std::make_shared<FooCallback2PythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__Foo_Callback2(DjinniWrapperFooCallback2 * dw) {
    FooCallback2PythonProxy * cast_ptr = dynamic_cast<FooCallback2PythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__Foo_Callback2(DjinniWrapperFooCallback2 * dw1, DjinniWrapperFooCallback2 * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * FooCallback2PythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

FooCallback2PythonProxy::FooCallback2PythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

FooCallback2PythonProxy::~FooCallback2PythonProxy() {
    s_py_callback_Foo_Callback2___delete(m_py_obj_handle);
}

void Foo_Callback2_add_callback_methodA(void(* ptr)(DjinniObjectHandle * , DjinniObjectHandle *)) {
    s_py_callback_Foo_Callback2_methodA = ptr;
}

void Foo_Callback2_add_callback_methodB(void(* ptr)(DjinniObjectHandle * , DjinniObjectHandle *)) {
    s_py_callback_Foo_Callback2_methodB = ptr;
}

void Foo_Callback2_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_Foo_Callback2___delete = ptr;
}

void FooCallback2PythonProxy::methodA(const std::vector<::testsuite::FooRecord> & records) {
    auto _records = DjinniListRecordFooRecord::fromCpp(records);
    s_py_callback_Foo_Callback2_methodA(m_py_obj_handle, _records.release());
    djinni::cw_throw_if_pending();
}

void FooCallback2PythonProxy::methodB(const std::vector<::testsuite::FooRecord> & records) {
    auto _records = DjinniListRecordFooRecord::fromCpp(records);
    s_py_callback_Foo_Callback2_methodB(m_py_obj_handle, _records.release());
    djinni::cw_throw_if_pending();
}