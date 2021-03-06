// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8EntriesCallback.h"

#include "bindings/modules/v8/V8Entry.h"
#include "bindings/v8/V8Binding.h"
#include "bindings/v8/V8Callback.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

V8EntriesCallback::V8EntriesCallback(v8::Handle<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->executionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8EntriesCallback::~V8EntriesCallback()
{
}

void V8EntriesCallback::handleEvent(const HeapVector<Member<Entry> >& entries)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    if (m_scriptState->contextIsEmpty())
        return;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Handle<v8::Value> entriesHandle = v8Array(entries, m_scriptState->context()->Global(), isolate);
    if (entriesHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { entriesHandle };

    invokeCallback(m_scriptState.get(), m_callback.newLocal(isolate), 1, argv);
}

} // namespace WebCore
