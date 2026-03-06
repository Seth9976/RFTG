// 函数名称: sub_602c70
// 虚拟地址: 0x602c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_602c70(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t* eax_1 = sub_602020(edi[2], arg2)
    void* edi_1 = edi[2]
    arg1 = nullptr
    arg2 = nullptr
    
    if (eax_1 == 0)
        return 0x80070057
    
    BSTR bstrString_1
    *bstrString_1 = 0
    
    if ((**eax_1)(eax_1, 0x836120, &arg1) s< 0)
        if ((**eax_1)(eax_1, 0x836100, &arg2) s>= 0)
            *(edi_1 + 0x14a4) += 1
            sub_602b00(arg2, edi_1)
            int32_t* eax_12 = arg2
            (*(*eax_12 + 8))(eax_12)
        
        return 0
    
    int32_t* eax_5 = arg1
    
    if ((*(*eax_5 + 0x24))(eax_5, &bstrString_1) s>= 0)
        BSTR bstrString = bstrString_1
        
        if (bstrString != 0)
            SysFreeString(bstrString)
    
    int32_t* eax_8 = arg1
    (*(*eax_8 + 8))(eax_8)
    return 0
}
