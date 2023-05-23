#pragma once
#include <memory>
using namespace std;

class RefStr {
	shared_ptr<char[]> m_pStr;
public:
	RefStr()
		:m_pStr(new char[1] { 0 })
	{}
	
	RefStr(const char* p)
		:m_pStr(new char[strlen(p) + 1])
	{
		strcpy_s(m_pStr.get(), strlen(p) + 1, p);
	}
	operator char* () const { return m_pStr.get(); }
				
	int GetCount() const { return m_pStr.use_count(); }




	int len() const {
		return strlen(m_pStr.get());
	}

};
