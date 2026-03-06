// 函数名称: sub_404700
// 虚拟地址: 0x404700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_404700(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) != 4)
    if (*(arg1 + 8) != 4)
        sub_4c5870("message.dataLen == 4", &data_83f3d3, "..\code\CClient.cpp", 0x6b0, 
            "ClientGotGamestateStart")
        
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
        return sub_4c57f0("got gamestate start for game not in set (%d)")
    
    char* result = sub_404620(&var_c)
    *result = 0
    *(result + 4) = 0
    *(result + 8) = 0
    *(result + 0x4e2c) = 0
    *(result + 0x4e30) = 0
    *(result + 0x9c54) = 0
    *(result + 0x9c58) = 0
    *(result + 0xea7c) = 0
    *(result + 0xea80) = 0
    return result
}
