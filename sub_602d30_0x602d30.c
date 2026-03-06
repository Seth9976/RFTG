// 函数名称: sub_602d30
// 虚拟地址: 0x602d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_602d30(BSTR arg1)
{
    // 第一条实际指令: BSTR bstrString = arg1
    BSTR bstrString = arg1
    int32_t edi
    int32_t var_10 = edi
    int32_t* arg_4
    int32_t* edi_1 = arg_4
    int32_t* arg_8
    int32_t* eax_1 = sub_602020(edi_1[2], arg_8)
    void* edi_2 = edi_1[2]
    arg_4 = nullptr
    arg_8 = nullptr
    
    if (eax_1 == 0)
        return 0x80070057
    
    if ((**eax_1)(eax_1, 0x836120, &arg_4) s< 0)
        int32_t** var_14_5 = &arg_8
        
        if ((**eax_1)(eax_1) s>= 0)
            sub_602b00(arg_8, edi_2)
            int32_t* eax_12 = arg_8
            (*(*eax_12 + 8))(eax_12)
        
        return 0
    
    int32_t* eax_4 = arg_4
    
    if ((*(*eax_4 + 0x24))(eax_4, &bstrString) s>= 0)
        BSTR bstrString_1 = bstrString
        
        if (bstrString_1 != 0)
            sub_5cd1f0(edi_2 + 0x78, bstrString_1, 0x10)
            sub_601c60(edi_2)
            SysFreeString(bstrString)
    
    int32_t* eax_7 = arg_4
    (*(*eax_7 + 8))(eax_7)
    return 0
}
