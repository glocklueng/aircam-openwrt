
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_ContainerOrderFocusTraversalPolicy__
#define __java_awt_ContainerOrderFocusTraversalPolicy__

#pragma interface

#include <java/awt/FocusTraversalPolicy.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class ContainerOrderFocusTraversalPolicy;
    }
  }
}

class java::awt::ContainerOrderFocusTraversalPolicy : public ::java::awt::FocusTraversalPolicy
{

public:
  ContainerOrderFocusTraversalPolicy();
  virtual ::java::awt::Component * getComponentAfter(::java::awt::Container *, ::java::awt::Component *);
private:
  ::java::awt::Component * getNextAvailableComponent(JArray< ::java::awt::Component * > *, jint, jint);
public: // actually package-private
  virtual ::java::awt::Component * getPrevAvailableComponent(JArray< ::java::awt::Component * > *, jint, jint);
public:
  virtual ::java::awt::Component * getComponentBefore(::java::awt::Container *, ::java::awt::Component *);
  virtual ::java::awt::Component * getFirstComponent(::java::awt::Container *);
  virtual ::java::awt::Component * getLastComponent(::java::awt::Container *);
  virtual ::java::awt::Component * getDefaultComponent(::java::awt::Container *);
  virtual void setImplicitDownCycleTraversal(jboolean);
  virtual jboolean getImplicitDownCycleTraversal();
public: // actually protected
  virtual jboolean accept(::java::awt::Component *);
public: // actually package-private
  static const jlong serialVersionUID = 486933713763926351LL;
private:
  jboolean __attribute__((aligned(__alignof__( ::java::awt::FocusTraversalPolicy)))) implicitDownCycleTraversal;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_ContainerOrderFocusTraversalPolicy__