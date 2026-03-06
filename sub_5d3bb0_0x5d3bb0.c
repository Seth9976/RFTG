// 函数名称: sub_5d3bb0
// 虚拟地址: 0x5d3bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d3bb0(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0xa0)
    int32_t* result = *(arg1 + 0xa0)
    
    if (result != 0)
        int32_t* ebx_1 = result[2]
        int32_t* esi_1 = result[1]
        int32_t* edi_1 = *result
        
        if (esi_1 != 0)
            (*(*esi_1 + 0x50))(esi_1, 0, 0)
            (*(*esi_1 + 0x58))(esi_1)
            (*(*esi_1 + 0x48))(esi_1)
        
        if (edi_1 != 0)
            (*(*edi_1 + 0x30))(edi_1)
        
        if (ebx_1 != 0)
            (*(*ebx_1 + 0x48))(ebx_1)
        
        if (edi_1 != 0)
            (*(*edi_1 + 8))(edi_1)
        
        int32_t var_14_6 = *(*(arg1 + 0xa0) + 0x10)
        sub_5d0af0()
        HANDLE hObject = *(*(arg1 + 0xa0) + 0xc)
        
        if (hObject != 0)
            CloseHandle(hObject)
        
        int32_t var_14_8 = *(arg1 + 0xa0)
        result = sub_5d0af0()
        *(arg1 + 0xa0) = 0
    
    return result
}
