// 函数名称: sub_5cab20
// 虚拟地址: 0x5cab20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cab20(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = 0xffffffff
    int32_t result = 0xffffffff
    
    if (arg1 == 0)
        char const* const __saved_edi = "messageboxdata"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    int32_t eax = sub_5d56b0()
    sub_5d5bb0(0)
    int32_t* eax_1
    int32_t edx
    eax_1, edx = sub_5d57c0(1)
    void* edi = arg2
    void var_c
    
    if (edi == 0)
        edi = &var_c
    void* ecx = data_bed820
    
    if (ecx == 0)
    label_5cab94:
        int32_t var_1c_2 = 1
        int32_t eax_4 = sub_5caae0(arg1, edx)
        int32_t eax_5
        
        if (eax_4 != 0)
            eax_5 = sub_5d8c90(arg1, edi)
        
        if (eax_4 == 0 || eax_5 != 0)
            sub_5cce60("No message system available")
        else
            result = 0
    else
        int32_t eax_2 = *(ecx + 0xe0)
        
        if (eax_2 == 0)
            goto label_5cab94
        
        int32_t result_1
        result_1, edx = eax_2(ecx, arg1, edi)
        result = result_1
        
        if (result == 0xffffffff)
            goto label_5cab94
    
    sub_5d57c0(eax_1)
    sub_5d5bb0(eax)
    return result
}
