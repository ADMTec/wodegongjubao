#pragma once
#include "DlgSetting.h"
#include "DlgTerrainEditor.h"
#include "DlgToolObject.h"

class CDlgToolbar : public CDlgBaseEditor
{
public:
	CDlgToolbar();
	~CDlgToolbar();
public:
	virtual void OnControlRegister();
	virtual bool OnInitDialog();

	void reset();
private:
	void OnBtnSetting();
	void OnBtnTerrain();
	void OnBtnObject();
	void OnClose();
	void closeAllChildDialog();
	CDlgSetting			m_dlgSetting;
	CDlgTerrainEditor	m_DlgTerrainEditor;
	CDlgToolObject		m_DlgToolObject;
};