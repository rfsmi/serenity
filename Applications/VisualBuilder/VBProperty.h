#pragma once

#include <AK/AKString.h>
#include <LibGUI/GVariant.h>

class VBProperty {
public:
    VBProperty(const String& name, const GVariant& value);
    ~VBProperty();

    String name() const { return m_name; }
    const GVariant& value() const { return m_value; }
    void set_value(const GVariant& value) { m_value = value; }

    bool is_readonly() const { return m_readonly; }
    void set_readonly(bool b) { m_readonly = b; }

private:
    String m_name;
    GVariant m_value;
    bool m_readonly { false };
};
