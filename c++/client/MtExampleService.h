/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MtExampleService_H
#define MtExampleService_H

#include <TProcessor.h>
#include "example_types.h"



class MtExampleServiceIf {
 public:
  virtual ~MtExampleServiceIf() {}
  virtual int32_t SetUserProfile(const UserProfile& oProfile) = 0;
  virtual void GetUserProfile(UserProfile& _return, const int32_t userId) = 0;
};

class MtExampleServiceIfFactory {
 public:
  typedef MtExampleServiceIf Handler;

  virtual ~MtExampleServiceIfFactory() {}

  virtual MtExampleServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MtExampleServiceIf* /* handler */) = 0;
};

class MtExampleServiceIfSingletonFactory : virtual public MtExampleServiceIfFactory {
 public:
  MtExampleServiceIfSingletonFactory(const boost::shared_ptr<MtExampleServiceIf>& iface) : iface_(iface) {}
  virtual ~MtExampleServiceIfSingletonFactory() {}

  virtual MtExampleServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(MtExampleServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<MtExampleServiceIf> iface_;
};

class MtExampleServiceNull : virtual public MtExampleServiceIf {
 public:
  virtual ~MtExampleServiceNull() {}
  int32_t SetUserProfile(const UserProfile& /* oProfile */) {
    int32_t _return = 0;
    return _return;
  }
  void GetUserProfile(UserProfile& /* _return */, const int32_t /* userId */) {
    return;
  }
};

typedef struct _MtExampleService_SetUserProfile_args__isset {
  _MtExampleService_SetUserProfile_args__isset() : oProfile(false) {}
  bool oProfile;
} _MtExampleService_SetUserProfile_args__isset;

class MtExampleService_SetUserProfile_args {
 public:

  MtExampleService_SetUserProfile_args() {
  }

  virtual ~MtExampleService_SetUserProfile_args() throw() {}

  UserProfile oProfile;

  _MtExampleService_SetUserProfile_args__isset __isset;

  void __set_oProfile(const UserProfile& val) {
    oProfile = val;
  }

  bool operator == (const MtExampleService_SetUserProfile_args & rhs) const
  {
    if (!(oProfile == rhs.oProfile))
      return false;
    return true;
  }
  bool operator != (const MtExampleService_SetUserProfile_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MtExampleService_SetUserProfile_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MtExampleService_SetUserProfile_pargs {
 public:


  virtual ~MtExampleService_SetUserProfile_pargs() throw() {}

  const UserProfile* oProfile;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MtExampleService_SetUserProfile_result__isset {
  _MtExampleService_SetUserProfile_result__isset() : success(false) {}
  bool success;
} _MtExampleService_SetUserProfile_result__isset;

class MtExampleService_SetUserProfile_result {
 public:

  MtExampleService_SetUserProfile_result() : success(0) {
  }

  virtual ~MtExampleService_SetUserProfile_result() throw() {}

  int32_t success;

  _MtExampleService_SetUserProfile_result__isset __isset;

  void __set_success(const int32_t val) {
    success = val;
  }

  bool operator == (const MtExampleService_SetUserProfile_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MtExampleService_SetUserProfile_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MtExampleService_SetUserProfile_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MtExampleService_SetUserProfile_presult__isset {
  _MtExampleService_SetUserProfile_presult__isset() : success(false) {}
  bool success;
} _MtExampleService_SetUserProfile_presult__isset;

class MtExampleService_SetUserProfile_presult {
 public:


  virtual ~MtExampleService_SetUserProfile_presult() throw() {}

  int32_t* success;

  _MtExampleService_SetUserProfile_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MtExampleService_GetUserProfile_args__isset {
  _MtExampleService_GetUserProfile_args__isset() : userId(false) {}
  bool userId;
} _MtExampleService_GetUserProfile_args__isset;

class MtExampleService_GetUserProfile_args {
 public:

  MtExampleService_GetUserProfile_args() : userId(0) {
  }

  virtual ~MtExampleService_GetUserProfile_args() throw() {}

  int32_t userId;

  _MtExampleService_GetUserProfile_args__isset __isset;

  void __set_userId(const int32_t val) {
    userId = val;
  }

  bool operator == (const MtExampleService_GetUserProfile_args & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    return true;
  }
  bool operator != (const MtExampleService_GetUserProfile_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MtExampleService_GetUserProfile_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MtExampleService_GetUserProfile_pargs {
 public:


  virtual ~MtExampleService_GetUserProfile_pargs() throw() {}

  const int32_t* userId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MtExampleService_GetUserProfile_result__isset {
  _MtExampleService_GetUserProfile_result__isset() : success(false) {}
  bool success;
} _MtExampleService_GetUserProfile_result__isset;

class MtExampleService_GetUserProfile_result {
 public:

  MtExampleService_GetUserProfile_result() {
  }

  virtual ~MtExampleService_GetUserProfile_result() throw() {}

  UserProfile success;

  _MtExampleService_GetUserProfile_result__isset __isset;

  void __set_success(const UserProfile& val) {
    success = val;
  }

  bool operator == (const MtExampleService_GetUserProfile_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MtExampleService_GetUserProfile_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MtExampleService_GetUserProfile_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MtExampleService_GetUserProfile_presult__isset {
  _MtExampleService_GetUserProfile_presult__isset() : success(false) {}
  bool success;
} _MtExampleService_GetUserProfile_presult__isset;

class MtExampleService_GetUserProfile_presult {
 public:


  virtual ~MtExampleService_GetUserProfile_presult() throw() {}

  UserProfile* success;

  _MtExampleService_GetUserProfile_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MtExampleServiceClient : virtual public MtExampleServiceIf {
 public:
  MtExampleServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  MtExampleServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t SetUserProfile(const UserProfile& oProfile);
  void send_SetUserProfile(const UserProfile& oProfile);
  int32_t recv_SetUserProfile();
  void GetUserProfile(UserProfile& _return, const int32_t userId);
  void send_GetUserProfile(const int32_t userId);
  void recv_GetUserProfile(UserProfile& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MtExampleServiceProcessor : public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<MtExampleServiceIf> iface_;
  virtual bool process_fn(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext);
 private:
  std::map<std::string, void (MtExampleServiceProcessor::*)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, void*)> processMap_;
  void process_SetUserProfile(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_GetUserProfile(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MtExampleServiceProcessor(boost::shared_ptr<MtExampleServiceIf> iface) :
    iface_(iface) {
    processMap_["SetUserProfile"] = &MtExampleServiceProcessor::process_SetUserProfile;
    processMap_["GetUserProfile"] = &MtExampleServiceProcessor::process_GetUserProfile;
  }

  virtual bool process(boost::shared_ptr<apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr<apache::thrift::protocol::TProtocol> poprot, void* callContext);
  virtual ~MtExampleServiceProcessor() {}
};

class MtExampleServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MtExampleServiceProcessorFactory(const ::boost::shared_ptr< MtExampleServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< MtExampleServiceIfFactory > handlerFactory_;
};

class MtExampleServiceMultiface : virtual public MtExampleServiceIf {
 public:
  MtExampleServiceMultiface(std::vector<boost::shared_ptr<MtExampleServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MtExampleServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<MtExampleServiceIf> > ifaces_;
  MtExampleServiceMultiface() {}
  void add(boost::shared_ptr<MtExampleServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t SetUserProfile(const UserProfile& oProfile) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->SetUserProfile(oProfile);
      } else {
        ifaces_[i]->SetUserProfile(oProfile);
      }
    }
  }

  void GetUserProfile(UserProfile& _return, const int32_t userId) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->GetUserProfile(_return, userId);
        return;
      } else {
        ifaces_[i]->GetUserProfile(_return, userId);
      }
    }
  }

};



#endif
