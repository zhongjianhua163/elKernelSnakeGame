//  ��ֵת�� - ������
//
//  ���ø�ʽ�� �������͡� ������ ��ͨ���� ��ת�����ı�����ֵ�� - ϵͳ����֧�ֿ�->��ֵת��
//  Ӣ�����ƣ�ToInt
//  ���ذ������ı��ڵ�����ֵ���ı�����һ���ʵ����͵���ֵ��֧��ȫ����д��ʽ��������Ҳ���������������͵�����ת��Ϊ������������Ϊ�������
//  ����<1>������Ϊ����ת�����ı�����ֵ��������Ϊ��ͨ���ͣ�all������

#include "stdafx.h"

void __cdecl
krnln_fnToInt(PMDATA_INF pRetData, UINT32 uArgCount, PMDATA_INF pArgInf) {
  switch (pArgInf->m_dtDataType) {
    case SDT_BOOL:
    case SDT_INT:
    case SDT_SHORT:
    case SDT_SUB_PTR:
      pRetData->m_int = pArgInf->m_int; 
      return;
  }
}
