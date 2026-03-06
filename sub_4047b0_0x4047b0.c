// 函数名称: sub_4047b0
// 虚拟地址: 0x4047b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4047b0(void* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (*(arg1 + 8) != 4)
    if (*(arg1 + 8) != 4)
        sub_4c5870("message.dataLen == 4", &data_83f3d3, "..\code\CClient.cpp", 0x6d5, 
            "ClientGotGamestateComplete")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = *(arg1 + 0xc)
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_4045b0(edi)
    int32_t var_c = eax_1
    int32_t var_8 = edx
    
    if (edx == 0)
        int32_t var_18 = edi
        return sub_4c57f0("got gamestate complete for game not in set (%d)")
    
    char* eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_404620(&var_c)
    *eax_3 = 1
    
    if (edx == 5)
        return sub_41c490(edx, &var_c, 0)
    
    void* eax_5 = data_27e7fd0
    
    if (*(eax_5 + 0x27) == 0)
        data_27c05f4 = 5
    else
        data_30d6f38 = 0
        data_30d6f3c = 0
        data_30d7278 = 0
        data_30d72c0 = 1
    
    return sub_42dd70(eax_5, edx_1, &var_c, &var_c, 1, 0, arg2)
}
